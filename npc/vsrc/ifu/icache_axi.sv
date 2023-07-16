module icache_axi  
(
  
  //l2 interface
  input  logic                icache_l2_rreq,
  input  logic [63:0]         icache_l2_raddr,
  output logic [7:0] [31:0]   l2_icache_rdata,  
  output logic                l2_icache_rask,  

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


//------------------------------------------------
//---AXI control

  parameter MEM_BURST = 8;
  parameter BASE_ARMASK = ~64'b11111;

  logic [3:0] [63: 0] MEM_RDATA;
  logic               MEM_ASK;

    
  always_comb begin
    AXI_WREQ = 0;
    AXI_WADDR = 0;
    AXI_WMASK = 0;
    AXI_WDATA = 0;

    l2_icache_rask = MEM_ASK;
    l2_icache_rdata = MEM_RDATA;

  end


  always_ff @( posedge clk ) begin
    if(~rst_n) begin
      MEM_RDATA <= 0;
    end
    else if(AXI_RASK) 
      MEM_RDATA <= {AXI_RDATA, MEM_RDATA[3:1]};
  end


  logic [2:0] state, next_state;
  parameter IDLE = 0, RD0 = 1, RD1 = 2, RD2 = 3, RD3 = 4;


  always_ff @( posedge clk ) begin
    if(~rst_n) state <= 0;
    else state <= next_state;
  end


  always_comb begin

    case(state)
    IDLE: 
      if(icache_l2_rreq) begin
        next_state = RD0;
      end
      else next_state = IDLE;

    RD0: 
      if(AXI_RASK) begin
        next_state = RD1;
      end
      else next_state = RD0;

    RD1: 
      if(AXI_RASK) begin
        next_state = RD2;
      end
      else next_state = RD1;

    RD2: 
      if(AXI_RASK) begin
        next_state = RD3;
      end
      else next_state = RD2;

    RD3: 
      if(AXI_RASK) next_state = IDLE;
      else next_state = RD3;

    default: next_state = IDLE;

    endcase
  end



  always_ff@(posedge clk) begin
  if(~rst_n) begin
    AXI_RREQ <= 0;
    AXI_RADDR <= 0;
    MEM_ASK <= 0;
  end
  else 
    MEM_ASK <= 0;
    case(state)
    IDLE: 
      if(icache_l2_rreq) begin
        AXI_RREQ  <= 1;
        AXI_RADDR <= icache_l2_raddr & BASE_ARMASK;
      end
      else begin
        AXI_RREQ <= 0;  
      end

    RD0: 
      if(AXI_RASK) begin
        AXI_RREQ  <= 1;
        AXI_RADDR <= (icache_l2_raddr & BASE_ARMASK) + 64'd8;
      end
      else begin
        AXI_RREQ <= 0;  
      end

    RD1: 
      if(AXI_RASK) begin
        AXI_RREQ <= 1;
        AXI_RADDR <= (icache_l2_raddr & BASE_ARMASK) + 64'd16;
      end
      else begin
        AXI_RREQ <= 0;  
      end

    RD2: 
      if(AXI_RASK) begin
        AXI_RREQ <= 1;
        AXI_RADDR <= (icache_l2_raddr & BASE_ARMASK) + 64'd24;
      end
      else begin
        AXI_RREQ <= 0;

      end

    RD3: 
      if(AXI_RASK) begin
        AXI_RREQ <= 0;
        MEM_ASK <= 1;
      end
      else begin
        AXI_RREQ <= 0;
      end

    endcase
  end

endmodule
