
module cache(

    input  logic WREQ,
    input  logic [63:0] IN_WADDR,
    input  logic [63:0] IN_WDATA,
    input  logic [7 : 0] IN_WMASK,

    input  logic RREQ,
    input  logic [63:0] IN_RADDR,
    output logic [63:0] RDATA_OUT,

    output logic ASK,

    input  logic direct_memory,
    
    /*AXI master interface*/
    output logic AXI_RREQ, 
    input  logic AXI_RASK,
    output logic [63:0] AXI_RADDR,
    input  logic [63:0] AXI_RDATA, 

    output logic AXI_WREQ,
    input  logic AXI_WASK,
    output logic [63:0] AXI_WADDR,
    output logic [63:0] AXI_WDATA,
    output logic [7:0]  AXI_WMASK,

    /*globel single*/
	input   clk,
	input   rst_n
    );

//***cache parameter

parameter BLOCK_WIDTH = 6;
parameter BLOCK_SIZE  = 64;

parameter SET_WIDTH   = 6;
parameter SET_SIZE    = 64;

parameter INADDR_MASK = BLOCK_SIZE -1 ;
parameter SET_MASK    = (SET_SIZE - 1)<< BLOCK_WIDTH;
parameter TAG_MASK    = (~INADDR_MASK) & (~SET_MASK);
parameter BNUM_MASK   = ~INADDR_MASK;

parameter LINE_WIDTH  = 2;
parameter LINE_SIZE   = 4;
parameter LINE_MASK   = LINE_SIZE - 1;


//***cache define

typedef struct packed{ 
    reg       valid;  
    reg       dirty; 
    reg [63:0]  tag;   
    reg [7:0] [63: 0]   data;  //64 * 8bit = 8* 64bit = 64B  
} cache_line_t;

typedef struct packed{ 
    cache_line_t [LINE_SIZE -1 :0] cache_line ;        //4line
} cache_set_t;

cache_set_t [SET_SIZE - 1: 0] cache ;  //64set



//------------------------------------------------
//---read & write

wire [63:0] cache_addr = WREQ? IN_WADDR: RREQ? IN_RADDR : 0;

logic [63:0] RADDR, WADDR;
logic [63:0] RDATA, WDATA;
logic [7 : 0] WMASK;
logic [63 : 0] WMASK64;

logic [5 : 0] raddr_offset;
logic [5 : 0] waddr_offset;
logic [5 : 0] wmask_offset;
logic [BLOCK_WIDTH - 3 - 1: 0] inaddr;
logic [SET_WIDTH - 1 : 0]   set;
logic [63 : 0] set64;
logic [63 : 0] tag;
logic [63 : 0] block_num;
logic [63 : 0] dirty_block_num;

logic direct_memory_r;


assign RDATA_OUT = direct_memory_r? RDATA: (RDATA >> raddr_offset);

generate
    genvar i;
    for (i =0 ;i < 8 ; i++) begin
        assign WMASK64[i*8+7:i*8] = {8{WMASK[i]}};
    end
endgenerate

