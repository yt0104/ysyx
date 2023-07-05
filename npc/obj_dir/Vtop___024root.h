// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(jmp_type,7,0);
    VL_OUT8(ifetch_taken,0,0);
    VL_OUT8(mainUpdate_valid,0,0);
    VL_OUT64(ifetch_taken_pc,63,0);
    VL_OUT64(inst,63,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__ifetch_req;
        CData/*0:0*/ top__DOT__IDU_vld;
        CData/*4:0*/ top__DOT__rd;
        CData/*4:0*/ top__DOT__rs1;
        CData/*4:0*/ top__DOT__rs2;
        CData/*0:0*/ top__DOT__axis1_AW_READY;
        CData/*0:0*/ top__DOT__axis1_W_READY;
        CData/*0:0*/ top__DOT__axis1_B_READY;
        CData/*0:0*/ top__DOT__axis1_R_VALID;
        CData/*0:0*/ top__DOT__axis1_R_READY;
        CData/*0:0*/ top__DOT__axis2_AW_VALID;
        CData/*0:0*/ top__DOT__axis2_AW_READY;
        CData/*0:0*/ top__DOT__axis2_W_VALID;
        CData/*0:0*/ top__DOT__axis2_W_READY;
        CData/*0:0*/ top__DOT__axis2_B_READY;
        CData/*0:0*/ top__DOT__axis2_AR_VALID;
        CData/*0:0*/ top__DOT__axis2_R_VALID;
        CData/*0:0*/ top__DOT__axis2_R_READY;
        CData/*0:0*/ top__DOT__in_channel;
        CData/*0:0*/ top__DOT__itrace_en;
        CData/*5:0*/ top__DOT__u_IFU__DOT__pre_cnt;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rask;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rreq;
        CData/*7:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg;
        CData/*0:0*/ top__DOT__u_IDU__DOT__ras_rd_link;
        CData/*0:0*/ top__DOT__u_IDU__DOT__ras_rs1_link;
        CData/*0:0*/ top__DOT__u_EXU__DOT__alu_wb_vld;
        CData/*4:0*/ top__DOT__u_EXU__DOT__alu_wb_addr;
        CData/*4:0*/ top__DOT__u_EXU__DOT__wb_addr;
        CData/*0:0*/ top__DOT__u_EXU__DOT__bmu_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__lsu_wb_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__ld_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__st_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__sys_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__csr_data_vld;
        CData/*4:0*/ top__DOT__u_EXU__DOT__csr_wb_addr;
        CData/*0:0*/ top__DOT__u_EXU__DOT__csr_wb_vld;
        CData/*1:0*/ top__DOT__u_EXU__DOT__csrf_raddr;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__shift_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir;
        CData/*5:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__add_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__div_req;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid;
        CData/*5:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre;
        CData/*2:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d;
    };
    struct {
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r;
        CData/*4:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r;
        CData/*7:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid;
        CData/*7:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_sysc__DOT__wen;
        CData/*1:0*/ top__DOT__u_EXU__DOT__u_sysc__DOT__state;
        CData/*1:0*/ top__DOT__u_EXU__DOT__u_sysc__DOT__nstate;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
        CData/*0:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY;
        SData/*11:0*/ top__DOT__u_EXU__DOT__u_sysc__DOT__raddr;
        SData/*11:0*/ top__DOT__u_EXU__DOT__u_sysc__DOT__waddr;
        IData/*31:0*/ top__DOT__op;
        IData/*17:0*/ top__DOT__inst_type;
        IData/*17:0*/ top__DOT__u_IDU__DOT__inst_type_pre;
        IData/*31:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res;
        VlWide<5>/*132:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext;
        VlWide<3>/*64:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add;
        QData/*63:0*/ top__DOT__IFU_pc;
        QData/*63:0*/ top__DOT__IDU_pc;
        QData/*63:0*/ top__DOT__IDU_inst;
        QData/*63:0*/ top__DOT__imm;
        QData/*32:0*/ top__DOT__inst_act;
        QData/*63:0*/ top__DOT__axis1_R_DATA;
        QData/*63:0*/ top__DOT__u_IFU__DOT__ifetch_pc;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg;
        QData/*32:0*/ top__DOT__u_IDU__DOT__inst_act_pre;
        QData/*63:0*/ top__DOT__u_IDU__DOT__imm_pre;
        QData/*63:0*/ top__DOT__u_EXU__DOT__src1;
        QData/*63:0*/ top__DOT__u_EXU__DOT__src2;
        QData/*63:0*/ top__DOT__u_EXU__DOT__wb_data;
        QData/*63:0*/ top__DOT__u_EXU__DOT__lsu_wb_data;
        QData/*63:0*/ top__DOT__u_EXU__DOT__csr_wb_data;
        QData/*63:0*/ top__DOT__u_EXU__DOT__csrf_rdata;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1;
        VlWide<5>/*128:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp;
        VlWide<9>/*263:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2;
    };
    struct {
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg;
        QData/*63:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_EXU__DOT__u_gpr__DOT__rf;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__u_EXU__DOT__u_csrf__DOT__csrf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound1;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound2;
    CData/*3:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound3;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound4;
    CData/*1:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound11;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound12;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound13;
    CData/*1:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound14;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound15;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound16;
    CData/*1:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound17;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound18;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound19;
    CData/*1:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound20;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound21;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound22;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound23;
    CData/*0:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound30;
    CData/*5:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    CData/*0:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*30:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound24;
    IData/*30:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound27;
    QData/*33:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound25;
    QData/*32:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound26;
    QData/*33:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound28;
    QData/*32:0*/ top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound29;
    QData/*63:0*/ __Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__28__rdata;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    VlUnpacked<QData/*32:0*/, 132> __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__wallace_tree_34b_to_2b_1_bit_outputs;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
