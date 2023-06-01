
`define INST_I(i,imm) imm <= {{52{i[31]}},i[31:20]}
`define INST_U(i,imm) imm <= {{32{i[31]}},i[31:12],12'b0}
`define INST_S(i,imm) imm <= {{52{i[31]}},i[31:25],i[11:7]}
`define INST_J(i,imm) imm <= {{44{i[31]}},i[19:12],i[20],i[30:21],1'b0}
`define INST_R(i,imm) imm <= 0
`define INST_B(i,imm) imm <= {{52{i[31]}},i[7],i[30:25],i[11:8],1'b0}
`define INST_N(i,imm) imm <= 0


//负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module IDU(

    input clk,
    input rst_n,
    input       IDU_valid,
    output reg  IDU_ready,

    input [63:0 ] i_inst,
    input      [63:0] i_pc,

    output reg [63:0] pc,
    output reg [63:0] inst,

    output logic [`REG_ADDR_WIDTH-1:0]   rd,
    output logic [`REG_ADDR_WIDTH-1:0]   rs1,
    output logic [`REG_ADDR_WIDTH-1:0]   rs2,
    output reg [`ISA_WIDTH-1:0]   imm,
    output opType op,

    output logic [`IDUf_WIDTH-1:0] flags,

    input      EXU_ready,
    output reg EXU_valid

    );

  //===================================================
  //===control

always @(posedge clk) 
    if(~rst_n) EXU_valid <= 0;
    else if(EXU_ready & EXU_valid) EXU_valid <= 0;
    else if(IDU_valid & IDU_ready) EXU_valid <= 1;
    

initial IDU_ready = 1;
always @(posedge clk) 
	if(~rst_n) IDU_ready <= 0;
	else if(EXU_valid && EXU_ready) IDU_ready <= 1;	//ifetch finish
	else if(IDU_valid & IDU_ready) IDU_ready <= 0;		//ifetch start

/*
flag[0] = bit_expand32_flag
flag[1] = mul_flag
flag[2] = div_flag
flag[3] = ld_flag
flag[4] = sd_flag
flag[6:5] = wmask 00->1 01->2 10->4 11->8

*/


always @(posedge clk) begin
    if(~rst_n) begin 
        pc <= 0; inst <= 0; 
        end
    else if(IDU_valid & IDU_ready) begin     
        inst <= i_inst;
        pc <= i_pc;
    end
end



assign rd  = inst[11:7]; 
assign rs1 = inst[19:15]; 
assign rs2 = inst[24:20];

wire instI_flag = inst[6:0]==7'b00100_11 || inst[6:0]==7'b11001_11 || inst[6:0]==7'b00000_11 || inst[6:0]==7'b00100_11 || inst[6:0]==7'b00110_11 || inst[6:0]==7'b11100_11;
wire instU_flag = inst[6:0]==7'b00101_11 || inst[6:0]==7'b01101_11;
wire instS_flag = inst[6:0]==7'b01000_11;
wire instJ_flag = inst[6:0]==7'b11011_11;
wire instR_flag = inst[6:0]==7'b01100_11 || inst[6:0]==7'b01110_11;
wire instB_flag = inst[6:0]==7'b11000_11;
wire instN_flag = inst[6:0]==7'b11100_11;


wire bit_expand32_flag = (inst[6:0] == 7'b01110_11 || inst[6:0] == 7'b00110_11);
wire mul_flag = instR_flag && (inst[31:25]==7'b1) && (inst[14:12] == 3'b000) ;
wire div_flag = instR_flag && (inst[31:25]==7'b1) && (inst[14:13] == 2'b10 || inst[14:13] == 2'b11);
wire ld_flag  = (inst[6:0] == 7'b00000_11);
wire sd_flag  = instS_flag;
wire [1:0] wmask_flag = sd_flag? inst[13:12]: 2'b00;


assign flags = {wmask_flag, sd_flag, ld_flag, div_flag, mul_flag, bit_expand32_flag};

//logic [`IDUf_WIDTH-1:0] flags1;
//wire [`IDUf_WIDTH-1:0] flag_diff = flags ^ flags1;

always@(posedge clk)
    if(~rst_n) begin 
        imm <= 0; op <= 0; 
    end
    else if(IDU_valid & IDU_ready) begin
        casez(i_inst)
        `addi  : begin `INST_I(i_inst, imm); op <= op_addi  ; /*flags <= 'b0000000;*/ end
        `ret   : begin `INST_I(i_inst, imm); op <= op_ret   ; /*flags <= 'b0000000;*/ end
        `jalr  : begin `INST_I(i_inst, imm); op <= op_jalr  ; /*flags <= 'b0000000;*/ end
        `lbu   : begin `INST_I(i_inst, imm); op <= op_lbu   ; /*flags <= 'b0001000;*/ end
        `lhu   : begin `INST_I(i_inst, imm); op <= op_lhu   ; /*flags <= 'b0001000;*/ end
        `lwu   : begin `INST_I(i_inst, imm); op <= op_lwu   ; /*flags <= 'b0001000;*/ end
        `ld    : begin `INST_I(i_inst, imm); op <= op_ld    ; /*flags <= 'b0001000;*/ end
        `lw    : begin `INST_I(i_inst, imm); op <= op_lw    ; /*flags <= 'b0001000;*/ end
        `lh    : begin `INST_I(i_inst, imm); op <= op_lh    ; /*flags <= 'b0001000;*/ end
        `lb    : begin `INST_I(i_inst, imm); op <= op_lb    ; /*flags <= 'b0001000;*/ end
        `slli  : begin `INST_I(i_inst, imm); op <= op_slli  ; /*flags <= 'b0000000;*/ end
        `srli  : begin `INST_I(i_inst, imm); op <= op_srli  ; /*flags <= 'b0000000;*/ end
        `sltiu : begin `INST_I(i_inst, imm); op <= op_sltiu ; /*flags <= 'b0000000;*/ end
        `xori  : begin `INST_I(i_inst, imm); op <= op_xori  ; /*flags <= 'b0000000;*/ end
        `srai  : begin `INST_I(i_inst, imm); op <= op_srai  ; /*flags <= 'b0000000;*/ end
        `andi  : begin `INST_I(i_inst, imm); op <= op_andi  ; /*flags <= 'b0000000;*/ end
        `addiw : begin `INST_I(i_inst, imm); op <= op_addiw ; /*flags <= 'b0000001;*/ end
        `slliw : begin `INST_I(i_inst, imm); op <= op_slliw ; /*flags <= 'b0000001;*/ end
        `srliw : begin `INST_I(i_inst, imm); op <= op_srliw ; /*flags <= 'b0000001;*/ end
        `sraiw : begin `INST_I(i_inst, imm); op <= op_sraiw ; /*flags <= 'b0000001;*/ end
        `ori   : begin `INST_I(i_inst, imm); op <= op_ori   ; /*flags <= 'b0000000;*/ end
        `csrrw : begin `INST_I(i_inst, imm); op <= op_csrrw ; /*flags <= 'b0000000;*/ end
        `csrrs : begin `INST_I(i_inst, imm); op <= op_csrrs ; /*flags <= 'b0000000;*/ end

        `auipc : begin `INST_U(i_inst, imm); op <= op_auipc ; /*flags <= 'b0000000;*/ end
        `lui   : begin `INST_U(i_inst, imm); op <= op_lui   ; /*flags <= 'b0000000;*/ end
        `sd    : begin `INST_S(i_inst, imm); op <= op_sd    ; /*flags <= 'b1110000;*/ end
        `sw    : begin `INST_S(i_inst, imm); op <= op_sw    ; /*flags <= 'b1010000;*/ end
        `sh    : begin `INST_S(i_inst, imm); op <= op_sh    ; /*flags <= 'b0110000;*/ end
        `sb    : begin `INST_S(i_inst, imm); op <= op_sb    ; /*flags <= 'b0010000;*/ end
        `jal   : begin `INST_J(i_inst, imm); op <= op_jal   ; /*flags <= 'b0000000;*/ end
        `add   : begin `INST_R(i_inst, imm); op <= op_add   ; /*flags <= 'b0000000;*/ end
        `sltu  : begin `INST_R(i_inst, imm); op <= op_sltu  ; /*flags <= 'b0000000;*/ end
        `and   : begin `INST_R(i_inst, imm); op <= op_and   ; /*flags <= 'b0000000;*/ end
        `or    : begin `INST_R(i_inst, imm); op <= op_or    ; /*flags <= 'b0000000;*/ end
        `xor   : begin `INST_R(i_inst, imm); op <= op_xor   ; /*flags <= 'b0000000;*/ end
        `sub   : begin `INST_R(i_inst, imm); op <= op_sub   ; /*flags <= 'b0000000;*/ end
        `mul   : begin `INST_R(i_inst, imm); op <= op_mul   ; /*flags <= 'b0000010;*/ end
        `slt   : begin `INST_R(i_inst, imm); op <= op_slt   ; /*flags <= 'b0000000;*/ end
        `addw  : begin `INST_R(i_inst, imm); op <= op_addw  ; /*flags <= 'b0000001;*/ end
        `sllw  : begin `INST_R(i_inst, imm); op <= op_sllw  ; /*flags <= 'b0000001;*/ end
        `srlw  : begin `INST_R(i_inst, imm); op <= op_srlw  ; /*flags <= 'b0000001;*/ end
        `sraw  : begin `INST_R(i_inst, imm); op <= op_sraw  ; /*flags <= 'b0000001;*/ end
        `mulw  : begin `INST_R(i_inst, imm); op <= op_mulw  ; /*flags <= 'b0000011;*/ end
        `subw  : begin `INST_R(i_inst, imm); op <= op_subw  ; /*flags <= 'b0000001;*/ end
        `divw  : begin `INST_R(i_inst, imm); op <= op_divw  ; /*flags <= 'b0000101;*/ end
        `remw  : begin `INST_R(i_inst, imm); op <= op_remw  ; /*flags <= 'b0000101;*/ end
        `divuw : begin `INST_R(i_inst, imm); op <= op_divuw ; /*flags <= 'b0000101;*/ end
        `remuw : begin `INST_R(i_inst, imm); op <= op_remuw ; /*flags <= 'b0000101;*/ end
        `divu  : begin `INST_R(i_inst, imm); op <= op_divu  ; /*flags <= 'b0000100;*/ end
        `remu  : begin `INST_R(i_inst, imm); op <= op_remu  ; /*flags <= 'b0000100;*/ end
        `rem   : begin `INST_R(i_inst, imm); op <= op_rem   ; /*flags <= 'b0000100;*/ end
        `div   : begin `INST_R(i_inst, imm); op <= op_div   ; /*flags <= 'b0000100;*/ end 
        `sll   : begin `INST_R(i_inst, imm); op <= op_sll   ; /*flags <= 'b0000000;*/ end
        `srl   : begin `INST_R(i_inst, imm); op <= op_srl   ; /*flags <= 'b0000000;*/ end

        `beq   : begin `INST_B(i_inst, imm); op <= op_beq   ; /*flags <= 'b0000000;*/ end
        `bne   : begin `INST_B(i_inst, imm); op <= op_bne   ; /*flags <= 'b0000000;*/ end
        `bge   : begin `INST_B(i_inst, imm); op <= op_bge   ; /*flags <= 'b0000000;*/ end
        `blt   : begin `INST_B(i_inst, imm); op <= op_blt   ; /*flags <= 'b0000000;*/ end
        `bltu  : begin `INST_B(i_inst, imm); op <= op_bltu  ; /*flags <= 'b0000000;*/ end
        `bgeu  : begin `INST_B(i_inst, imm); op <= op_bgeu  ; /*flags <= 'b0000000;*/ end

        `mret  : begin `INST_N(i_inst, imm); op <= op_mret  ; /*flags <= 'b0000000;*/ end
        `ecall : begin `INST_N(i_inst, imm); op <= op_ecall ; /*flags <= 'b0000000;*/ end
        `ebreak: begin `INST_N(i_inst, imm); op <= op_ebreak; /*flags <= 'b0000000;*/ end
        default: begin `INST_N(i_inst, imm); op <= op_inv;    /*flags <= 'b0000000;*/ end
        endcase
    end



endmodule



