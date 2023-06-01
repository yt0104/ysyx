//负责根据控制信号对数据进行执行操作, 并将执行结果写回寄存器或存储器
module EXU_cache(


input clk,
input rst_n,

input      EXU_valid,
output reg EXU_ready,

input [`REG_ADDR_WIDTH-1:0] i_rd,
input [`REG_ADDR_WIDTH-1:0] i_rs1,
input [`REG_ADDR_WIDTH-1:0] i_rs2,
input [`ISA_WIDTH-1:0]      i_imm,
input opType                i_op,

input [`IDUf_WIDTH-1:0] i_flags,

input [`ISA_WIDTH-1:0]      i_pc,
input [`ISA_WIDTH-1:0]      i_inst,

output logic [`ISA_WIDTH-1:0] npc,
output logic                  IFU_valid,
input  logic                  IFU_ready,

output                  main_valid,
output [`ISA_WIDTH-1:0] main_pc,
output [`ISA_WIDTH-1:0] main_inst,

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

  assign main_valid = EXU_valid && EXU_ready;
  assign main_pc = pc;
  assign main_inst = inst;


  initial EXU_ready = 1;
  always@(posedge clk)
    if(~rst_n)  EXU_ready <= 1;
    else if(exe_finish_valid) EXU_ready <= 1; //exe finish
    else if(EXU_valid && EXU_ready) EXU_ready <= 0;//exe start
    

  reg [`REG_ADDR_WIDTH-1:0] rd_r;
  reg [`REG_ADDR_WIDTH-1:0] rs1_r;
  reg [`REG_ADDR_WIDTH-1:0] rs2_r;
  reg [`ISA_WIDTH-1:0]      imm_r;
  opType                    op_r;
  reg [`ISA_WIDTH-1:0]      pc_r;
  reg [`ISA_WIDTH-1:0]      inst_r;
  reg [`IDUf_WIDTH-1:0]     flags_r;


  initial pc_r = 64'h80000000;
  always@(posedge clk)
    if(~rst_n)   {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r, flags_r} <= 0; 
    else if(EXU_valid && EXU_ready) 
      {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r, flags_r} <= {i_rd, i_rs1, i_rs2, i_imm, i_op, i_pc, i_inst, i_flags};


  reg [`REG_ADDR_WIDTH-1:0] rd;
  reg [`REG_ADDR_WIDTH-1:0] rs1;
  reg [`REG_ADDR_WIDTH-1:0] rs2;
  reg [`ISA_WIDTH-1:0]      imm;
  opType                    op;
  reg [`ISA_WIDTH-1:0]      pc;
  reg [`ISA_WIDTH-1:0]      inst;
  reg [`IDUf_WIDTH-1:0]     flags;

  
  always @(*) 
    if(EXU_valid && EXU_ready) 
      {rd, rs1, rs2, imm, op, pc, inst, flags} = {i_rd, i_rs1, i_rs2, i_imm, i_op, i_pc, i_inst, i_flags};
    else 
      {rd, rs1, rs2, imm, op, pc, inst, flags} = {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r, flags_r};



  logic exe_valid;
  always@(*)
    if(~rst_n)  exe_valid = 0; 
    else 
      case(op)
      op_lbu   : exe_valid = dataM_valid;
      op_lhu   : exe_valid = dataM_valid;
      op_lwu   : exe_valid = dataM_valid;
      op_ld    : exe_valid = dataM_valid;
      op_lw    : exe_valid = dataM_valid;
      op_lh    : exe_valid = dataM_valid;
      op_lb    : exe_valid = dataM_valid;
      op_sd    : exe_valid = dataM_valid;
      op_sw    : exe_valid = dataM_valid;
      op_sh    : exe_valid = dataM_valid;
      op_sb    : exe_valid = dataM_valid;
      op_mul   : exe_valid = mul_out_valid;
      op_mulw  : exe_valid = mul_out_valid;
      op_divw  : exe_valid = div_out_valid;
      op_remw  : exe_valid = div_out_valid;
      op_divuw : exe_valid = div_out_valid;
      op_remuw : exe_valid = div_out_valid;
      op_divu  : exe_valid = div_out_valid;
      op_remu  : exe_valid = div_out_valid;
      op_rem   : exe_valid = div_out_valid;
      op_div   : exe_valid = div_out_valid;
      op_inv   : exe_valid = 0;
      default  : exe_valid = EXU_valid && EXU_ready;
      endcase

  reg exe_finish_valid;
  always@(posedge clk)
    if(~rst_n) exe_finish_valid <= 0;
    else exe_finish_valid <= exe_valid;


  //===================================================
  //===register block

  /*GPR*/
  logic [`ISA_WIDTH-1:0] src1,src2;
  logic [`ISA_WIDTH-1:0] dest;
  logic wenR;


  RegisterFile u_gpr(
      .clk    (clk),
      .rdata1 (src1),
      .raddr1 (rs1),
      .rdata2 (src2),
      .raddr2 (rs2),
      .wdata  (dest),
      .waddr  (rd),
      .wen    (wenR)
  );


  logic [63:0] temp;

  assign dest = flags[0]? { {32{temp[31]}}, temp[31:0] }: temp;

  always@(posedge clk)
    if(~rst_n)  begin wenR <= 0; temp <= 0;  end
    else if(exe_valid) begin
        case(op)
        op_addi  : begin wenR <= 1; temp <= src1 + imm; end
        op_ret   : begin wenR <= 1; temp <= pc + 4;     end
        op_jalr  : begin wenR <= 1; temp <= pc + 4;     end
        op_lbu   : begin wenR <= 1; temp <= {56'b0, rdataM[ 7:0]};              end
        op_lhu   : begin wenR <= 1; temp <= {48'b0, rdataM[15:0]};              end
        op_lwu   : begin wenR <= 1; temp <= {32'b0, rdataM[31:0]};              end
        op_ld    : begin wenR <= 1; temp <= rdataM;                             end
        op_lw    : begin wenR <= 1; temp <= { {32{rdataM[31]}}, rdataM[31:0] };  end
        op_lh    : begin wenR <= 1; temp <= { {48{rdataM[15]}}, rdataM[15:0] };  end
        op_lb    : begin wenR <= 1; temp <= { {56{rdataM[7 ]}}, rdataM[7 :0] };  end
        op_slli  : begin wenR <= 1; temp <= src1 <<imm; end
        op_srli  : begin wenR <= 1; temp <= src1 >>imm; end
        op_sltiu : begin wenR <= 1; temp <= (src1 < imm)? 64'b1: 64'b0; ; end
        op_xori  : begin wenR <= 1; temp <= src1 ^ imm; end
        op_srai  : begin wenR <= 1; temp <= ($signed(src1)) >>> imm[5:0];  end
        op_andi  : begin wenR <= 1; temp <= src1 & imm; end
        op_addiw : begin wenR <= 1; temp <= src1 + imm; end
        op_slliw : begin wenR <= 1; temp <= src1 <<imm; end
        op_srliw : begin wenR <= 1; temp <= { 32'b0, src1[31:0] >> imm }; end
        op_sraiw : begin wenR <= 1; temp <= ($signed(src1)) >>> imm[5:0]; end
        op_ori   : begin wenR <= 1; temp <= src1 | imm; end
        op_csrrw : begin wenR <= 1; temp <= rCSR; end
        op_csrrs : begin wenR <= 1; temp <= rCSR; end

        op_auipc : begin wenR <= 1; temp <= pc + imm; end
        op_lui   : begin wenR <= 1; temp <= { {32{imm[31]}},imm[31:12],12'b0 }; end
        op_sd    : begin wenR <= 0; temp <= 0; end//***
        op_sw    : begin wenR <= 0; temp <= 0; end
        op_sh    : begin wenR <= 0; temp <= 0; end
        op_sb    : begin wenR <= 0; temp <= 0; end
        op_jal   : begin wenR <= 1; temp <= pc + 4;  end

        op_add   : begin wenR <= 1; temp <= src1 + src2; end
        op_sltu  : begin wenR <= 1; temp <= (src1 < src2)? 64'b1: 64'b0;; end
        op_and   : begin wenR <= 1; temp <= src1 & src2; end
        op_or    : begin wenR <= 1; temp <= src1 | src2; end
        op_xor   : begin wenR <= 1; temp <= src1 ^ src2; end
        op_sub   : begin wenR <= 1; temp <= src1 - src2; end
        op_mul   : begin wenR <= 1; temp <= mul_result;  end
        op_slt   : begin wenR <= 1; temp <= ($signed(src1) < $signed(src2))? 64'b1: 64'b0; end
        op_addw  : begin wenR <= 1; temp <= src1 + src2; end
        op_sllw  : begin wenR <= 1; temp <= src1 << src2[4:0];  end
        op_srlw  : begin wenR <= 1; temp <= {32'b0, src1[31:0] >> src2[4:0]};  end
        op_sraw  : begin wenR <= 1; temp <= {32'b0, $signed(src1[31:0]) >>> src2[4:0]};  end
        op_mulw  : begin wenR <= 1; temp <= mul_result;  end
        op_subw  : begin wenR <= 1; temp <= src1 - src2; end
        op_divw  : begin wenR <= 1; temp <= quotient; end
        op_remw  : begin wenR <= 1; temp <= remainder; end
        op_divuw : begin wenR <= 1; temp <= quotient;  end
        op_remuw : begin wenR <= 1; temp <= remainder; end
        op_divu  : begin wenR <= 1; temp <= quotient; end
        op_remu  : begin wenR <= 1; temp <= remainder; end
        op_sll   : begin wenR <= 1; temp <= src1 <<src2; end
        op_srl   : begin wenR <= 1; temp <= src1 >>src2; end
        op_div   : begin wenR <= 1; temp <= quotient; end
        op_rem   : begin wenR <= 1; temp <= remainder; end
        

        op_beq   : begin wenR <= 0; temp <= 0; end
        op_bne   : begin wenR <= 0; temp <= 0; end
        op_bge   : begin wenR <= 0; temp <= 0; end
        op_blt   : begin wenR <= 0; temp <= 0; end
        op_bltu  : begin wenR <= 0; temp <= 0; end
        op_bgeu  : begin wenR <= 0; temp <= 0; end

        op_mret  : begin wenR <= 0; temp <= 0; end
        op_ecall : begin wenR <= 0; temp <= 0; end
        op_ebreak: begin wenR <= 0; temp <= 0; end
        op_inv   : begin wenR <= 0; temp <= 0; end
        default  : begin wenR <= 0; temp <= 0; end
        endcase
      if(rd == 0) temp <= 0; //R(0) = 0;
    end
    else begin wenR <= 0; temp <= 0; end


  //===================================================
  //===ALU

  logic mul_valid, div_valid;

  assign mul_valid = EXU_valid & EXU_ready & flags[1];
  assign div_valid = EXU_valid & EXU_ready & flags[2];


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

  div u_div(
    .clk(clk),
    .rst_n(rst_n),

    .sign_div(op == op_div || op == op_divw || op == op_rem || op == op_remw),
    .divw(flags[0]),

    .div_valid(div_valid),
    .dividend(src1),
    .divisor(src2),
    
    .quotient(quotient),
    .remainder(remainder),
    .out_valid(div_out_valid)
    );

  //===================================================
  //===npc block
  
  always@(posedge clk)
      if(~rst_n)  begin 
        npc <= 0;
      end
      else if(EXU_valid & EXU_ready) begin   //branch_taken_flag
          case(op)
          op_ret   : begin npc <= (src1 + imm)&(~64'd1); end
          op_jalr  : begin npc <= (src1 + imm)&(~64'd1); end

          op_jal   : begin npc <= pc + imm; end

          op_beq   : begin npc <= (src1 == src2)? pc + imm : pc + 4; end
          op_bne   : begin npc <= (src1 != src2)? pc + imm : pc + 4; end
          op_bge   : begin npc <= ($signed(src1) >= $signed(src2))? pc + imm : pc + 4; end
          op_blt   : begin npc <= ($signed(src1) <  $signed(src2))? pc + imm : pc + 4; end
          op_bltu  : begin npc <= (src1 <  src2)? pc + imm : pc + 4; end
          op_bgeu  : begin npc <= (src1 >= src2)? pc + imm : pc + 4; end

          op_mret  : begin npc <= rCSR; end
          op_ecall : begin npc <= rCSR; end
          op_ebreak: begin npc <= pc ;  end
          op_inv   : begin npc <= pc ;  end
          default  : begin npc <= pc + 4; end 
          endcase
      end

//always @(posedge clk) begin
//  if(EXU_valid & EXU_ready)
//    if(pc==64'h83009854)$display("pc = %x, inst = %x", pc, inst);
//end
  


  always@(posedge clk)
      if(~rst_n) IFU_valid <= 0;
      else if(IFU_ready & IFU_valid) IFU_valid <= 0;
      else if(EXU_valid & EXU_ready) IFU_valid <= 1;



  //===================================================
  //===memory block

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


  assign renM = EXU_valid & EXU_ready & flags[3];
  assign wenM = EXU_valid & EXU_ready & flags[4];
  assign raddrM = src1 + imm;
  assign waddrM = src1 + imm;
  assign wdataM = src2;

  always @(*) begin
    case(flags[6:5])
    2'b00: wmaskM = 8'b00000001;
    2'b01: wmaskM = 8'b00000011;
    2'b10: wmaskM = 8'b00001111;
    2'b11: wmaskM = 8'b11111111;
    default: wmaskM = 0;
    endcase
  end

  //always @(*) begin
  //  case(op)
  //  op_sb: wmaskM = 8'b00000001;
  //  op_sh: wmaskM = 8'b00000011;
  //  op_sw: wmaskM = 8'b00001111;
  //  op_sd: wmaskM = 8'b11111111;
  //  default: wmaskM = 0;
  //  endcase
  //end


  //===================================================
  //===CSRegister block

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


  assign addrCSR = imm[11:0];
  always@(*)
    case(op)
    op_mret  : instCSR = inst_mret;
    op_ecall : instCSR = inst_ecall;
    default:   instCSR = 0;
    endcase

  always@(posedge clk)
      if(~rst_n)  begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
      else if(EXU_valid && EXU_ready) begin
          case(op)  
          //dest = rCSR;
          op_csrrw : begin  wenC <= 1; wCSR1 <= src1; wCSR2 <= 0; end
          op_csrrs : begin  wenC <= 1; wCSR1 <= src1 | rCSR; wCSR2 <= 0; end
          //npc = rCSR;
          op_mret  : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0;  end
          op_ecall : begin  wenC <= 1; wCSR1 <= pc; wCSR2 <= 64'hb; end

          op_inv   : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
          default  : begin  wenC <= 0; wCSR1 <= 0; wCSR2 <= 0; end
          endcase
      end
      else begin
        wenC <= 0; wCSR1 <= 0; wCSR2 <= 0;
      end


  //===================================================
  //===exit block
  import "DPI-C" function void sim_exit(int state);

  always@(posedge clk)
      if(EXU_valid && EXU_ready) begin
          case(op) 
          op_ebreak: begin sim_exit(0); end   //exit program
          op_inv   : begin sim_exit(1); end   //inst error
          default  : begin end
          endcase
      end



endmodule


