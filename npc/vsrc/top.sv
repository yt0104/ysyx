`include "vsrc/file.sv"

//top module
module top(

input clk,
input rst_n,

//predictor interface
output byte  jmp_type,
output logic ifetch_taken,
output logic [`ISA_WIDTH-1:0] ifetch_taken_pc,

//top interface
output logic mainUpdate_valid,
output logic [`ISA_WIDTH-1:0] pc

);


logic ifetch_inst_vld;
logic [`ISA_WIDTH-1:0] ifetch_inst_pc;
logic [63:0] ifetch_inst;

logic dec_inst_vld;
logic [`ISA_WIDTH-1:0] dec_inst_pc;
logic [63:0] dec_inst;


logic exu_inst_vld;
logic [`ISA_WIDTH-1:0] exu_inst_pc;
logic [63:0] exu_inst;
logic exu_stall;


logic [`REG_ADDR_WIDTH-1:0]   rd;
logic [`REG_ADDR_WIDTH-1:0]   rs1;
logic [`REG_ADDR_WIDTH-1:0]   rs2;
logic [`ISA_WIDTH-1:0]   imm;
opType op;
InstAct  inst_act;
InstType inst_type;

logic [`ISA_WIDTH-1:0] src1;
logic [`ISA_WIDTH-1:0] src2;

logic           alu_wb_vld ;
logic   [4:0]   alu_wb_addr;
logic   [63:0]  alu_wb_data;
logic           csr_wb_vld ;
logic   [63:0]  csr_wb_data;
logic   [ 4:0]  csr_wb_addr;
logic           lsu_wb_vld ;
logic    [4:0]  lsu_wb_addr;
logic   [63:0]  lsu_wb_data;


logic ifetch_req;
assign ifetch_req = exu_inst_vld;

ifetch_cache u_ifetch(
    .clk(clk), .rst_n(rst_n), 
    .ifetch_inst_pc(ifetch_inst_pc), .ifetch_inst(ifetch_inst), .ifetch_inst_vld(ifetch_inst_vld), 
    .ifetch_req(ifetch_req), .ifetch_taken_pc(ifetch_taken_pc), .ifetch_taken(ifetch_taken),

    .axi_AW_ADDR(axis1_AW_ADDR), .axi_AW_VALID(axis1_AW_VALID), .axi_AW_READY(axis1_AW_READY),
    .axi_W_DATA (axis1_W_DATA),  .axi_W_STRB  (axis1_W_STRB),   .axi_W_VALID (axis1_W_VALID), .axi_W_READY(axis1_W_READY),
    .axi_B_VALID(axis1_B_VALID), .axi_B_READY (axis1_B_READY),
    .axi_AR_ADDR(axis1_AR_ADDR), .axi_AR_VALID(axis1_AR_VALID), .axi_AR_READY(axis1_AR_READY),
    .axi_R_DATA (axis1_R_DATA),  .axi_R_VALID (axis1_R_VALID),  .axi_R_READY (axis1_R_READY)

    );

decode u_dec(
    .clk(clk), .rst_n(rst_n), 
    
    .dec_inst_vld(dec_inst_vld), .dec_inst(dec_inst), .dec_inst_pc(dec_inst_pc),
    .rd(rd), .rs1(rs1), .rs2(rs2), .imm(imm), .op(op), .inst_act(inst_act), .inst_type(inst_type),

    .ifetch_inst_vld(ifetch_inst_vld), .ifetch_inst(ifetch_inst), .ifetch_inst_pc(ifetch_inst_pc)
    );

EXU_cache u_EXU(
    .clk(clk), .rst_n(rst_n), 

    .dec_inst_pc(dec_inst_pc), .dec_inst(dec_inst), .dec_inst_vld(dec_inst_vld),
    .rd(rd), 
    .src1(src1), 
    .src2(src2), 
    .imm(imm), 
    .inst_act(inst_act),


    .alu_wb_vld (alu_wb_vld ),
    .alu_wb_addr(alu_wb_addr),
    .alu_wb_data(alu_wb_data),
    .csr_wb_vld (csr_wb_vld ),
    .csr_wb_data(csr_wb_data),
    .csr_wb_addr(csr_wb_addr),
    .lsu_wb_vld (lsu_wb_vld ),
    .lsu_wb_addr(lsu_wb_addr),
    .lsu_wb_data(lsu_wb_data),

    .ifetch_taken_pc(ifetch_taken_pc), .ifetch_taken(ifetch_taken),

    .exu_inst_pc(exu_inst_pc), 
    .exu_inst(exu_inst), 
    .exu_inst_vld(exu_inst_vld),
    
    .exu_stall(exu_stall),

    .axi_AW_ADDR(axis2_AW_ADDR), .axi_AW_VALID(axis2_AW_VALID), .axi_AW_READY(axis2_AW_READY),
    .axi_W_DATA (axis2_W_DATA),  .axi_W_STRB  (axis2_W_STRB),   .axi_W_VALID (axis2_W_VALID), .axi_W_READY(axis2_W_READY),
    .axi_B_VALID(axis2_B_VALID), .axi_B_READY (axis2_B_READY),
    .axi_AR_ADDR(axis2_AR_ADDR), .axi_AR_VALID(axis2_AR_VALID), .axi_AR_READY(axis2_AR_READY),
    .axi_R_DATA (axis2_R_DATA),  .axi_R_VALID (axis2_R_VALID),  .axi_R_READY (axis2_R_READY)

    );



RMU u_RMU(
  .clk(clk),
  .rst_n(rst_n),

  .rs1(rs1),
  .rs2(rs2),
  .src1(src1),
  .src2(src2),

  .alu_wb_vld (alu_wb_vld ),
  .alu_wb_addr(alu_wb_addr),
  .alu_wb_data(alu_wb_data),
  .csr_wb_vld (csr_wb_vld ),
  .csr_wb_data(csr_wb_data),
  .csr_wb_addr(csr_wb_addr),
  .lsu_wb_vld (lsu_wb_vld ),
  .lsu_wb_addr(lsu_wb_addr),
  .lsu_wb_data(lsu_wb_data)

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




//TOP interface

logic itrace_en = 0;
always @(posedge clk) begin
    if(~rst_n) itrace_en <= 0;
    if(ifetch_inst_vld) itrace_en <= 1;
end



logic commit_vld;
logic [`ISA_WIDTH-1:0] commit_inst_pc;
logic [63:0] commit_inst;

always_ff @( posedge clk ) begin
    commit_vld <= exu_inst_vld;
end

always_ff @( posedge clk ) begin
  if(~rst_n) {commit_inst_pc, commit_inst} <= 0;
  else if(exu_inst_vld) {commit_inst_pc, commit_inst} <= {exu_inst_pc, exu_inst};
end




assign mainUpdate_valid = itrace_en? ifetch_inst_vld: 0;
assign pc =   ifetch_inst_pc;


always_ff @( posedge clk ) begin
    if(dec_inst_vld) begin
        jmp_type <= {2'b0, inst_act.ret_call, inst_act.call, inst_act.ret, inst_act.jal, inst_act.jalr, inst_act.br};

    end
                
end


endmodule
