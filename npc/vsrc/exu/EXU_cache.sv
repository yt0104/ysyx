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


  logic mul_valid, div_valid;

  assign mul_valid = IDU_vld & inst_act.mul;
  assign div_valid = IDU_vld & inst_act.div;


  wire mul_out_valid;
  wire [63:0] mul_result_h, mul_result_l;
  wire [63:0] mul_result = (mul_result_h==0)? mul_result_l: mul_result_l;

  mul u_mul(
  .clk(clk),
  .rst_n(rst_n),
  .mul_valid(mul_valid),
  .multiplicand(src1),
  .multiplier(src2),
  .out_valid(mul_out_valid),
  .result_h(mul_result_h),
  .result_l(mul_result_l)
  );

  wire div_out_valid;
  wire [63:0] quotient, remainder;
  wire [63:0] div_result = inst_act.div_rem? remainder : quotient;

  div u_div(
    .clk(clk),
    .rst_n(rst_n),

    .sign_div(inst_act.div_sign),
    .divw(inst_act.w_inst),

    .div_valid(div_valid),
    .dividend(src1),
    .divisor(src2),
    
    .quotient(quotient),
    .remainder(remainder),
    .out_valid(div_out_valid)
    );


  logic        alu_vld;
  logic [63:0] alu_data;
  logic        mini_alu_vld;
  logic [63:0] mini_alu_data;


  always_ff @( posedge clk ) begin : miniALU
    if(~rst_n) mini_alu_data <= 0; 
    else if(IDU_vld & inst_act.mini_alu) begin
      case(op)
      op_addi  : begin mini_alu_data <= src1 + imm; end
      op_ret   : begin mini_alu_data <= pc + 4;     end
      op_jalr  : begin mini_alu_data <= pc + 4;     end
      //op_lbu   : begin mini_alu_data <= {56'b0, rdataM[ 7:0]};              end
      //op_lhu   : begin mini_alu_data <= {48'b0, rdataM[15:0]};              end
      //op_lwu   : begin mini_alu_data <= {32'b0, rdataM[31:0]};              end
      //op_ld    : begin mini_alu_data <= rdataM;                             end
      //op_lw    : begin mini_alu_data <= { {32{rdataM[31]}}, rdataM[31:0] };  end
      //op_lh    : begin mini_alu_data <= { {48{rdataM[15]}}, rdataM[15:0] };  end
      //op_lb    : begin mini_alu_data <= { {56{rdataM[7 ]}}, rdataM[7 :0] };  end
      op_slli  : begin mini_alu_data <= src1 <<imm; end
      op_slti  : begin mini_alu_data <= ($signed(src1) < $signed(imm))? 64'b1: 64'b0;; end
      op_srli  : begin mini_alu_data <= src1 >>imm; end
      op_sltiu : begin mini_alu_data <= (src1 < imm)? 64'b1: 64'b0; ; end
      op_xori  : begin mini_alu_data <= src1 ^ imm; end
      op_srai  : begin mini_alu_data <= ($signed(src1)) >>> imm[5:0];  end
      op_andi  : begin mini_alu_data <= src1 & imm; end
      op_addiw : begin mini_alu_data <= src1 + imm; end
      op_slliw : begin mini_alu_data <= src1 <<imm; end
      op_srliw : begin mini_alu_data <= { 32'b0, src1[31:0] >> imm }; end
      op_sraiw : begin mini_alu_data <= ($signed(src1)) >>> imm[5:0]; end
      op_ori   : begin mini_alu_data <= src1 | imm; end
      //op_csrrw : begin mini_alu_data <= rCSR; end
      //op_csrrs : begin mini_alu_data <= rCSR; end

      op_auipc : begin mini_alu_data <= pc + imm; end
      op_lui   : begin mini_alu_data <= { {32{imm[31]}},imm[31:12],12'b0 }; end

      op_jal   : begin mini_alu_data <= pc + 4;  end

      op_add   : begin mini_alu_data <= src1 + src2; end
      op_sltu  : begin mini_alu_data <= (src1 < src2)? 64'b1: 64'b0; end
      op_and   : begin mini_alu_data <= src1 & src2; end
      op_or    : begin mini_alu_data <= src1 | src2; end
      op_xor   : begin mini_alu_data <= src1 ^ src2; end
      op_sub   : begin mini_alu_data <= src1 - src2; end
      //op_mul   : begin mini_alu_data = mul_result;  end
      op_slt   : begin mini_alu_data <= ($signed(src1) < $signed(src2))? 64'b1: 64'b0; end
      op_addw  : begin mini_alu_data <= src1 + src2; end
      op_sllw  : begin mini_alu_data <= src1 << src2[4:0];  end
      op_srlw  : begin mini_alu_data <= {32'b0, src1[31:0] >> src2[4:0]};  end
      op_sraw  : begin mini_alu_data <= {32'b0, $signed(src1[31:0]) >>> src2[4:0]};  end
      //op_mulw  : begin mini_alu_data = mul_result;  end
      op_subw  : begin mini_alu_data <= src1 - src2; end
      //op_divw  : begin mini_alu_data = quotient; end
      //op_remw  : begin mini_alu_data = remainder; end
      //op_divuw : begin mini_alu_data = quotient;  end
      //op_remuw : begin mini_alu_data = remainder; end
      //op_divu  : begin mini_alu_data = quotient; end
      //op_remu  : begin mini_alu_data = remainder; end
      op_sll   : begin mini_alu_data <= src1 <<src2; end
      op_srl   : begin mini_alu_data <= src1 >>src2; end
      //op_div   : begin mini_alu_data = quotient; end
      //op_rem   : begin mini_alu_data = remainder; end
      
      default  : begin mini_alu_data <= 0; end
      endcase
    end
    else begin mini_alu_data <= 0; end
  end



  always_ff @( posedge clk ) begin
    if(~rst_n) mini_alu_vld <= 0;
    else mini_alu_vld <= IDU_vld & inst_act.mini_alu;
  end


  assign alu_vld  = mul_out_valid | div_out_valid | mini_alu_vld;

  assign alu_data = mini_alu_vld? mini_alu_data:
                    mul_out_valid? mul_result:
                    div_out_valid? div_result:
                    0;




  //===================================================
  //===WB

  /*GPR*/
  logic [`ISA_WIDTH-1:0] src1,src2;
  logic [`ISA_WIDTH-1:0] dest;
  logic wb_vld;


  always_comb begin : wb
    
    if(alu_vld) dest = inst_act.w_inst? { {32{alu_data[31]}}, alu_data[31:0] }: alu_data;
    else if(lsu_data_vld) dest = ld_data_out;
    else if(csr_data_vld) dest = csr_data_out;
    else dest = 0;

    if(rd == 0) dest = 0;
  end



  RegisterFile u_gpr(
      .clk    (clk),
      .rdata1 (src1),
      .raddr1 (rs1),
      .rdata2 (src2),
      .raddr2 (rs2),
      .wdata  (dest),
      .waddr  (rd),
      .wen    (wb_vld)
  );


  
  assign wb_vld = inst_act.wb & (alu_vld | lsu_data_vld | csr_data_vld);
  



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
  
  assign ifetch_req = bmu_vld | alu_vld | lsu_data_vld | csr_data_vld;
    


  //===================================================
  //===LSU


  logic [63:0] ld_data_out;
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
    .dest(dest), 
    .src1(src1), 
    .src2(src2), 
    .imm(imm), 

    .ld_data_out(ld_data_out),
    .lsu_data_vld(lsu_data_vld),


    .axi_AW_ADDR(axi_AW_ADDR), .axi_AW_VALID(axi_AW_VALID), .axi_AW_READY(axi_AW_READY),
    .axi_W_DATA (axi_W_DATA),  .axi_W_STRB  (axi_W_STRB),   .axi_W_VALID (axi_W_VALID), .axi_W_READY(axi_W_READY),
    .axi_B_VALID(axi_B_VALID), .axi_B_READY (axi_B_READY),
    .axi_AR_ADDR(axi_AR_ADDR), .axi_AR_VALID(axi_AR_VALID), .axi_AR_READY(axi_AR_READY),
    .axi_R_DATA (axi_R_DATA),  .axi_R_VALID (axi_R_VALID),  .axi_R_READY (axi_R_READY)

    );


  //===================================================
  //===sys

  logic sys_req;
  logic [63:0] csr_data_out;
  logic csr_data_vld;

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

    .csr_data_out(csr_data_out),
    .csr_vld(csr_data_vld),

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


