//负责根据控制信号对数据进行执行操作, 并将执行结果写回寄存器或存储器
module EXU_cache(


input clk,
input rst_n,


input [`REG_ADDR_WIDTH-1:0] rd,
input [`ISA_WIDTH-1:0]      src1,
input [`ISA_WIDTH-1:0]      src2,
input [`ISA_WIDTH-1:0]      imm,
input InstAct               inst_act,

input                       dec_inst_vld,
input [`ISA_WIDTH-1:0]      dec_inst_pc,
input [`ISA_WIDTH-1:0]      dec_inst,


output logic                  ifetch_taken,
output logic [`ISA_WIDTH-1:0] ifetch_taken_pc,

output logic                  exu_inst_vld,
output logic [`ISA_WIDTH-1:0] exu_inst_pc,
output logic [`ISA_WIDTH-1:0] exu_inst,

output logic                  exu_stall,

//alu
output logic           alu_wb_vld,
output logic   [4:0]   alu_wb_addr,
output logic   [63:0]  alu_wb_data,

//sys
output logic           csr_wb_vld,
output logic   [63:0]  csr_wb_data,
output logic   [ 4:0]  csr_wb_addr,

//lsu
output logic           lsu_wb_vld,
output logic    [4:0]  lsu_wb_addr,
output logic   [63:0]  lsu_wb_data,


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



  assign exu_inst_vld = bju_data_vld | alu_data_vld | lsu_data_vld | csr_data_vld;
  
  always_ff @( posedge clk ) begin
    if(~rst_n) {exu_inst_pc, exu_inst} <= 0;
    else if(dec_inst_vld) {exu_inst_pc, exu_inst} <= {dec_inst_pc, dec_inst};
  end
  
  assign exu_stall = alu_stall;


  //===================================================
  //===ALU

  logic alu_stall;

  ALU u_alu(

  .clk(clk),
  .rst_n(rst_n),
  .dec_inst_vld(dec_inst_vld),
  .inst_act(inst_act), 
 
  //.dst_vld(),
  .dst_id(rd),

  .src1(src1),
  .src2(src2),
  .imm(imm),
  .pc(dec_inst_pc),

  .alu_wb_vld(alu_wb_vld),
  .alu_wb_addr(alu_wb_addr),
  .alu_wb_data(alu_wb_data),

  .alu_stall(alu_stall)

  );

  logic alu_data_vld;
  assign alu_data_vld = alu_wb_vld;

  //===================================================
  //===BJU

  BJU u_BJU(

    .clk(clk), 
    .rst_n(rst_n), 

    .dec_inst_vld(dec_inst_vld),
    .jal    (inst_act.jal),
    .jalr   (inst_act.jalr),
    .br     (inst_act.br),
    .syscall(inst_act.syscall),
    .func3  (inst_act.func3),

    .pc(dec_inst_pc),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .rCSR(csrf_rdata),

    .ifetch_taken(ifetch_taken),
    .ifetch_taken_pc(ifetch_taken_pc),
    .bmu_vld(bju_data_vld)

    );

  logic            bju_data_vld;
    

  //===================================================
  //===LSU


  logic lsu_data_vld;

  logic ld_req;
  logic st_req;

  assign ld_req = dec_inst_vld & inst_act.ld;
  assign st_req = dec_inst_vld & inst_act.st;

  LSU u_LSU(
    .clk(clk), 
    .rst_n(rst_n), 

    .ld_req(ld_req),
    .st_req(st_req),
    .func3(inst_act.func3),
    .src1(src1), 
    .src2(src2), 
    .imm(imm), 
    .dst_id(rd),
    .dst_vld(inst_act.dst_vld),

    .lsu_data_vld(lsu_data_vld),
    .lsu_wb_vld(lsu_wb_vld),
    .lsu_wb_addr(lsu_wb_addr),
    .lsu_wb_data(lsu_wb_data),


    .axi_AW_ADDR(axi_AW_ADDR), .axi_AW_VALID(axi_AW_VALID), .axi_AW_READY(axi_AW_READY),
    .axi_W_DATA (axi_W_DATA),  .axi_W_STRB  (axi_W_STRB),   .axi_W_VALID (axi_W_VALID), .axi_W_READY(axi_W_READY),
    .axi_B_VALID(axi_B_VALID), .axi_B_READY (axi_B_READY),
    .axi_AR_ADDR(axi_AR_ADDR), .axi_AR_VALID(axi_AR_VALID), .axi_AR_READY(axi_AR_READY),
    .axi_R_DATA (axi_R_DATA),  .axi_R_VALID (axi_R_VALID),  .axi_R_READY (axi_R_READY)

    );


  //===================================================
  //===sys

  logic sys_req;
  logic csr_data_vld;


  assign sys_req = dec_inst_vld & inst_act.sys;

  SYS_control u_sysc (

    .clk(clk),
    .rst_n(rst_n),

    .sys_req(sys_req),

    .csr    (inst_act.csr),    
    .ecall  (inst_act.ecall),  
    .ebreak (inst_act.ebreak),
    .mret   (inst_act.mret),  
    .dst_vld(inst_act.dst_vld),
    .func3  (inst_act.func3), 
    .pc     (dec_inst_pc),
    .src1   (src1),
    .imm    (imm),
    .dst_id (rd),

    .csr_vld(csr_data_vld),

    .csr_wb_data(csr_wb_data),
    .csr_wb_addr(csr_wb_addr),
    .csr_wb_vld(csr_wb_vld)  ,  

    //CSRegisterFile
    .csrf_rdata(csrf_rdata),
    .csrf_raddr(csrf_raddr),
    .csrf_wdata(csrf_wdata),
    .csrf_waddr(csrf_waddr),
    .csrf_wen(csrf_wen)

  );

  logic [63:0] csrf_rdata;
  logic [ 1:0] csrf_raddr;
  logic [63:0] csrf_wdata;
  logic [ 1:0] csrf_waddr;
  logic csrf_wen;

  CSRegisterFile u_csrf(
      .clk    (clk),
      .rdata  (csrf_rdata),
      .raddr  (csrf_raddr),
      .wdata  (csrf_wdata),
      .waddr  (csrf_waddr),
      .wen    (csrf_wen)
  );



endmodule


