//负责根据控制信号对数据进行执行操作, 并将执行结果写回寄存器或存储器
module EXU_cache(


input clk,
input rst_n,


input [`REG_ADDR_WIDTH-1:0] i_rd,
input [`REG_ADDR_WIDTH-1:0] i_rs1,
input [`REG_ADDR_WIDTH-1:0] i_rs2,
input [`ISA_WIDTH-1:0]      i_imm,

input opType                i_op,
input InstAct               i_inst_act,

input                       IDU_vld,
input [`ISA_WIDTH-1:0]      IDU_pc,
input [`ISA_WIDTH-1:0]      IDU_inst,


output logic                  ifetch_taken,
output logic [`ISA_WIDTH-1:0] ifetch_taken_pc,
output logic                  ifetch_req,

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
  //===control signal


  reg [`REG_ADDR_WIDTH-1:0] rd_r;
  reg [`REG_ADDR_WIDTH-1:0] rs1_r;
  reg [`REG_ADDR_WIDTH-1:0] rs2_r;
  reg [`ISA_WIDTH-1:0]      imm_r;
  opType                    op_r;
  InstAct                   inst_act_r;
  reg [`ISA_WIDTH-1:0]      pc_r;
  reg [`ISA_WIDTH-1:0]      inst_r;



  initial pc_r = 64'h80000000;
  always@(posedge clk)
    if(~rst_n) pc_r <= 64'h80000000;
    else pc_r <= IDU_pc;

  always@(posedge clk)
    if(~rst_n)   {rd_r, rs1_r, rs2_r, imm_r, op_r, inst_r, inst_act_r} <= 0; 
    else if(IDU_vld) 
      {rd_r, rs1_r, rs2_r, imm_r, op_r, inst_r, inst_act_r} <= {i_rd, i_rs1, i_rs2, i_imm, i_op, IDU_inst, i_inst_act};


  reg [`REG_ADDR_WIDTH-1:0] rd;
  reg [`REG_ADDR_WIDTH-1:0] rs1;
  reg [`REG_ADDR_WIDTH-1:0] rs2;
  reg [`ISA_WIDTH-1:0]      imm;
  opType                    op;
  InstAct                   inst_act;
  reg [`ISA_WIDTH-1:0]      pc;
  reg [`ISA_WIDTH-1:0]      inst;

  
  always @(*) 
    if(IDU_vld) 
      {rd, rs1, rs2, imm, op, pc, inst, inst_act} = {i_rd, i_rs1, i_rs2, i_imm, i_op, IDU_pc, IDU_inst, i_inst_act};
    else 
      {rd, rs1, rs2, imm, op, pc, inst, inst_act} = {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r, inst_act_r};




  //===================================================
  //===ALU



logic          alu_wb_vld;
logic  [4:0]   alu_wb_addr;
logic  [63:0]  alu_wb_data;

logic alu_req;
assign alu_req = IDU_vld & (inst_act.mini_alu | inst_act.div | inst_act.mul);

ALU u_alu(

  .clk(clk),
  .rst_n(rst_n),
  .alu_req(alu_req),
  .op(op),
  .inst_act(inst_act),
 
  //.dst_vld(),
  .dst_id(rd),

  .src1(src1),
  .src2(src2),
  .imm(imm),
  .pc(pc),

  .alu_wb_vld(alu_wb_vld),
  .alu_wb_addr(alu_wb_addr),
  .alu_wb_data(alu_wb_data)

);



  //===================================================
  //===WB

  /*GPR*/
  logic [`ISA_WIDTH-1:0] src1,src2;

  logic          wb_vld;
  logic  [4:0]   wb_addr;
  logic  [63:0]  wb_data;

  always_comb begin : wb
    
    if(alu_wb_vld) begin
      wb_data = inst_act.w_inst? { {32{alu_wb_data[31]}}, alu_wb_data[31:0] }: alu_wb_data;
      wb_addr = alu_wb_addr;
    end
    else if(lsu_wb_vld) begin 
      wb_data = lsu_wb_data;
      wb_addr = lsu_wb_addr;
    end
    else if(csr_wb_vld) begin
      wb_data = csr_wb_data;
      wb_addr = csr_wb_addr;
    end
    else begin
      wb_data = 0;
      wb_addr = 0;
    end

    if(rd == 0) wb_data = 0;
  end

  assign wb_vld = (alu_wb_vld | lsu_wb_vld | csr_wb_vld);


  RegisterFile u_gpr(
      .clk    (clk),
      .rdata1 (src1),
      .raddr1 (rs1),
      .rdata2 (src2),
      .raddr2 (rs2),

      .wdata  (wb_data),
      .waddr  (wb_addr),
      .wen    (wb_vld)
  );






  //===================================================
  //===BMU

  BMU u_BMU(

    .clk(clk), 
    .rst_n(rst_n), 

    .IDU_vld(IDU_vld),
    .jal(inst_act.jal),
    .jalr(inst_act.jalr),
    .br(inst_act.br),
    .syscall(inst_act.syscall),
    .func3(inst_act.func3),

    .pc(pc),
    .src1(src1),
    .src2(src2),
    .imm(imm),
    .rCSR(csrf_rdata),

    .ifetch_taken(ifetch_taken),
    .ifetch_taken_pc(ifetch_taken_pc),
    .bmu_vld(bmu_vld)

    );

  logic            bmu_vld;
  
  assign ifetch_req = bmu_vld | alu_wb_vld | lsu_data_vld | csr_data_vld;
    


  //===================================================
  //===LSU

  logic        lsu_wb_vld;
  logic  [4:0] lsu_wb_addr;
  logic [63:0] lsu_wb_data;

  logic lsu_data_vld;

  logic ld_req;
  logic st_req;

  assign ld_req = IDU_vld & inst_act.ld;
  assign st_req = IDU_vld & inst_act.st;

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

  logic [63:0] csr_wb_data;
  logic [ 4:0] csr_wb_addr;
  logic        csr_wb_vld;

  assign sys_req = IDU_vld & inst_act.sys;

  SYS_control u_sysc (

    .clk(clk),
    .rst_n(rst_n),

    .sys_req(sys_req),

    .csr(inst_act.csr),    
    .ecall(inst_act.ecall),  
    .ebreak(inst_act.ebreak),
    .mret(inst_act.mret),  
    .func3(inst_act.func3), 
    .pc(pc),
    .src1(src1),
    .imm(imm),
    .dst_id(rd),

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


