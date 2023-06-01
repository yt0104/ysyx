`include "vsrc/file.sv"

//top module
module top(

input clk,
input rst_n,
output [63:0 ] inst,
output [`ISA_WIDTH-1:0] pc,

output mainUpdate_valid

);



wire [`ISA_WIDTH-1:0] IFU_pc;
wire [`ISA_WIDTH-1:0] IDU_pc;
wire [63:0] IFU_inst;
wire [63:0] IDU_inst;

logic ifetch_req;
logic IFU_vld;
logic IDU_vld;

wire [`REG_ADDR_WIDTH-1:0]   rd;
wire [`REG_ADDR_WIDTH-1:0]   rs1;
wire [`REG_ADDR_WIDTH-1:0]   rs2;
wire [`ISA_WIDTH-1:0]   imm;
opType op;
logic [`IDUf_WIDTH-1:0] flags;

logic [`ISA_WIDTH-1:0] ifetch_pc;



IFU_cache u_IFU(
    .clk(clk), .rst_n(rst_n), 
    .IFU_pc(IFU_pc), .IFU_inst(IFU_inst), .IFU_vld(IFU_vld), 
    .ifetch_pc(ifetch_pc), .ifetch_req(ifetch_req),

    .axi_AW_ADDR(axis1_AW_ADDR), .axi_AW_VALID(axis1_AW_VALID), .axi_AW_READY(axis1_AW_READY),
    .axi_W_DATA (axis1_W_DATA),  .axi_W_STRB  (axis1_W_STRB),   .axi_W_VALID (axis1_W_VALID), .axi_W_READY(axis1_W_READY),
    .axi_B_VALID(axis1_B_VALID), .axi_B_READY (axis1_B_READY),
    .axi_AR_ADDR(axis1_AR_ADDR), .axi_AR_VALID(axis1_AR_VALID), .axi_AR_READY(axis1_AR_READY),
    .axi_R_DATA (axis1_R_DATA),  .axi_R_VALID (axis1_R_VALID),  .axi_R_READY (axis1_R_READY)

    );

IDU u_IDU(
    .clk(clk), .rst_n(rst_n), 
    
    .IDU_vld(IDU_vld), .IDU_inst(IDU_inst), .IDU_pc(IDU_pc),
    .rd(rd), .rs1(rs1), .rs2(rs2), .imm(imm), .op(op), .flags(flags), 

    .IFU_vld(IFU_vld), .IFU_inst(IFU_inst), .IFU_pc(IFU_pc)
    );

EXU_cache u_EXU(
    .clk(clk), .rst_n(rst_n), 

    .IDU_pc(IDU_pc), .IDU_inst(IDU_inst), .IDU_vld(IDU_vld),
    .i_rd(rd), .i_rs1(rs1), .i_rs2(rs2), .i_imm(imm), .i_op(op), .i_flags(flags), 

    .ifetch_req(ifetch_req), .ifetch_pc(ifetch_pc),

    .main_valid(main_valid), .main_pc(main_pc), .main_inst(main_inst),

    .axi_AW_ADDR(axis2_AW_ADDR), .axi_AW_VALID(axis2_AW_VALID), .axi_AW_READY(axis2_AW_READY),
    .axi_W_DATA (axis2_W_DATA),  .axi_W_STRB  (axis2_W_STRB),   .axi_W_VALID (axis2_W_VALID), .axi_W_READY(axis2_W_READY),
    .axi_B_VALID(axis2_B_VALID), .axi_B_READY (axis2_B_READY),
    .axi_AR_ADDR(axis2_AR_ADDR), .axi_AR_VALID(axis2_AR_VALID), .axi_AR_READY(axis2_AR_READY),
    .axi_R_DATA (axis2_R_DATA),  .axi_R_VALID (axis2_R_VALID),  .axi_R_READY (axis2_R_READY)

    );


wire axis1_AW_VALID, axis1_AW_READY, axis1_W_VALID, axis1_W_READY, axis1_B_VALID, axis1_B_READY;
wire axis1_AR_VALID, axis1_AR_READY, axis1_R_VALID, axis1_R_READY;
wire [63:0] axis1_AW_ADDR, axis1_AR_ADDR;
wire [63:0] axis1_R_DATA,  axis1_W_DATA;
wire [7:0]  axis1_W_STRB;

wire axis2_AW_VALID, axis2_AW_READY, axis2_W_VALID, axis2_W_READY, axis2_B_VALID, axis2_B_READY;
wire axis2_AR_VALID, axis2_AR_READY, axis2_R_VALID, axis2_R_READY;
wire [63:0] axis2_AW_ADDR, axis2_AR_ADDR;
wire [63:0] axis2_R_DATA,  axis2_W_DATA;
wire [7:0]  axis2_W_STRB;


wire in_channel = axis2_AW_VALID || axis2_AR_VALID;

AXI_arbiter_SRAM u_AXI_arbiter_SRAM(
    .CLK(clk), .RESETN(rst_n), .in_channel(in_channel),

    .axi1_AW_ADDR(axis1_AW_ADDR), .axi1_AW_VALID(axis1_AW_VALID), .axi1_AW_READY(axis1_AW_READY),
    .axi1_W_DATA (axis1_W_DATA),  .axi1_W_STRB  (axis1_W_STRB),   .axi1_W_VALID (axis1_W_VALID), .axi1_W_READY(axis1_W_READY),
    .axi1_B_VALID(axis1_B_VALID), .axi1_B_READY (axis1_B_READY),
    .axi1_AR_ADDR(axis1_AR_ADDR), .axi1_AR_VALID(axis1_AR_VALID), .axi1_AR_READY(axis1_AR_READY),
    .axi1_R_DATA (axis1_R_DATA),  .axi1_R_VALID (axis1_R_VALID),  .axi1_R_READY (axis1_R_READY),

    .axi2_AW_ADDR(axis2_AW_ADDR), .axi2_AW_VALID(axis2_AW_VALID), .axi2_AW_READY(axis2_AW_READY),
    .axi2_W_DATA (axis2_W_DATA),  .axi2_W_STRB  (axis2_W_STRB),   .axi2_W_VALID (axis2_W_VALID), .axi2_W_READY(axis2_W_READY),
    .axi2_B_VALID(axis2_B_VALID), .axi2_B_READY (axis2_B_READY),
    .axi2_AR_ADDR(axis2_AR_ADDR), .axi2_AR_VALID(axis2_AR_VALID), .axi2_AR_READY(axis2_AR_READY),
    .axi2_R_DATA (axis2_R_DATA),  .axi2_R_VALID (axis2_R_VALID),  .axi2_R_READY (axis2_R_READY)
);



reg itrace_en;
always @(posedge clk) begin
    if(main_valid) itrace_en <= 1;
end

wire main_valid;
wire [`ISA_WIDTH-1:0] main_pc;
wire [`ISA_WIDTH-1:0] main_inst;


assign mainUpdate_valid = itrace_en? main_valid: 0;
assign pc =   main_pc;
assign inst = main_inst;

endmodule
