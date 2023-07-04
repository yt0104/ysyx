module ALU(

  input clk,
  input rst_n,

  input logic           alu_req,

  input opType          op,
  input InstAct         inst_act,
 
  //input logic           dst_vld,
  input logic   [ 4:0]  dst_id,
  //input logic           src0_vld,
  //input logic           src1_vld,
  input logic   [63:0]  src1,
  input logic   [63:0]  src2,
  //input logic           imm_vld,
  input logic   [63:0]  imm,
  input logic   [63:0]  pc,

  output logic          alu_wb_vld,
  output logic  [4:0]   alu_wb_addr,
  output logic  [63:0]  alu_wb_data

);

  logic mul_valid, div_valid, mini_alu_valid;

  assign mul_valid = alu_req & inst_act.mul;
  assign div_valid = alu_req & inst_act.div;
  assign mini_alu_valid = alu_req & inst_act.mini_alu;

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

    .sign_div(inst_act.sign),
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
  logic        mini_alu_out_vld;
  logic [63:0] mini_alu_result;


  always_ff @( posedge clk ) begin : miniALU
    if(~rst_n) begin
      mini_alu_result <= 0; 
      mini_alu_out_vld <= 0;
    end
    else if(mini_alu_valid) begin
      mini_alu_out_vld <= 1;
      case(op)
      op_addi  : begin mini_alu_result <= src1 + imm; end
      op_ret   : begin mini_alu_result <= pc + 4;     end
      op_jalr  : begin mini_alu_result <= pc + 4;     end
      //op_lbu   : begin mini_alu_result <= {56'b0, rdataM[ 7:0]};              end
      //op_lhu   : begin mini_alu_result <= {48'b0, rdataM[15:0]};              end
      //op_lwu   : begin mini_alu_result <= {32'b0, rdataM[31:0]};              end
      //op_ld    : begin mini_alu_result <= rdataM;                             end
      //op_lw    : begin mini_alu_result <= { {32{rdataM[31]}}, rdataM[31:0] };  end
      //op_lh    : begin mini_alu_result <= { {48{rdataM[15]}}, rdataM[15:0] };  end
      //op_lb    : begin mini_alu_result <= { {56{rdataM[7 ]}}, rdataM[7 :0] };  end
      op_slli  : begin mini_alu_result <= src1 <<imm; end
      op_slti  : begin mini_alu_result <= ($signed(src1) < $signed(imm))? 64'b1: 64'b0; end
      op_srli  : begin mini_alu_result <= src1 >>imm; end
      op_sltiu : begin mini_alu_result <= (src1 < imm)? 64'b1: 64'b0; ; end
      op_xori  : begin mini_alu_result <= src1 ^ imm; end
      op_srai  : begin mini_alu_result <= ($signed(src1)) >>> imm[5:0];  end
      op_andi  : begin mini_alu_result <= src1 & imm; end
      op_addiw : begin mini_alu_result <= src1 + imm; end
      op_slliw : begin mini_alu_result <= src1 <<imm; end
      op_srliw : begin mini_alu_result <= { 32'b0, src1[31:0] >> imm }; end
      op_sraiw : begin mini_alu_result <= ($signed(src1)) >>> imm[5:0]; end
      op_ori   : begin mini_alu_result <= src1 | imm; end
      //op_csrrw : begin mini_alu_result <= rCSR; end
      //op_csrrs : begin mini_alu_result <= rCSR; end

      op_auipc : begin mini_alu_result <= pc + imm; end
      op_lui   : begin mini_alu_result <= { {32{imm[31]}},imm[31:12],12'b0 }; end

      op_jal   : begin mini_alu_result <= pc + 4;  end

      op_add   : begin mini_alu_result <= src1 + src2; end
      op_sltu  : begin mini_alu_result <= (src1 < src2)? 64'b1: 64'b0; end
      op_and   : begin mini_alu_result <= src1 & src2; end
      op_or    : begin mini_alu_result <= src1 | src2; end
      op_xor   : begin mini_alu_result <= src1 ^ src2; end
      op_sub   : begin mini_alu_result <= src1 - src2; end
      //op_mul   : begin mini_alu_result = mul_result;  end
      op_slt   : begin mini_alu_result <= ($signed(src1) < $signed(src2))? 64'b1: 64'b0; end
      op_addw  : begin mini_alu_result <= src1 + src2; end
      op_sllw  : begin mini_alu_result <= src1 << src2[4:0];  end
      op_srlw  : begin mini_alu_result <= {32'b0, src1[31:0] >> src2[4:0]};  end
      op_sraw  : begin mini_alu_result <= {32'b0, $signed(src1[31:0]) >>> src2[4:0]}; end
      //op_mulw  : begin mini_alu_result = mul_result;  end
      op_subw  : begin mini_alu_result <= src1 - src2; end
      //op_divw  : begin mini_alu_result = quotient; end
      //op_remw  : begin mini_alu_result = remainder; end
      //op_divuw : begin mini_alu_result = quotient;  end
      //op_remuw : begin mini_alu_result = remainder; end
      //op_divu  : begin mini_alu_result = quotient; end
      //op_remu  : begin mini_alu_result = remainder; end
      op_sll   : begin mini_alu_result <= src1 <<src2; end
      op_srl   : begin mini_alu_result <= src1 >>src2; end
      //op_div   : begin mini_alu_result = quotient; end
      //op_rem   : begin mini_alu_result = remainder; end

      default  : begin mini_alu_result <= 0; end
      endcase
    end
    else begin 
      mini_alu_out_vld <= 0;
    end
  end



  assign alu_wb_vld  = mul_out_valid | div_out_valid | mini_alu_out_vld;

  assign alu_wb_data = mini_alu_out_vld? mini_alu_result:
                    mul_out_valid? mul_result:
                    div_out_valid? div_result:
                    0;

  always_ff @( posedge clk ) begin
    if(~rst_n) alu_wb_addr <= 0;
    else if(alu_req) begin
      alu_wb_addr <= dst_id;
    end
  end


//shifter alu_sh(
//	.shift_data_in  (),
//	.shift_data_tc  (),
//	.shift_sh       (),
//	.shift_sh_mode  (),
//	.shift_dir      (),
//	.w_inst         (),
//	.shift_data_out ()
//);
//
//
//addsub alu_as(
//	.addsub_src1    (),
//	.addsub_src0    (),
//  .addsub_src1_vld(),
//  .addsub_src0_vld(),
//  .sign           (),
//  .w_inst         (),
//	.addsub_AorS    (),
//  .exe_add        (),
//	.addsub_sum     (),
//	.addsub_co      (),
//	.addsub_sign    ()
//);
//
//
//
//mul u_mul(
//  .clk(clk),
//  .rst_n(rst_n),
//  .mul_valid(mul_valid),
//  .multiplicand(src1),
//  .multiplier(src2),
//  .out_valid(mul_out_valid),
//  .result_h(mul_result_h),
//  .result_l(mul_result_l)
//);
//
//
//div u_div(
//  .clk(clk),
//  .rst_n(rst_n),
//
//  .sign_div(inst_act.div_sign),
//  .divw(inst_act.w_inst),
//
//  .div_valid(div_valid),
//  .dividend(src1),
//  .divisor(src2),
//    
//  .quotient(quotient),
//  .remainder(remainder),
//  .out_valid(div_out_valid)
//);


endmodule