//负责根据控制信号对数据进行执行操作, 并将执行结果写回寄存器或存储器
module EXU(


input clk,
input rst_n,

input      EXU_valid,
output reg EXU_ready,

input [`REG_ADDR_WIDTH-1:0] i_rd,
input [`REG_ADDR_WIDTH-1:0] i_rs1,
input [`REG_ADDR_WIDTH-1:0] i_rs2,
input [`ISA_WIDTH-1:0]      i_imm,
input opType                i_op,

input [`ISA_WIDTH-1:0]      i_pc,
input [`ISA_WIDTH-1:0]      i_inst,

output reg [`ISA_WIDTH-1:0] npc,
output reg                  npc_valid,
//output reg IFU_valid,
//input      IFU_ready,

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

  initial pc_r = 64'h80000000;
  always@(posedge clk)
    if(~rst_n)   {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r} <= 0; 
    else if(EXU_valid && EXU_ready) 
      {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r} <= {i_rd, i_rs1, i_rs2, i_imm, i_op, i_pc, i_inst};


  reg [`REG_ADDR_WIDTH-1:0] rd;
  reg [`REG_ADDR_WIDTH-1:0] rs1;
  reg [`REG_ADDR_WIDTH-1:0] rs2;
  reg [`ISA_WIDTH-1:0]      imm;
  opType                    op;
  reg [`ISA_WIDTH-1:0]      pc;
  reg [`ISA_WIDTH-1:0]      inst;
  
  always @(*) 
    if(EXU_valid && EXU_ready) 
      {rd, rs1, rs2, imm, op, pc, inst} = {i_rd, i_rs1, i_rs2, i_imm, i_op, i_pc, i_inst};
    else 
      {rd, rs1, rs2, imm, op, pc, inst} = {rd_r, rs1_r, rs2_r, imm_r, op_r, pc_r, inst_r};



  reg exe_valid;
  always@(*)
    if(~rst_n)  exe_valid = 0; 
    else 
      case(op)
      op_lbu   : exe_valid = axi_R_READY & axi_R_VALID;
      op_lhu   : exe_valid = axi_R_READY & axi_R_VALID;
      op_lwu   : exe_valid = axi_R_READY & axi_R_VALID;
      op_ld    : exe_valid = axi_R_READY & axi_R_VALID;
      op_lw    : exe_valid = axi_R_READY & axi_R_VALID;
      op_lh    : exe_valid = axi_R_READY & axi_R_VALID;
      op_lb    : exe_valid = axi_R_READY & axi_R_VALID;
      op_sd    : exe_valid = axi_W_READY & axi_W_VALID;
      op_sw    : exe_valid = axi_W_READY & axi_W_VALID;
      op_sh    : exe_valid = axi_W_READY & axi_W_VALID;
      op_sb    : exe_valid = axi_W_READY & axi_W_VALID;
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
  //===data register

  /*GPR*/
  wire [`ISA_WIDTH-1:0] src1,src2;
  reg  [`ISA_WIDTH-1:0] dest;
  reg  wenR;


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


  /*memoryFile*/
  wire [63:0] rdata;
  reg  [63:0] raddr;
  reg  [63:0] waddr, wdata;
  reg  [7:0]  wmask;
  reg  wenM,renM;

  AXI_master_SRAM u0_AXI_master_SRAM(
    //user interface
    .WREQ(wenM), .IN_WADDR(waddr), .IN_WDATA(wdata), .IN_WMASK(wmask), 
    .RREQ(renM), .IN_RADDR(raddr), .DATA_OUT(rdata), 

    .CLK(clk), .RESETN(rst_n),
    .AW_ADDR(axi_AW_ADDR), .AW_VALID(axi_AW_VALID), .AW_READY(axi_AW_READY),
    .W_DATA (axi_W_DATA),  .W_STRB  (axi_W_STRB),   .W_VALID (axi_W_VALID), .W_READY(axi_W_READY),
    .B_VALID(axi_B_VALID), .B_READY (axi_B_READY),
    .AR_ADDR(axi_AR_ADDR), .AR_VALID(axi_AR_VALID), .AR_READY(axi_AR_READY),
    .R_DATA (axi_R_DATA),  .R_VALID (axi_R_VALID),  .R_READY (axi_R_READY)
  );


  //===================================================
  //===register block

  reg [63:0] temp;
  always @(*) begin
    case(op)
    op_addiw : dest = { {32{temp[31]}}, temp[31:0] };
    op_slliw : dest = { {32{temp[31]}}, temp[31:0] };
    op_srliw : dest = { {32{temp[31]}}, temp[31:0] };
    op_sraiw : dest = { {32{temp[31]}}, temp[31:0] };
    op_addw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_sllw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_srlw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_sraw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_mulw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_subw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_divw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_remw  : dest = { {32{temp[31]}}, temp[31:0] };
    op_divuw : dest = { {32{temp[31]}}, temp[31:0] };
    op_remuw : dest = { {32{temp[31]}}, temp[31:0] };
    default  : dest = temp;
    endcase
  end


  always@(posedge clk)
    if(~rst_n)  begin wenR <= 0; temp <= 0;  end
    else if(exe_valid) begin
        case(op)
        op_addi  : begin wenR <= 1; temp <= src1 + imm; end
        op_ret   : begin wenR <= 1; temp <= pc + 4;     end
        op_jalr  : begin wenR <= 1; temp <= pc + 4;     end
        op_lbu   : begin wenR <= 1; temp <= {56'b0, rdata[ 7:0]};              end
        op_lhu   : begin wenR <= 1; temp <= {48'b0, rdata[15:0]};              end
        op_lwu   : begin wenR <= 1; temp <= {32'b0, rdata[31:0]};              end
        op_ld    : begin wenR <= 1; temp <= rdata;                             end
        op_lw    : begin wenR <= 1; temp <= { {32{rdata[31]}}, rdata[31:0] };  end
        op_lh    : begin wenR <= 1; temp <= { {48{rdata[15]}}, rdata[15:0] };  end
        op_lb    : begin wenR <= 1; temp <= { {56{rdata[7 ]}}, rdata[7 :0] };  end
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

  reg mul_valid, div_valid;
  always@(*)
    if(~rst_n)  {mul_valid, div_valid} = 2'b00;
    else if(EXU_valid && EXU_ready) 
      case(op)
      op_mul   : {mul_valid, div_valid} = 2'b10;
      op_mulw  : {mul_valid, div_valid} = 2'b10;
      op_divw  : {mul_valid, div_valid} = 2'b01;
      op_remw  : {mul_valid, div_valid} = 2'b01;
      op_divuw : {mul_valid, div_valid} = 2'b01;
      op_remuw : {mul_valid, div_valid} = 2'b01;
      op_divu  : {mul_valid, div_valid} = 2'b01;
      op_remu  : {mul_valid, div_valid} = 2'b01;
      op_rem   : {mul_valid, div_valid} = 2'b01;
      op_div   : {mul_valid, div_valid} = 2'b01;
      op_inv   : {mul_valid, div_valid} = 2'b00;
      default  : {mul_valid, div_valid} = 2'b00;
      endcase
    else {mul_valid, div_valid} = 2'b00;


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
    .divw(op == op_divw || op == op_remw || op == op_divuw || op == op_remuw),

    .div_valid(div_valid),
    .dividend(src1),
    .divisor(src2),
    
    .quotient(quotient),
    .remainder(remainder),
    .out_valid(div_out_valid)
    );

  //===================================================
  //===npc block
  
  initial npc = 64'h80000000;
  always@(posedge clk)
      if(~rst_n)  begin 
        npc <= 64'h80000000;
      end
      else if(EXU_valid && EXU_ready) begin
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

  //reg npc_valid;
  always@(*)
    if(~rst_n) npc_valid = 0;
    else 
        case(op)
        op_ret   : npc_valid = EXU_valid && EXU_ready; 
        op_jalr  : npc_valid = EXU_valid && EXU_ready; 

        op_jal   : npc_valid = EXU_valid && EXU_ready; 

        op_beq   : npc_valid = EXU_valid && EXU_ready; 
        op_bne   : npc_valid = EXU_valid && EXU_ready; 
        op_bge   : npc_valid = EXU_valid && EXU_ready; 
        op_blt   : npc_valid = EXU_valid && EXU_ready; 
        op_bltu  : npc_valid = EXU_valid && EXU_ready; 
        op_bgeu  : npc_valid = EXU_valid && EXU_ready; 

        op_mret  : npc_valid = EXU_valid && EXU_ready; 
        op_ecall : npc_valid = EXU_valid && EXU_ready; 
        op_ebreak: npc_valid = EXU_valid && EXU_ready; 
        op_inv   : npc_valid = EXU_valid && EXU_ready; 
        default  : npc_valid = 0;
        endcase




  //===================================================
  //===memory block

  always@(posedge clk)
      if(~rst_n)     begin wenM <= 0; renM <= 0; raddr <= 0; waddr <= 0; wdata <= 0; wmask <= 0; end
      else if(EXU_valid && EXU_ready) begin
          case(op)
          op_lbu   : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_lhu   : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_lwu   : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_ld    : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_lw    : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_lh    : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          op_lb    : begin renM <= 1; wenM <= 0; raddr <= src1 + imm; waddr <= 0; wdata <= 0; wmask <= 0; end
          
          op_sd    : begin renM <= 0; wenM <= 1; raddr <= 0;          waddr <= src1 + imm; wdata <= src2; wmask <= 8'b11111111; end//***
          op_sw    : begin renM <= 0; wenM <= 1; raddr <= 0;          waddr <= src1 + imm; wdata <= src2; wmask <= 8'b00001111; end
          op_sh    : begin renM <= 0; wenM <= 1; raddr <= 0;          waddr <= src1 + imm; wdata <= src2; wmask <= 8'b00000011; end
          op_sb    : begin renM <= 0; wenM <= 1; raddr <= 0;          waddr <= src1 + imm; wdata <= src2; wmask <= 8'b00000001; end
         
          op_inv   : begin wenM <= 0; renM <= 0; raddr <= 0; waddr <= 0; wdata <= 0; wmask <= 0; end
          default  : begin wenM <= 0; renM <= 0; raddr <= 0; waddr <= 0; wdata <= 0; wmask <= 0; end
          endcase
      end
      else begin
        wenM <= 0; renM <= 0; raddr <= 0; waddr <= 0; wdata <= 0; wmask <= 0;
      end

  //===================================================
  //===CSRegister block

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


