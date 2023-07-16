
module icache  
(

  input  logic        icache_rreq,
  input  logic [63:0] icache_raddr,
  
  output logic        icache_rask,
  output logic [31:0] icache_rdata,

  output logic        icache_hit,
  output logic        icache_inv,
  output logic        icache_rep,
  
  //l2 interface
  output logic                icache_l2_rreq,
  output logic [63:0]         icache_l2_raddr,
  input  logic [7:0] [31:0]   l2_icache_rdata,  
  input  logic                l2_icache_rask,  

  /*globel single*/
	input   clk,
	input   rst_n
  );
    
//***cache parameter

  //8kb

  parameter WAY_SIZE = 4;
  parameter SET_SIZE = 64;  //64set
  parameter LINE_SIZE = 310;

  parameter OFFSET_W = 5;
  parameter INDEX_W  = $clog2(SET_SIZE);

  typedef struct packed{ 
    logic        vld;  
    logic [52:0] tag;   //64 - 6 - 5
    logic [7:0] [31: 0] data;  //line:8 * 32bit = 32B    offset: 5bit
  } iCacheLine_t; //256 + 53 + 1

  typedef struct packed{ 
    iCacheLine_t [WAY_SIZE -1 :0] line ;        //4line
  } iCacheEntry_t;

  iCacheEntry_t entry;

  logic [$clog2(WAY_SIZE) -1: 0] op_line;


  reg [1:0] state, next_state;
  localparam IDLE = 0, RD = 1, L2RD = 2;

  always@(posedge clk)
    if(~rst_n) state <= 0;
    else state <= next_state;


  always_comb begin : RD_CONTROL
    sram_rd   = 0;
    sram_radr = 0;
    sram_wdat= 0;
    sram_wadr = 0;
    sram_wr   = 0;

    entry = 0;
    op_line = 0;

    icache_rask = 0;
    icache_rdata = 0;

    icache_hit   = 0;
    icache_inv   = 0;
    icache_rep   = 0;

    icache_l2_rreq = 0;
    //icache_l2_raddr = 0;

    case(state)
    IDLE: begin
      next_state = IDLE;
      if(icache_rreq) begin
        next_state = RD;
        sram_rd   = 1;
        sram_radr = icache_raddr[(INDEX_W+OFFSET_W-1): OFFSET_W];
      end
    end
    RD: begin
      next_state = RD;
      entry = sram_rdat;

      for(int i = 0; i < WAY_SIZE; i++) begin
        if(entry.line[i].vld && entry.line[i].tag == icache_raddr_d[63:(INDEX_W+OFFSET_W)]) begin   //hit
          next_state = IDLE;
          icache_hit = 1;
          icache_rask = 1;
          icache_rdata = entry.line[i].data[icache_raddr_d[OFFSET_W-1:2]];
          break;
        end
      end
      if(~icache_hit) begin
        next_state = L2RD;
        icache_l2_rreq = 1;
        icache_l2_raddr = icache_raddr_d;
      end
    end
    L2RD: begin
      next_state = L2RD;
      if(l2_icache_rask) begin

        for(int i = 0; i < WAY_SIZE; i++) begin
          if(~entry.line[i].vld) begin   //invalid
            op_line = i[$clog2(WAY_SIZE)-1:0];
            icache_inv = 1;
            break;
          end
        end
        if(~icache_inv) begin   //replace
          op_line = icache_raddr_d[4:3];
          icache_rep = 1;
        end

        next_state = IDLE;
        icache_rask  = 1;
        icache_rdata = l2_icache_rdata[icache_raddr_d[OFFSET_W-1:2]];

        entry = sram_rdat_d;
        entry.line[op_line].data = l2_icache_rdata;
        entry.line[op_line].tag = icache_raddr_d[63:(INDEX_W+OFFSET_W)];
        entry.line[op_line].vld = 1;
        sram_wdat = entry;
        sram_wadr = icache_raddr_d[(INDEX_W+OFFSET_W-1): OFFSET_W];
        sram_wr = 1;
      end
    end
    endcase
  end


  logic [63:0] icache_raddr_d;
  iCacheEntry_t   sram_rdat_d;
  always_ff @( posedge clk ) begin
    if(~rst_n) begin
      icache_raddr_d <= 0;
      sram_rdat_d <= 0;
    end
    else if(icache_rreq) begin
      icache_raddr_d <= icache_raddr;
      sram_rdat_d <= sram_rdat;
    end
  end




  logic           sram_wr;
  logic [5:0]     sram_wadr;
  iCacheEntry_t   sram_wdat;
  
  logic           sram_rd;
  logic [5:0]     sram_radr;
  iCacheEntry_t   sram_rdat;

  multiport_ram #(
    .ENTRY_CNT(SET_SIZE),  
    .ENTRY_WIDTH(WAY_SIZE*LINE_SIZE),
    .R_PORT(1)
  )icache_array(
    .clk    (clk),
    .wr     (sram_wr),
    .wadr   (sram_wadr),
    .wdat   (sram_wdat),
  
    .rd     (sram_rd),
    .radr   (sram_radr),
    .rdat   (sram_rdat)
  );



endmodule



