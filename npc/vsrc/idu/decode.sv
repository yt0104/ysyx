
`define INST_I(i,imm) imm = {{52{i[31]}},i[31:20]}
`define INST_U(i,imm) imm = {{32{i[31]}},i[31:12],12'b0}
`define INST_S(i,imm) imm = {{52{i[31]}},i[31:25],i[11:7]}
`define INST_J(i,imm) imm = {{44{i[31]}},i[19:12],i[20],i[30:21],1'b0}
`define INST_R(i,imm) imm = 0
`define INST_B(i,imm) imm = {{52{i[31]}},i[7],i[30:25],i[11:8],1'b0}
`define INST_N(i,imm) imm = 0


//负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module decode(

    input clk,
    input rst_n,

    input                ifetch_inst_vld,
    input       [63:0 ]  ifetch_inst,
    input       [63:0]   ifetch_inst_pc,

    output logic [4:0]   rd,
    output logic [4:0]   rs1,
    output logic [4:0]   rs2,
    output reg [63:0]    imm,


    output InstAct      inst_act,
    output InstType     inst_type,
    output opType       op,


    output logic        dec_inst_vld,
    output logic [63:0] dec_inst_pc,
    output logic [63:0] dec_inst
    
    );

  //===================================================
  //===control

always_ff @( posedge clk ) begin
    if(~rst_n) dec_inst_vld <= 0;
    else dec_inst_vld <= ifetch_inst_vld;
    
end

initial dec_inst_pc = 64'h80000000;
always_ff @(posedge clk) begin
    if(~rst_n) begin 
        dec_inst_pc <= 64'h80000000; dec_inst <= 0; 
        end
    else begin     
        dec_inst <= ifetch_inst;
        dec_inst_pc <= ifetch_inst_pc;
    end
end



wire [63:0 ] inst = ifetch_inst;

InstAct    inst_act_pre;
InstType   inst_type_pre;


always_comb begin : type_pre

    inst_type_pre.IMM    = inst[6:0]== RV_IMM;
    inst_type_pre.JALR   = inst[6:0]== RV_JALR;
    inst_type_pre.LD     = inst[6:0]== RV_LD;
    inst_type_pre.IMM_32 = inst[6:0]== RV_IMM_32;
    inst_type_pre.SYS    = inst[6:0]== RV_SYS;
    inst_type_pre.AUIPC  = inst[6:0]== RV_AUIPC;
    inst_type_pre.LUI    = inst[6:0]== RV_LUI;
    inst_type_pre.ST     = inst[6:0]== RV_ST;
    inst_type_pre.JAL    = inst[6:0]== RV_JAL;
    inst_type_pre.OP     = inst[6:0]== RV_OP;
    inst_type_pre.OP_32  = inst[6:0]== RV_OP_32;
    inst_type_pre.BR     = inst[6:0]== RV_BR;

    //type
    inst_type_pre.instI = inst[6:0]== RV_IMM || inst[6:0]== RV_JALR || inst[6:0]== RV_LD || inst[6:0]== RV_IMM_32 || inst[6:0]==RV_SYS;
    inst_type_pre.instU = inst[6:0]== RV_AUIPC || inst[6:0]== RV_LUI;
    inst_type_pre.instS = inst[6:0]== RV_ST;
    inst_type_pre.instJ = inst[6:0]== RV_JAL;
    inst_type_pre.instR = inst[6:0]== RV_OP || inst[6:0]== RV_OP_32;
    inst_type_pre.instB = inst[6:0]== RV_BR;

end


always_comb begin : dec_pre
    
    

    //for bmu
    inst_act_pre.jalr   = inst_type_pre.JALR;
    inst_act_pre.jal    = inst_type_pre.JAL;
    inst_act_pre.br     = inst_type_pre.BR;
    inst_act_pre.call       = (inst_type_pre.JAL  && ras_rd_link)
                            ||(inst_type_pre.JALR && ras_rd_link) && ~ras_rs1_link
                            ||(inst_type_pre.JALR && ras_rd_link) && (rs1_pre == rd_pre);
    inst_act_pre.ret        = (inst_type_pre.JALR && ~ras_rd_link) && ras_rs1_link;
    inst_act_pre.ret_call   =  inst_type_pre.JALR && ras_rd_link && (rs1_pre != rd_pre);

    //for lsu
    inst_act_pre.st     = inst_type_pre.ST;
    inst_act_pre.ld     = inst_type_pre.LD;

    //for syscontrol
    inst_act_pre.sys        = inst_type_pre.SYS;
    inst_act_pre.csr        = inst_type_pre.SYS &  (|inst[14:12]);
    inst_act_pre.syscall    = inst_type_pre.SYS & ~(|inst[14:12]);
    inst_act_pre.ecall      = inst_type_pre.SYS & ~(|inst[14:12]) & (inst[21:20] == 2'b00);
    inst_act_pre.ebreak     = inst_type_pre.SYS & ~(|inst[14:12]) & (inst[21:20] == 2'b01); 
    inst_act_pre.mret       = inst_type_pre.SYS & ~(|inst[14:12]) & (inst[21:20] == 2'b10);

    //for alu
    inst_act_pre.auipc  = inst_type_pre.AUIPC;
    inst_act_pre.lui    = inst_type_pre.LUI;
    
    inst_act_pre.mul        = inst_type_pre.instR & inst[25] & ~inst[14];
    inst_act_pre.div        = inst_type_pre.instR & inst[25] & inst[14];
    inst_act_pre.div_rem    = inst_type_pre.instR & inst[25] & inst[14] & inst[13];
    inst_act_pre.sign       = ! ( inst_type_pre.LD    & inst[14] 
                                | inst_type_pre.BR    & (inst[14:13] == 2'b11)
                                | inst_type_pre.IMM   & (inst[14:12]==3'b011)
                                | inst_type_pre.OP    & (inst[14:12]==3'b011 || inst_act_pre.div & inst[14] & inst[12])
                                | inst_type_pre.OP_32 & (inst_act_pre.div & inst[14] & inst[12])
                                );
    inst_act_pre.w_inst = (inst_type_pre.OP_32 | inst_type_pre.IMM_32);   
    inst_act_pre.shift      = inst_type_pre.IMM   & (inst[14:12]==3'b001 || inst[14:12]==3'b101)
                            | inst_type_pre.IMM_32& (inst[14:12]==3'b001 || inst[14:12]==3'b101)
                            | inst_type_pre.OP    & (inst[14:12]==3'b001 || inst[14:12]==3'b101) & ~inst[25]
                            | inst_type_pre.OP_32 & (inst[14:12]==3'b001 || inst[14:12]==3'b101) & ~inst[25];
    inst_act_pre.shift_arth = inst_act_pre.shift & inst[30];

    inst_act_pre.add_slt    = inst_type_pre.IMM   & (inst[14:12]==3'b010 | inst[14:12]==3'b011)
                            | inst_type_pre.OP    & (inst[14:12]==3'b010 | inst[14:12]==3'b011);
    inst_act_pre.add        = inst_act_pre.add_slt
                            | inst_type_pre.JALR  | inst_type_pre.JAL
                            | inst_type_pre.AUIPC | inst_type_pre.LUI
                            | inst_type_pre.IMM    & (inst[14:12]==3'b000 )
                            | inst_type_pre.IMM_32 & (inst[14:12]==3'b000 )
                            | inst_type_pre.OP     & (inst[14:12]==3'b000 & ~inst[25])
                            | inst_type_pre.OP_32  & (inst[14:12]==3'b000 & ~inst[25]);
    inst_act_pre.add_sub    = inst_act_pre.add & inst[30] & (inst_type_pre.OP | inst_type_pre.OP_32); 

    inst_act_pre.lgc        = inst_type_pre.IMM    & ~inst_act_pre.add & ~inst_act_pre.shift                   
                            | inst_type_pre.OP     & ~inst_act_pre.add & ~inst_act_pre.shift & ~inst[25]; 

    inst_act_pre.func3      = inst[14:12];

    inst_act_pre.dst_vld    = !(inst_type_pre.ST | inst_type_pre.BR | inst_act_pre.syscall);
    inst_act_pre.imm_vld    = !(inst_type_pre.OP | inst_type_pre.OP_32 | (inst_type_pre.SYS & ~inst[14]) );
                           
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



//--------------------------------------------
//------for test

import "DPI-C" function void sim_exit(int state);
always@(*)
  if(dec_inst_vld) begin
    case(op) 
    op_ebreak: begin $display("ebreak"); sim_exit(0); end   //exit program
    op_inv   : begin sim_exit(1); end   //inst error
    endcase
  end



always@(posedge clk)
    if(~rst_n) begin 
        op <= 0; 
    end
    else if(ifetch_inst_vld) begin
        casez(ifetch_inst)
        
        `jalr  : begin op <= op_jalr  ; end
        `lbu   : begin op <= op_lbu   ; end
        `lhu   : begin op <= op_lhu   ; end
        `lwu   : begin op <= op_lwu   ; end
        `ld    : begin op <= op_ld    ; end
        `lw    : begin op <= op_lw    ; end
        `lh    : begin op <= op_lh    ; end
        `lb    : begin op <= op_lb    ; end
        `addi  : begin op <= op_addi  ; end
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



