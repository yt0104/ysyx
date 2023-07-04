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
      op_jalr  : begin mini_alu_result <= add_result;     end

      op_addi  : begin mini_alu_result <= add_result; end
      op_slli  : begin mini_alu_result <= shift_result; end
      op_slti  : begin mini_alu_result <= add_result; end
      op_srli  : begin mini_alu_result <= shift_result; end
      op_sltiu : begin mini_alu_result <= add_result; end
      op_xori  : begin mini_alu_result <= src1 ^ imm; end
      op_srai  : begin mini_alu_result <= shift_result;  end
      op_andi  : begin mini_alu_result <= src1 & imm; end
      op_addiw : begin mini_alu_result <= add_result; end
      op_slliw : begin mini_alu_result <= shift_result; end
      op_srliw : begin mini_alu_result <= shift_result; end
      op_sraiw : begin mini_alu_result <= shift_result; end
      op_ori   : begin mini_alu_result <= src1 | imm; end

      op_auipc : begin mini_alu_result <= add_result; end
      op_lui   : begin mini_alu_result <= { {32{imm[31]}},imm[31:12],12'b0 }; end

      op_jal   : begin mini_alu_result <= add_result;  end

      op_add   : begin mini_alu_result <= add_result; end
      op_sltu  : begin mini_alu_result <= add_result; end
      op_and   : begin mini_alu_result <= src1 & src2; end
      op_or    : begin mini_alu_result <= src1 | src2; end
      op_xor   : begin mini_alu_result <= src1 ^ src2; end
      op_sub   : begin mini_alu_result <= add_result; end
      //op_mul   : begin mini_alu_result = mul_result;  end
      op_slt   : begin mini_alu_result <= add_result; end
      op_addw  : begin mini_alu_result <= add_result; end
      op_sllw  : begin mini_alu_result <= shift_result;  end
      op_srlw  : begin mini_alu_result <= shift_result;  end
      op_sraw  : begin mini_alu_result <= shift_result; end
      //op_mulw  : begin mini_alu_result = mul_result;  end
      op_subw  : begin mini_alu_result <= add_result; end
      //op_divw  : begin mini_alu_result = quotient; end
      //op_remw  : begin mini_alu_result = remainder; end
      //op_divuw : begin mini_alu_result = quotient;  end
      //op_remuw : begin mini_alu_result = remainder; end
      //op_divu  : begin mini_alu_result = quotient; end
      //op_remu  : begin mini_alu_result = remainder; end
      op_sll   : begin mini_alu_result <= shift_result; end
      op_srl   : begin mini_alu_result <= shift_result; end
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


//--------------------------------------------------------
//------shifter

logic shift_dir;
logic shift_mode;
logic [5:0] shift_shamt;
logic [63:0] shift_result;

always_comb begin : shifter_control
  shift_dir  = inst_act.shift & inst_act.func3[2];            //1: sr
  shift_mode = inst_act.shift_arth;                           //1: sra

  case({inst_act.w_inst, inst_act.imm_vld})
    2'b00: shift_shamt = src2[5:0];
    2'b01: shift_shamt = imm[5:0];
    2'b10: shift_shamt = {1'b0, src2[4:0]};
    2'b11: shift_shamt = imm[5:0];
    default: shift_shamt = 0;
  endcase
end

shifter alu_shift(
	.shift_data_in  (src1),
	.shift_data_tc  (1'b1),
	.shift_sh       (shift_shamt),
	.shift_sh_mode  (shift_mode),
	.shift_dir      (shift_dir),
	.w_inst         (inst_act.w_inst),
	.shift_data_out (shift_result)
);


//--------------------------------------------------------
//------adder

logic [63:0] add_result;

logic [63:0]  adder_src0;
logic [63:0]  adder_src1;
logic         adder_AorS;
logic         exe_add;


logic [63:0]      adder_sum     ;
logic             adder_co      ;
logic             adder_sign    ;


always_comb begin : adder_control
  adder_src0  = (inst_act.auipc| inst_act.jal| inst_act.jalr)? pc: src1;
  adder_src1  = (inst_act.jal| inst_act.jalr)? 4: inst_act.imm_vld? imm: src2;
  adder_AorS  = inst_act.add_sub | inst_act.add_slt;
  exe_add     = inst_act.add;
  
end


always_comb begin

  if(inst_act.add_slt)  //src0 - src1
    if(inst_act.sign)
      add_result = adder_sign ^ adder_sum[63] ? {63'b0, ~adder_sum[63]} : {63'b0, adder_sum[63]};
    else 
      case ({adder_src0[63], adder_src1[63]})
        2'b01: add_result = 64'b1;
        2'b10: add_result = 64'b0;
        default: add_result = {63'b0, adder_sum[63]};
      endcase
  else add_result  = adder_sum;
  
end


adder alu_add(
	.adder_src1    (adder_src1),
	.adder_src0    (adder_src0),
  .adder_src1_vld(1'b1),
  .adder_src0_vld(1'b1),
  .sign          (inst_act.sign),
  .w_inst        (inst_act.w_inst),
	.adder_AorS    (adder_AorS),
  .exe_add       (exe_add),
	.adder_sum     (adder_sum),
	.adder_co      (adder_co),
	.adder_sign    (adder_sign)
);



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