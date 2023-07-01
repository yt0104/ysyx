module LSU(

    input clk,
    input rst_n,

    input           ld_req,
    input           st_req,
    input  [2:0]     func3,
    input  [63:0]   src1,
    input  [63:0]   src2,
    input  [63:0]   dest,
    input  [63:0]   imm,


    output logic [63:0]  ld_data_out,
    output logic         lsu_data_vld,

    //AXI
    output  [63 : 0] 	axi_AW_ADDR,
    output  			axi_AW_VALID,
    input   			axi_AW_READY,

    output  [63 : 0] 	axi_W_DATA,
    output  [7 :0] 		axi_W_STRB,
    output  			axi_W_VALID,
    input   			axi_W_READY,

    input   			axi_B_VALID,
    output  			axi_B_READY,

    output  [63 : 0] 	axi_AR_ADDR,
    output  			axi_AR_VALID,
    input   			axi_AR_READY,

    input   [63 : 0] 	axi_R_DATA,
    input   			axi_R_VALID,
    output  			axi_R_READY

);


  always_comb begin
    renM = ld_req;
    wenM = st_req;
    raddrM = src1 + imm;
    waddrM = src1 + imm;
    wdataM = src2;
  end


  always_comb begin
    case(func3[1:0])
    2'b00: wmaskM = 8'b00000001;
    2'b01: wmaskM = 8'b00000011;
    2'b10: wmaskM = 8'b00001111;
    2'b11: wmaskM = 8'b11111111;
    default: wmaskM = 0;
    endcase
  end


  always_comb begin
    case (func3)
      3'b100   : begin ld_data_out = {56'b0, rdataM[ 7:0]};              end
      3'b101   : begin ld_data_out = {48'b0, rdataM[15:0]};              end
      3'b110   : begin ld_data_out = {32'b0, rdataM[31:0]};              end
      3'b011   : begin ld_data_out = rdataM;                             end
      3'b010   : begin ld_data_out = { {32{rdataM[31]}}, rdataM[31:0] };  end
      3'b001   : begin ld_data_out = { {48{rdataM[15]}}, rdataM[15:0] };  end
      3'b000   : begin ld_data_out = { {56{rdataM[7 ]}}, rdataM[7 :0] };  end
      default: ld_data_out = 0;
    endcase

    lsu_data_vld = dataM_valid;

  end



  logic [63:0] raddrM, rdataM;
  logic [63:0] waddrM, wdataM;
  logic [7:0]  wmaskM;
  logic wenM,renM;
  logic dataM_valid;



`ifdef DCACHE_enable

  cache d_cache(
    .clk(clk),
    .rst_n(rst_n),
 
    /*AXI interface*/
	  .AXI_WREQ(AXI_WREQ), .AXI_WASK(AXI_WASK), .AXI_WADDR(AXI_WADDR), .AXI_WDATA(AXI_WDATA), .AXI_WMASK(AXI_WMASK), 
	  .AXI_RREQ(AXI_RREQ), .AXI_RASK(AXI_RASK), .AXI_RADDR(AXI_RADDR), .AXI_RDATA(AXI_RDATA),

    /*user interface*/
    .WREQ(wenM), .IN_WADDR(waddrM), .IN_WDATA(wdataM), .IN_WMASK(wmaskM),
    .RREQ(renM), .IN_RADDR(raddrM), .RDATA_OUT(rdataM),
    .ASK(dataM_valid),
    .direct_memory(1)
    );


  logic AXI_RREQ, AXI_WREQ;
  logic AXI_RASK, AXI_WASK;
  logic [63:0] AXI_RADDR, AXI_WADDR;
  logic [63:0] AXI_RDATA, AXI_WDATA;
  logic [7:0] AXI_WMASK;

  assign AXI_RASK = axi_R_VALID & axi_R_READY;
  assign AXI_WASK = axi_W_VALID & axi_W_READY;

	AXI_master_SRAM u1_AXI_master_SRAM
	(
	  //user interface
	  .WREQ(AXI_WREQ), .IN_WADDR(AXI_WADDR), .IN_WDATA(AXI_WDATA), .IN_WMASK(AXI_WMASK), 
	  .RREQ(AXI_RREQ), .IN_RADDR(AXI_RADDR), .DATA_OUT(AXI_RDATA),

	  .CLK(clk), .RESETN(rst_n),
    .AW_ADDR(axi_AW_ADDR), .AW_VALID(axi_AW_VALID), .AW_READY(axi_AW_READY),
    .W_DATA (axi_W_DATA),  .W_STRB  (axi_W_STRB),   .W_VALID (axi_W_VALID), .W_READY(axi_W_READY),
    .B_VALID(axi_B_VALID), .B_READY (axi_B_READY),
    .AR_ADDR(axi_AR_ADDR), .AR_VALID(axi_AR_VALID), .AR_READY(axi_AR_READY),
    .R_DATA (axi_R_DATA),  .R_VALID (axi_R_VALID),  .R_READY (axi_R_READY)
	);

`else

  AXI_master_SRAM u1_AXI_master_SRAM(
    //user interface
    .WREQ(wenM), .IN_WADDR(waddrM), .IN_WDATA(wdataM), .IN_WMASK(wmaskM), 
    .RREQ(renM), .IN_RADDR(raddrM), .DATA_OUT(rdataM), 

    .CLK(clk), .RESETN(rst_n),
    .AW_ADDR(axi_AW_ADDR), .AW_VALID(axi_AW_VALID), .AW_READY(axi_AW_READY),
    .W_DATA (axi_W_DATA),  .W_STRB  (axi_W_STRB),   .W_VALID (axi_W_VALID), .W_READY(axi_W_READY),
    .B_VALID(axi_B_VALID), .B_READY (axi_B_READY),
    .AR_ADDR(axi_AR_ADDR), .AR_VALID(axi_AR_VALID), .AR_READY(axi_AR_READY),
    .R_DATA (axi_R_DATA),  .R_VALID (axi_R_VALID),  .R_READY (axi_R_READY)
  );

  assign dataM_valid = (axi_R_READY & axi_R_VALID) | (axi_W_READY & axi_W_VALID);

`endif 

endmodule