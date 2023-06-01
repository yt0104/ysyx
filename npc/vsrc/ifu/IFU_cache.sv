//负责根据当前PC从存储器中取出一条指令
module IFU_cache(

input clk,
input rst_n,

output logic [63:0 ] pc,
output logic [63:0 ] inst,
output reg      IDU_valid,
input 			IDU_ready,

input  [63:0 ]  npc,
input      	IFU_valid,
output  	IFU_ready,

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

  //===================================================
  //===control

	reg [5:0] pre_cnt;
	always@(posedge clk )
		if(~rst_n) pre_cnt <= 0;
		else if(pre_cnt < 6'd10) pre_cnt <= pre_cnt + 1;


    always @(posedge clk) begin
    	if(~rst_n) rreq <= 0;
    	else if(IFU_valid & IFU_ready) rreq <= 1;
    	else if(pre_cnt == 6'd9) rreq <= 1;
    	else if(rask) rreq <= 0;
        //else rreq <= 0;
    end
    

	always @(posedge clk) 
		if(~rst_n) IDU_valid <= 0;
		else if(IDU_ready && IDU_valid) IDU_valid <= 0;
		else if(rask) IDU_valid <= 1;
		

	initial IFU_ready = 1;
	always @(posedge clk) 
		if(~rst_n) IFU_ready <= 0;
		else if(IDU_valid && IDU_ready) IFU_ready <= 1;	//ifetch finish
		else if(IFU_valid & IFU_ready) IFU_ready <= 0;		//ifetch start


	always @(posedge clk) 
		if(~rst_n) inst <= 0;
        else if(rask) inst <= mem_inst64 & 64'h00000000ffffffff;


	initial pc = 64'h80000000;

	always@(posedge clk )
		if(~rst_n) pc <= 64'h80000000;
		else if(IFU_valid & IFU_ready) pc <= npc;
		else pc <= pc;


  //===================================================
  //===memory

    logic [63:0] mem_inst64;
    logic rask;
    logic rreq;

`ifdef ICACHE_enable

    cache i_cache(
    .clk(clk),
    .rst_n(rst_n),
 
    /*AXI interface*/
	.AXI_WREQ(AXI_WREQ), .AXI_WASK(AXI_WASK), .AXI_WADDR(AXI_WADDR), .AXI_WDATA(AXI_WDATA), .AXI_WMASK(AXI_WMASK), 
	.AXI_RREQ(AXI_RREQ), .AXI_RASK(AXI_RASK), .AXI_RADDR(AXI_RADDR), .AXI_RDATA(AXI_RDATA),

    /*user interface*/
    .WREQ(0), .IN_WADDR(0), .IN_WDATA(0), .IN_WMASK(0),
    .RREQ(rreq), .IN_RADDR(pc), .RDATA_OUT(mem_inst64),
    .ASK(rask),
    .direct_memory(0)
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

	AXI_master_SRAM u1_AXI_master_SRAM
	(
	//user interface
	.WREQ(0), .IN_WADDR(0), .IN_WDATA(0), .IN_WMASK(0), 
	.RREQ(rreq), .IN_RADDR(pc), .DATA_OUT(mem_inst64),

	.CLK(clk), .RESETN(rst_n),
    .AW_ADDR(axi_AW_ADDR), .AW_VALID(axi_AW_VALID), .AW_READY(axi_AW_READY),
    .W_DATA (axi_W_DATA),  .W_STRB  (axi_W_STRB),   .W_VALID (axi_W_VALID), .W_READY(axi_W_READY),
    .B_VALID(axi_B_VALID), .B_READY (axi_B_READY),
    .AR_ADDR(axi_AR_ADDR), .AR_VALID(axi_AR_VALID), .AR_READY(axi_AR_READY),
    .R_DATA (axi_R_DATA),  .R_VALID (axi_R_VALID),  .R_READY (axi_R_READY)
	);

    assign rask = axi_R_VALID & axi_R_READY;

`endif 

endmodule

