module ALU(

  input clk,
  input rst_n,

  input logic           IDU_vld,

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


  logic shift_out_vld;
  logic lgc_out_vld;
  logic add_out_vld;

  logic [63:0] shift_data_out;
  logic [63:0] lgc_data_out;
  logic [63:0] add_data_out;

  always_ff @( posedge clk ) begin
    shift_out_vld <= shift_req;
    lgc_out_vld   <= lgc_req;
    add_out_vld   <= add_req;
    if(shift_req) shift_data_out <= shift_result;
    if(lgc_req)   lgc_data_out   <= lgc_result;
    if(add_req)   add_data_out   <= add_result;
  end


  assign alu_wb_vld  = mul_out_valid | div_out_valid| shift_out_vld | lgc_out_vld | add_out_vld;


  assign alu_wb_data =  shift_out_vld? shift_data_out:
                        lgc_out_vld? lgc_data_out:
                        add_out_vld? add_data_out:
                        mul_out_valid? mul_result:
                        div_out_valid? div_result:
                        0;

  always_ff @( posedge clk ) begin
    if(~rst_n) alu_wb_addr <= 0;
    else if(IDU_vld) begin
      alu_wb_addr <= dst_id;
    end
  end


  logic w_inst_d;
  always_ff @( posedge clk ) begin 
    if(IDU_vld) w_inst_d <= inst_act.w_inst;
  end

  reg div_rem_d;
  always_ff @( posedge clk ) begin
    if(IDU_vld) div_rem_d <= inst_act.div_rem;
  end

//--------------------------------------------------------
//------shifter

logic shift_req;
logic shift_dir;
logic shift_mode;
logic [5:0] shift_shamt;
logic [63:0] shift_result;

always_comb begin : shifter_control
  shift_dir  = inst_act.shift & inst_act.func3[2];            //1: sr
  shift_mode = inst_act.shift_arth;                           //1: sra
  shift_req  = IDU_vld & inst_act.shift;

  case({inst_act.w_inst, inst_act.imm_vld})
    2'b00: shift_shamt = src2[5:0];
    2'b01: shift_shamt = imm[5:0];
    2'b10: shift_shamt = {1'b0, src2[4:0]};
    2'b11: shift_shamt = imm[5:0];
    default: shift_shamt = 0;
  endcase
end

shifter alu_shift(
  .shift_req      (shift_req),
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
logic         add_req;


logic [63:0]      adder_sum     ;
logic             adder_co      ;
logic             adder_sign    ;


always_comb begin : adder_control
  adder_src0  = (inst_act.auipc| inst_act.jal| inst_act.jalr)? pc: inst_act.lui? 64'b0: src1;
  adder_src1  = (inst_act.jal| inst_act.jalr)? 4: inst_act.imm_vld? imm: src2;
  adder_AorS  = inst_act.add_sub | inst_act.add_slt;
  add_req     = IDU_vld & inst_act.add;
  
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
  .add_req       (add_req),
	.adder_sum     (adder_sum),
	.adder_co      (adder_co),
	.adder_sign    (adder_sign)
);


//--------------------------------------------------------
//------logic

logic [63:0] lgc_result;

logic        lgc_req;
logic [63:0] lgc_src0;
logic [63:0] lgc_src1;

always_comb begin: lgc_control
  lgc_src0 = src1;
  lgc_src1 = inst_act.imm_vld? imm: src2;
  lgc_req  = IDU_vld & inst_act.lgc;

end

always_comb begin: lgc
  if(lgc_req)
    case(inst_act.func3)
      3'b111: lgc_result = lgc_src0 & lgc_src1; //and
      3'b110: lgc_result = lgc_src0 | lgc_src1; //or
      3'b100: lgc_result = lgc_src0 ^ lgc_src1; //xor
      default: lgc_result = 0;
    endcase
  else lgc_result = 0;

end


//--------------------------------------------------------
//------mult


  logic mul_out_valid;
  logic [63:0] mul_result;

  logic mult_req;
  logic [63:0] mult_src0;
  logic [63:0] mult_src1;
  logic mult_sign;
  logic [127:0] mult_data_out;
  logic mult_data_vld;


  always_comb begin : mul_control

    mult_req = IDU_vld & inst_act.mul;
    mult_src0 = src1;
    mult_src1 = src2;
    mult_sign = inst_act.sign;

    mul_result = w_inst_d? {{32{mult_data_out[31]}}, mult_data_out[31:0]}: mult_data_out[63:0];
    mul_out_valid = mult_data_vld;
  end


  mult_wallace alu_mult(
	  .clk(clk),
	  .mult_req(mult_req),
	  .mult_src0(mult_src0),
	  .mult_src1(mult_src1),
	  .mult_sign(mult_sign),

	  .mult_data_out(mult_data_out),
	  .mult_data_vld(mult_data_vld)
	);


//--------------------------------------------------------
//------div

  logic div_req;
  logic div_out_valid;
  logic [63:0] quotient, remainder;
  logic [63:0] div_result;

  always_comb begin : div_control
    div_req = IDU_vld & inst_act.div;
    div_result = div_rem_d? remainder : quotient;
  end

  div u_div(
    .clk(clk),
    .rst_n(rst_n),

    .sign_div(inst_act.sign),
    .divw(inst_act.w_inst),

    .div_valid(div_req),
    .dividend(src1),
    .divisor(src2),
    
    .quotient(quotient),
    .remainder(remainder),
    .out_valid(div_out_valid)
    );




endmodule