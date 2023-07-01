
`define INST_I(i,imm) imm = {{52{i[31]}},i[31:20]}
`define INST_U(i,imm) imm = {{32{i[31]}},i[31:12],12'b0}
`define INST_S(i,imm) imm = {{52{i[31]}},i[31:25],i[11:7]}
`define INST_J(i,imm) imm = {{44{i[31]}},i[19:12],i[20],i[30:21],1'b0}
`define INST_R(i,imm) imm = 0
`define INST_B(i,imm) imm = {{52{i[31]}},i[7],i[30:25],i[11:8],1'b0}
`define INST_N(i,imm) imm = 0


//负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module IDU(

    input clk,
    input rst_n,

    input       IFU_vld,
    input [63:0 ] IFU_inst,
    input      [63:0] IFU_pc,

    output logic [4:0]   rd,
    output logic [4:0]   rs1,
    output logic [4:0]   rs2,
    output reg [63:0]   imm,


    output InstAct  inst_act,
    output InstType inst_type,
    output opType op,


    output logic IDU_vld,
    output logic [63:0] IDU_pc,
    output logic [63:0] IDU_inst

    );

  //===================================================
  //===control

always_ff @( posedge clk ) begin
    if(~rst_n) IDU_vld <= 0;
    else IDU_vld <= IFU_vld;
    
end

initial IDU_pc = 64'h80000000;
always_ff @(posedge clk) begin
    if(~rst_n) begin 
        IDU_pc <= 64'h80000000; IDU_inst <= 0; 
        end
    else begin     
        IDU_inst <= IFU_inst;
        IDU_pc <= IFU_pc;
    end
end



wire [63:0 ] inst = IFU_inst;

InstAct    inst_act_pre;
InstType   inst_type_pre;

always_comb begin : dec_pre
    
    inst_act_pre.imm    = inst[6:0]== RV_IMM;
    inst_act_pre.jalr   = inst[6:0]== RV_JALR;
    inst_act_pre.ld     = inst[6:0]== RV_LD;
    inst_act_pre.imm32  = inst[6:0]== RV_IMM_32;
    inst_act_pre.sys    = inst[6:0]== RV_SYS;

    inst_act_pre.auipc  = inst[6:0]== RV_AUIPC;
    inst_act_pre.lui    = inst[6:0]== RV_LUI;

    inst_act_pre.st     = inst[6:0]== RV_ST;

    inst_act_pre.jal    = inst[6:0]== RV_JAL;
    
    inst_act_pre.op     = inst[6:0]== RV_OP;
    inst_act_pre.op32   = inst[6:0]== RV_OP_32;

    inst_act_pre.br     = inst[6:0]== RV_BR;

    
    inst_type_pre.instI = inst[6:0]== RV_IMM || inst[6:0]== RV_JALR || inst[6:0]== RV_LD || inst[6:0]== RV_IMM_32 || inst[6:0]==RV_SYS;
    inst_type_pre.instU = inst[6:0]== RV_AUIPC || inst[6:0]== RV_LUI;
    inst_type_pre.instS = inst[6:0]== RV_ST;
    inst_type_pre.instJ = inst[6:0]== RV_JAL;
    inst_type_pre.instR = inst[6:0]== RV_OP || inst[6:0]== RV_OP_32;
    inst_type_pre.instB = inst[6:0]== RV_BR;


    inst_act_pre.call       = (inst_act_pre.jal  && ras_rd_link)
                            ||(inst_act_pre.jalr && ras_rd_link) && ~ras_rs1_link
                            ||(inst_act_pre.jalr && ras_rd_link) && (rs1_pre == rd_pre);
    inst_act_pre.ret        = (inst_act_pre.jalr && ~ras_rd_link) && ras_rs1_link;
    inst_act_pre.ret_call   = inst_act_pre.jalr && ras_rd_link && (rs1_pre != rd_pre);

    
    inst_act_pre.csr        = inst_act_pre.sys &  (|inst[14:12]);
    inst_act_pre.syscall    = inst_act_pre.sys & ~(|inst[14:12]);
    inst_act_pre.ecall      = inst_act_pre.syscall & (inst[26:25] == 2'b00);
    inst_act_pre.ebreak     = inst_act_pre.syscall & (inst[26:25] == 2'b01); 
    inst_act_pre.mret       = inst_act_pre.syscall & (inst[26:25] == 2'b10);

    inst_act_pre.w_inst = (inst[6:0] == RV_OP_32 || inst[6:0] == RV_IMM_32);   
    inst_act_pre.wb     = inst_type_pre.instR | inst_type_pre.instJ | inst_type_pre.instU | (inst_type_pre.instI & ~inst_act_pre.syscall);


    inst_act_pre.mini_alu    =(inst_type_pre.instI & ~inst_act_pre.sys & ~inst_act_pre.ld)
                            |  inst_type_pre.instU | inst_type_pre.instJ
                            | (inst_type_pre.instR & ~inst[25]);
    inst_act_pre.mul        = inst_type_pre.instR & inst[25] & ~inst[14];
    inst_act_pre.div        = inst_type_pre.instR & inst[25] & inst[14];
    inst_act_pre.div_rem    = inst_type_pre.instR & inst[25] & inst[14] & inst[13];
    inst_act_pre.div_sign   = inst_type_pre.instR & inst[25] & ~inst[12];

    inst_act_pre.func3      = inst[14:12];
    inst_act_pre.onecycle   = ~(inst_act_pre.mul | inst_act_pre.div | inst_act_pre.ld);


end

wire ras_rd_link  = (rd_pre == 1 || rd_pre == 5);
wire ras_rs1_link = (rs1_pre == 1 || rs1_pre == 5);


logic [63:0]   imm_pre;
logic [4:0]    rd_pre;
logic [4:0]    rs1_pre;
logic [4:0]    rs2_pre;

always_comb begin
    if(inst_type_pre.instI) `INST_I(inst, imm_pre); 
    else if(inst_type_pre.instU) `INST_U(inst, imm_pre); 
    else if(inst_type_pre.instS) `INST_S(inst, imm_pre); 
    else if(inst_type_pre.instJ) `INST_J(inst, imm_pre); 
    else if(inst_type_pre.instR) `INST_R(inst, imm_pre); 
    else if(inst_type_pre.instB) `INST_B(inst, imm_pre); 
    else imm_pre = 0;
end


always_comb begin
    rd_pre  = inst[11:7]; 
    rs1_pre = inst[19:15];
    rs2_pre = inst[24:20];
end


always_ff @( posedge clk ) begin : dec_ff

    rd  <= rd_pre ;
    rs1 <= rs1_pre;
    rs2 <= rs2_pre;
    imm <= imm_pre;

    inst_type   <= inst_type_pre;
    inst_act    <= inst_act_pre;

end


always@(posedge clk)
    if(~rst_n) begin 
        imm <= 0; op <= 0; 
    end
    else if(IFU_vld) begin
        casez(IFU_inst)
        `addi  : begin op <= op_addi  ; end
        `ret   : begin op <= op_ret   ; end
        `jalr  : begin op <= op_jalr  ; end
        `lbu   : begin op <= op_lbu   ; end
        `lhu   : begin op <= op_lhu   ; end
        `lwu   : begin op <= op_lwu   ; end
        `ld    : begin op <= op_ld    ; end
        `lw    : begin op <= op_lw    ; end
        `lh    : begin op <= op_lh    ; end
        `lb    : begin op <= op_lb    ; end
        `slli  : begin op <= op_slli  ; end
        `slti  : begin op <= op_slti  ; end
        `srli  : begin op <= op_srli  ; end
        `sltiu : begin op <= op_sltiu ; end
        `xori  : begin op <= op_xori  ; end
        `srai  : begin op <= op_srai  ; end
        `andi  : begin op <= op_andi  ; end
        `addiw : begin op <= op_addiw ; end
        `slliw : begin op <= op_slliw ; end
        `srliw : begin op <= op_srliw ; end
        `sraiw : begin op <= op_sraiw ; end
        `ori   : begin op <= op_ori   ; end
        `csrrw : begin op <= op_csrrw ; end
        `csrrs : begin op <= op_csrrs ; end

        `auipc : begin op <= op_auipc ; end
        `lui   : begin op <= op_lui   ; end
        `sd    : begin op <= op_sd    ; end
        `sw    : begin op <= op_sw    ; end
        `sh    : begin op <= op_sh    ; end
        `sb    : begin op <= op_sb    ; end
        `jal   : begin op <= op_jal   ; end
        `add   : begin op <= op_add   ; end
        `sltu  : begin op <= op_sltu  ; end
        `and   : begin op <= op_and   ; end
        `or    : begin op <= op_or    ; end
        `xor   : begin op <= op_xor   ; end
        `sub   : begin op <= op_sub   ; end
        `mul   : begin op <= op_mul   ; end
        `slt   : begin op <= op_slt   ; end
        `addw  : begin op <= op_addw  ; end
        `sllw  : begin op <= op_sllw  ; end
        `srlw  : begin op <= op_srlw  ; end
        `sraw  : begin op <= op_sraw  ; end
        `mulw  : begin op <= op_mulw  ; end
        `subw  : begin op <= op_subw  ; end
        `divw  : begin op <= op_divw  ; end
        `remw  : begin op <= op_remw  ; end
        `divuw : begin op <= op_divuw ; end
        `remuw : begin op <= op_remuw ; end
        `divu  : begin op <= op_divu  ; end
        `remu  : begin op <= op_remu  ; end
        `rem   : begin op <= op_rem   ; end
        `div   : begin op <= op_div   ; end 
        `sll   : begin op <= op_sll   ; end
        `srl   : begin op <= op_srl   ; end

        `beq   : begin op <= op_beq   ; end
        `bne   : begin op <= op_bne   ; end
        `bge   : begin op <= op_bge   ; end
        `blt   : begin op <= op_blt   ; end
        `bltu  : begin op <= op_bltu  ; end
        `bgeu  : begin op <= op_bgeu  ; end

        `mret  : begin op <= op_mret  ; end
        `ecall : begin op <= op_ecall ; end
        `ebreak: begin op <= op_ebreak; end
        default: begin op <= op_inv;    end
        endcase
    end



endmodule