assign waddr_offset  = (IN_WADDR[BLOCK_WIDTH - 1: 0] & 'b111) << 3 ;
assign wmask_offset  = (IN_WADDR[BLOCK_WIDTH - 1: 0] & 'b111);
assign raddr_offset  = (   RADDR[BLOCK_WIDTH - 1: 0] & 'b111) << 3 ;

always@(posedge clk)
    if(~rst_n) begin 
        direct_memory_r  <= 0;
        RADDR            <= 0; 
        WADDR            <= 0;    
        WDATA            <= 0;
        WMASK            <= 0;

        inaddr           <= 0;
        set              <= 0;
        set64            <= 0;
        tag              <= 0;
        block_num        <= 0;
        dirty_block_num  <= 0;
    end
    else if(WREQ | RREQ)begin
        direct_memory_r  <= direct_memory;
        RADDR            <= IN_RADDR; 
        WADDR            <= IN_WADDR; 
        WDATA            <= direct_memory? IN_WDATA: (IN_WDATA << waddr_offset);
        WMASK            <= direct_memory? IN_WMASK: (IN_WMASK << wmask_offset);

        inaddr           <= cache_addr[BLOCK_WIDTH - 1: 3] ;   
        set              <= cache_addr[BLOCK_WIDTH + SET_WIDTH - 1: BLOCK_WIDTH];
        set64            <= (cache_addr & SET_MASK ) >> BLOCK_WIDTH;
        tag              <= (cache_addr & TAG_MASK ) >>(BLOCK_WIDTH + SET_WIDTH);
        block_num        <= (cache_addr & BNUM_MASK) >> BLOCK_WIDTH;
        dirty_block_num  <= (cache[set].cache_line[op_line].tag << SET_WIDTH) + set64;
    end


logic cache_rd_busy, cache_wr_busy;
always@(posedge clk)
    if(~rst_n) {cache_rd_busy, cache_wr_busy} <= 0;
    else if(ASK)
        {cache_rd_busy, cache_wr_busy} <= 0;
    else if(RREQ)
        cache_rd_busy <= 1;
    else if(WREQ)
        cache_wr_busy <= 1;


//------------------------------------------------
//---state machine

reg [3:0] state, next_state;
localparam IDLE = 4'd0, HIT = 4'd1, INVALID = 4'd2, REPLACE = 4'd3, 
        WBACK = 4'd4, UPDATE = 4'd5, INOUT = 4'd6, 
        DIRECT_AXI_READ = 4'd7, DIRECT_AXI_WRITE = 4'd8;

always@(posedge clk)
    if(~rst_n) state <= 0;
    else state <= next_state;

reg [3:0] last_state;
always@(posedge clk)
    if(~rst_n) last_state <= 0;
    else last_state <= state;

always@(*)
    if(~rst_n) next_state = 0;
    else 
        case(state)
        IDLE: begin
            if(direct_memory) begin
                if(RREQ & ~ASK) next_state = DIRECT_AXI_READ;
                else if(WREQ & ~ASK) next_state = DIRECT_AXI_WRITE;
                else next_state = IDLE;
            end
            else begin
                if((RREQ | WREQ) & ~ASK) next_state = HIT;
                else next_state = IDLE;
            end
        end
        HIT: begin      //hit
            next_state = INVALID;
            for (integer j = 0; j < LINE_SIZE; j++) begin
                if(cache[set].cache_line[j].tag == tag && cache[set].cache_line[j].valid == 1) begin
                    next_state = INOUT;
                end
            end        
        end
        INVALID: begin  //invalid line
            next_state = REPLACE;
            for (integer j = 0; j < LINE_SIZE; j++) begin
                if(cache[set].cache_line[j].valid == 0) begin
                    next_state = UPDATE;
                end
            end
        end
        REPLACE: begin  //random replace
            next_state = WBACK;
        end          
        WBACK: begin    //write back
            if(~cache[set].cache_line[op_line].dirty) next_state = UPDATE;
            else if(MEM_WASK & MEM_WREQ) next_state = UPDATE;
            else next_state = WBACK; 
        end  
        UPDATE: begin   //update cache_line
            if(MEM_RREQ & MEM_RASK) next_state = INOUT;
            else next_state = UPDATE; 
        end        
        INOUT: begin    //READ/write cache
            next_state = IDLE;
        end
        DIRECT_AXI_READ: begin    //read/write memory
            if(MEM_RREQ & MEM_RASK) next_state = IDLE;
            else next_state = DIRECT_AXI_READ;
        end
        DIRECT_AXI_WRITE: begin    //read/write memory
            if(MEM_WREQ & MEM_WASK) next_state = IDLE;
            else next_state = DIRECT_AXI_WRITE;
        end

        default: begin
            next_state = IDLE;
        end
        endcase 


integer random = {$random()} & LINE_MASK;
wire [LINE_WIDTH - 1 : 0] random_line = (random == 0)? random[LINE_WIDTH - 1 : 0]: random[LINE_WIDTH - 1 : 0];

logic [LINE_WIDTH -1: 0] op_line;

always@(posedge clk)
    if(~rst_n) begin
        ASK <= 0;
        MEM_WREQ    <= 0;
        MEM_WADDR   <= 0;
        MEM_WDATA   <= 0;
        MEM_RREQ    <= 0;
        MEM_RADDR   <= 0;//64'h80000000 >> 6;
        op_line <= 0;
        MEM_BURST <= 0;
    end
    else begin
        case(state)
        IDLE: begin
            ASK <= 0;
            MEM_WREQ    <= 0;
            MEM_WADDR  <= 0;
            MEM_WDATA  <= 0;
            MEM_RREQ    <= 0;
            MEM_RADDR   <= 0;
            op_line <= 0;
            MEM_BURST <= 0;
        end
        HIT: begin
            for (integer j = 0; j < LINE_SIZE; j++) begin
                if(cache[set].cache_line[j].tag == tag) begin
                    op_line <= j[LINE_WIDTH-1 : 0];
                    break;
                end
            end
        end
        INVALID: begin
            for (integer j = 0; j < LINE_SIZE; j++) begin
                if(cache[set].cache_line[j].valid == 0) begin
                    op_line <= j[LINE_WIDTH-1 : 0];
                    break;
                end
            end
        end    
        REPLACE: begin
            op_line <= random_line; //random replace 0-3 
        end 
        WBACK: begin
            //mem_block_write
            if(MEM_WASK & MEM_WREQ) begin
                MEM_WREQ <= 0;
                cache[set].cache_line[op_line].dirty <= 0;
            end
            else if(cache[set].cache_line[op_line].dirty)begin
                MEM_WREQ <= 1;
                MEM_WADDR <= dirty_block_num << BLOCK_WIDTH;
                MEM_WDATA <= cache[set].cache_line[op_line].data;
                MEM_BURST <= 8;
            end
        end
        UPDATE: begin
            //mem_block_read
            if(MEM_RREQ & MEM_RASK) begin
                MEM_RREQ <= 0;
                cache[set].cache_line[op_line].data <= MEM_RDATA;
                cache[set].cache_line[op_line].dirty <= 0;
            end
            else begin
                MEM_RREQ <= 1;
                MEM_RADDR <= block_num << BLOCK_WIDTH;
                MEM_BURST <= 8;
                end
        end
        INOUT: begin
            ASK <= 1;
            cache[set].cache_line[op_line].valid <= 1;
            cache[set].cache_line[op_line].tag <= tag;

            if(cache_wr_busy) cache[set].cache_line[op_line].dirty <= 1;
            //else if(cache_rd_busy && last_state != HIT) cache[set].cache_line[op_line].dirty <= 0;

            if(cache_wr_busy)  cache[set].cache_line[op_line].data[inaddr] <= (cache[set].cache_line[op_line].data[inaddr] &~WMASK64) | (WDATA & WMASK64);
            else if(cache_rd_busy) RDATA <= (cache[set].cache_line[op_line].data[inaddr]);
        end 
        DIRECT_AXI_READ: begin
            if(MEM_RREQ & MEM_RASK) begin
                ASK <= 1;
                MEM_RREQ <= 0;
                RDATA <= MEM_RDATA[0];
            end
            else begin
                MEM_RREQ <= 1;
                MEM_RADDR <= RADDR;
                MEM_BURST <= 1;
            end
        end
        DIRECT_AXI_WRITE: begin
            if(MEM_WREQ & MEM_WASK) begin
                ASK <= 1;
                MEM_WREQ <= 0;
            end
            else begin
                MEM_WREQ <= 1;
                MEM_WADDR <= WADDR;
                MEM_WDATA[0] <= WDATA;
                MEM_BURST <= 1;
            end
        end
        default: ;
        endcase
    end


//------------------------------------------------
//---AXI control

    logic [5:0] MEM_BURST;

    logic MEM_WREQ;
    logic [63: 0] MEM_WADDR;
    logic [7:0] [63: 0] MEM_WDATA;
    logic MEM_WASK;

    logic MEM_RREQ;
    logic [63: 0] MEM_RADDR;
    logic [7:0] [63: 0] MEM_RDATA;
    logic MEM_RASK;

    assign AXI_RADDR = MEM_RADDR + (rcnt *8);
    assign AXI_WADDR = MEM_WADDR + (wcnt *8);

    assign AXI_RREQ = MEM_RREQ && (rcnt < MEM_BURST);
    assign AXI_WREQ = MEM_WREQ && (wcnt < MEM_BURST);

    assign AXI_WMASK = direct_memory_r? WMASK: 8'hff;

    always@(posedge clk)
    if(~rst_n) MEM_RASK <= 0;
    else if((rcnt == MEM_BURST-1) && AXI_RASK) MEM_RASK <= 1;
    else MEM_RASK <= 0;


    always@(posedge clk)
    if(~rst_n) MEM_WASK <= 0;
    else if((wcnt == MEM_BURST-1) && AXI_WASK) MEM_WASK <= 1;
    else MEM_WASK <= 0;


    reg [5:0] rcnt;
    always@(posedge clk)
    if(~rst_n) rcnt <= 0;
    else if(MEM_RREQ) begin
        if(AXI_RASK) begin
            rcnt <= rcnt + 1;
            MEM_RDATA[rcnt] <= AXI_RDATA;
        end
    end
    else rcnt <= 0;
    

    assign AXI_WDATA = MEM_WDATA[wcnt];
    reg [5:0] wcnt;
    always@(posedge clk)
    if(~rst_n) wcnt <= 0;
    else if(MEM_WREQ) begin
        if(AXI_WASK) begin
            wcnt <= wcnt + 1;
        end
    end
    else wcnt <= 0;


endmodule


