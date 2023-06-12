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
output logic [`ISA_WIDTH-1:0] ifetch_pc,
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
    else if(lsu_data_vld) dest = lsu_data;
    else if(csr_rdata_vld) dest = csr_rdata;
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


  
  assign wb_vld = inst_act.wb & (alu_vld | lsu_data_vld | csr_rdata_vld);
  



  //===================================================
  //===BMU
  
  logic bmu_vld;

  initial begin
    ifetch_pc = 64'h80000000;
  end



always_ff @( posedge clk ) begin
  if(~rst_n) ifetch_pc <= 64'h80000000;
  else if(IDU_vld)
    if(inst_act.jalr) ifetch_pc <= (src1 + imm)&(~64'd1);
    else if (inst_act.jal) ifetch_pc <= pc + imm;
    else if(inst_act.br) 
      case(inst_act.func3)
        3'b000:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        3'b001:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        3'b101:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        3'b100:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        3'b110:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        3'b111:  ifetch_pc <= ifetch_taken_pre? pc + imm : pc + 4;
        default: ifetch_pc <= pc + 4;
      endcase
    else if (inst_act.syscall) ifetch_pc <= rCSR;
    else ifetch_pc <= pc + 4;

end


always_ff @( posedge clk ) begin
  if(~rst_n) ifetch_taken <= 0;
  else if(IDU_vld) ifetch_taken <= ifetch_taken_pre;
  
end


logic ifetch_taken_pre;

always_comb begin
  ifetch_taken_pre = 0;
  if(IDU_vld)
    if(inst_act.jalr | inst_act.jal | inst_act.syscall) ifetch_taken_pre = 1;
    else if(inst_act.br) 
      case(inst_act.func3)
        3'b000: ifetch_taken_pre = (src1 == src2);
        3'b001: ifetch_taken_pre = (src1 != src2);
        3'b101: ifetch_taken_pre = ($signed(src1) >= $signed(src2));
        3'b100: ifetch_taken_pre = ($signed(src1) <  $signed(src2));
        3'b110: ifetch_taken_pre = (src1 <  src2);
        3'b111: ifetch_taken_pre = (src1 >= src2);
        default: ifetch_taken_pre = 0;
      endcase

end
  

  always_ff @( posedge clk ) begin
    if(~rst_n) bmu_vld <= 0;
    else bmu_vld <= IDU_vld & (inst_act.jal | inst_act.jalr | inst_act.br | inst_act.syscall);
  end



  assign ifetch_req = bmu_vld | alu_vld | lsu_data_vld | csr_rdata_vld;


  //===================================================
  //===LSU

  logic [63:0] raddrM, rdataM;
  logic [63:0] waddrM, wdataM;
  logic [7:0]  wmaskM;
  logic wenM,renM;
  logic dataM_valid;

  logic [63:0] lsu_data;
  logic lsu_data_vld;


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


  assign renM = IDU_vld & inst_act.ld;
  assign wenM = IDU_vld & inst_act.st;
  assign raddrM = src1 + imm;
  assign waddrM = src1 + imm;
  assign wdataM = src2;

  always_comb begin
    case(inst_act.func3[1:0])
    2'b00: wmaskM = 8'b00000001;
    2'b01: wmaskM = 8'b00000011;
    2'b10: wmaskM = 8'b00001111;
    2'b11: wmaskM = 8'b11111111;
    default: wmaskM = 0;
    endcase
  end


  always_comb begin
    case (inst_act.func3)
      3'b100   : begin lsu_data = {56'b0, rdataM[ 7:0]};              end
      3'b101   : begin lsu_data = {48'b0, rdataM[15:0]};              end
      3'b110   : begin lsu_data = {32'b0, rdataM[31:0]};              end
      3'b011   : begin lsu_data = rdataM;                             end
      3'b010   : begin lsu_data = { {32{rdataM[31]}}, rdataM[31:0] };  end
      3'b001   : begin lsu_data = { {48{rdataM[15]}}, rdataM[15:0] };  end
      3'b000   : begin lsu_data = { {56{rdataM[7 ]}}, rdataM[7 :0] };  end
      default: lsu_data = 0;
    endcase

  end

  assign lsu_data_vld = dataM_valid;



  //===================================================
  //===sys

  /*CSR*/
  wire [`ISA_WIDTH-1:0] rCSR;
  reg  [`ISA_WIDTH-1:0] wCSR1, wCSR2;
  reg  [11:0] instCSR;
  wire [11:0] addrCSR;
  reg   wenC;

  RegisterCSFile u_csr(
      .clk    (clk),

      .op_addr(addrCSR),
      .op_inst(instCSR),

      .rdata  (rCSR),

      .wdata1 (wCSR1),
      .wdata2 (wCSR2),
      .wen    (wenC)

  );


  logic csr_rdata_vld;
  logic [`ISA_WIDTH-1:0] csr_rdata;

  always_ff @( posedge clk ) begin 
    if(~rst_n) begin
      csr_rdata_vld <= 0;
      csr_rdata <= 0;
    end
    else begin
      csr_rdata_vld <= IDU_vld & inst_act.sys;
      csr_rdata <= rCSR;
    end
  end


  assign addrCSR = imm[11:0];
  always@(*)
    case(op)
    op_mret  : instCSR = inst_mret;
    op_ecall : instCSR = inst_ecall;
    default:   instCSR = 0;
    endcase

  always@(posedge clk)
      if(~rst_n)  begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
      else if(IDU_vld) begin
          case(op)  
          //dest = rCSR;
          op_csrrw : begin  wenC <= 1; wCSR1 <= src1; wCSR2 <= 0; end
          op_csrrs : begin  wenC <= 1; wCSR1 <= src1 | rCSR; wCSR2 <= 0; end
          //ifetch_pc = rCSR;
          op_mret  : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0;  end
          op_ecall : begin  wenC <= 1; wCSR1 <= pc; wCSR2 <= 64'hb; end

          op_inv   : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
          default  : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
          endcase
      end
      else begin
        wenC <= 0; wCSR1 <= 0; wCSR2 <= 0;
      end


  import "DPI-C" function void sim_exit(int state);

  always@(*)
      if(IDU_vld) begin
          case(op) 
          op_ebreak: begin sim_exit(0); end   //exit program
          op_inv   : begin sim_exit(1); end   //inst error
          default  : begin end
          endcase
      end



endmodule


