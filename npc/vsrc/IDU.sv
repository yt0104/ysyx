
`define INST_I(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= i[19:15]; rs2 <= 0;        imm <= {{52{i[31]}},i[31:20]}
`define INST_U(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= 0;        rs2 <= 0;        imm <= {{32{i[31]}},i[31:12],12'b0}
`define INST_S(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= i[19:15]; rs2 <= i[24:20]; imm <= {{52{i[31]}},i[31:25],i[11:7]}
`define INST_J(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= 0;        rs2 <= 0;        imm <= {{44{i[31]}},i[19:12],i[20],i[30:21],1'b0}
`define INST_R(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= i[19:15]; rs2 <= i[24:20]; imm <= 0
`define INST_B(i,rd,rs1,rs2,imm) rd <= i[11:7]; rs1 <= i[19:15]; rs2 <= i[24:20]; imm <= {{52{i[31]}},i[7],i[30:25],i[11:8],1'b0}
`define INST_N(i,rd,rs1,rs2,imm) rd <= 0;       rs1 <= 0;        rs2 <= 0;        imm <= 0


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

    output reg [`REG_ADDR_WIDTH-1:0]   rd,
    output reg [`REG_ADDR_WIDTH-1:0]   rs1,
    output reg [`REG_ADDR_WIDTH-1:0]   rs2,
    output reg [`ISA_WIDTH-1:0]   imm,
    output opType op,

    output reg npc_valid,
    output reg [`ISA_WIDTH-1:0] npc,
    //input      IFU_ready,
    //output     IFU_valid,

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


always@(posedge clk)
    if(~rst_n) begin rd <= 0; rs1 <= 0; rs2 <= 0; imm <= 0; op <= 0; pc <= 0; inst <= 0; end
    else if(IDU_valid & IDU_ready) begin
        inst <= i_inst;
        pc <= i_pc;
        casez(i_inst)
        `addi  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_addi  ; end
        `ret   : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_ret   ; end
        `jalr  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_jalr  ; end
        `lbu   : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lbu   ; end
        `lhu   : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lhu   ; end
        `lwu   : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lwu   ; end
        `ld    : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_ld    ; end
        `lw    : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lw    ; end
        `lh    : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lh    ; end
        `lb    : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_lb    ; end
        `slli  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_slli  ; end
        `srli  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_srli  ; end
        `sltiu : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_sltiu ; end
        `xori  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_xori  ; end
        `srai  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_srai  ; end
        `andi  : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_andi  ; end
        `addiw : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_addiw ; end
        `slliw : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_slliw ; end
        `srliw : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_srliw ; end
        `sraiw : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_sraiw ; end
        `ori   : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_ori   ; end
        `csrrw : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_csrrw ; end
        `csrrs : begin `INST_I(i_inst,rd,rs1,rs2,imm); op <= op_csrrs ; end

        `auipc : begin `INST_U(i_inst,rd,rs1,rs2,imm); op <= op_auipc ; end
        `lui   : begin `INST_U(i_inst,rd,rs1,rs2,imm); op <= op_lui   ; end
        `sd    : begin `INST_S(i_inst,rd,rs1,rs2,imm); op <= op_sd    ; end
        `sw    : begin `INST_S(i_inst,rd,rs1,rs2,imm); op <= op_sw    ; end
        `sh    : begin `INST_S(i_inst,rd,rs1,rs2,imm); op <= op_sh    ; end
        `sb    : begin `INST_S(i_inst,rd,rs1,rs2,imm); op <= op_sb    ; end
        `jal   : begin `INST_J(i_inst,rd,rs1,rs2,imm); op <= op_jal   ; end
        `add   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_add   ; end
        `sltu  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_sltu  ; end
        `and   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_and   ; end
        `or    : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_or    ; end
        `xor   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_xor   ; end
        `sub   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_sub   ; end
        `mul   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_mul   ; end
        `slt   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_slt   ; end
        `addw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_addw  ; end
        `sllw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_sllw  ; end
        `srlw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_srlw  ; end
        `sraw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_sraw  ; end
        `mulw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_mulw  ; end
        `subw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_subw  ; end
        `divw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_divw  ; end
        `remw  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_remw  ; end
        `divuw : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_divuw ; end
        `remuw : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_remuw ; end
        `divu  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_divu  ; end
        `remu  : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_remu  ; end
        `sll   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_sll   ; end
        `srl   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_srl   ; end
        `rem   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_rem   ; end
        `div   : begin `INST_R(i_inst,rd,rs1,rs2,imm); op <= op_div   ; end   

        `beq   : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_beq   ; end
        `bne   : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_bne   ; end
        `bge   : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_bge   ; end
        `blt   : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_blt   ; end
        `bltu  : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_bltu  ; end
        `bgeu  : begin `INST_B(i_inst,rd,rs1,rs2,imm); op <= op_bgeu  ; end

        `mret  : begin `INST_N(i_inst,rd,rs1,rs2,imm); op <= op_mret  ; end
        `ecall : begin `INST_N(i_inst,rd,rs1,rs2,imm); op <= op_ecall ; end
        `ebreak: begin `INST_N(i_inst,rd,rs1,rs2,imm); op <= op_ebreak; end
        default: begin `INST_N(i_inst,rd,rs1,rs2,imm); op <= op_inv;    end
        endcase
    end
    else if(npc_valid);


  //reg npc_valid;
  always@(*)
    if(~rst_n) npc_valid = 0;
    else 
        casez(i_inst)
        `ret   : npc_valid = 0; 
        `jalr  : npc_valid = 0; 

        `jal   : npc_valid = 0; 

        `beq   : npc_valid = 0; 
        `bne   : npc_valid = 0; 
        `bge   : npc_valid = 0; 
        `blt   : npc_valid = 0; 
        `bltu  : npc_valid = 0; 
        `bgeu  : npc_valid = 0; 

        `mret  : npc_valid = 0; 
        `ecall : npc_valid = 0; 
        `ebreak: npc_valid = 0; 
        default  : npc_valid = IDU_valid & IDU_ready; 
        endcase

initial npc = 64'h80000000;
always @(posedge clk) 
    if(~rst_n) npc <= 64'h80000000;
    else if(IDU_valid & IDU_ready) npc <= i_pc + 4; 


endmodule



