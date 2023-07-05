//负责根据当前PC从存储器中取出一条指令
module ifetch_cache(

input clk,
input rst_n,

output  	ifetch_inst_vld,
output logic [63:0 ] ifetch_inst_pc,
output logic [63:0 ] ifetch_inst,

input  [63:0 ]  ifetch_taken_pc,
input      	    ifetch_taken,
input      	    ifetch_req,


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

	logic [63:0 ] pc_raddr;

  //===================================================
  //===control

    reg [5:0] pre_cnt;
    always_ff @( posedge clk ) begin : pre_count
    	if(~rst_n) pre_cnt <= 0;
    	else if(pre_cnt < 6'd10) pre_cnt <= pre_cnt + 1;
    end 


    always_comb begin
        pc_raddr = 64'h80000000;
        if(ifetch_req) pc_raddr = ifetch_taken? ifetch_taken_pc: ifetch_inst_pc +4;
        rreq = ifetch_req || (pre_cnt == 6'd9);
    end


    initial ifetch_inst_pc = 64'h80000000;
    always_ff @( posedge clk ) begin
    	if(~rst_n) ifetch_inst_pc <= 64'h80000000;
    	else if(ifetch_req) ifetch_inst_pc <= pc_raddr;
    end 


    assign ifetch_inst_vld = rask;
    assign ifetch_inst = mem_inst64 & 64'h00000000ffffffff;


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
    .RREQ(rreq), .IN_RADDR(pc_raddr), .RDATA_OUT(mem_inst64),
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
	.RREQ(rreq), .IN_RADDR(pc_raddr), .DATA_OUT(mem_inst64),

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

