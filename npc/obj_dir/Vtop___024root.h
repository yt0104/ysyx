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
    VL_OUT8(mainUpdate_valid,0,0);
    VL_OUT64(inst,63,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__IFU_valid;
        CData/*0:0*/ top__DOT__IFU_ready;
        CData/*0:0*/ top__DOT__IDU_valid;
        CData/*0:0*/ top__DOT__IDU_ready;
        CData/*0:0*/ top__DOT__EXU_valid;
        CData/*0:0*/ top__DOT__EXU_ready;
        CData/*6:0*/ top__DOT__flags;
        CData/*0:0*/ top__DOT__axis1_AW_READY;
        CData/*0:0*/ top__DOT__axis1_W_READY;
        CData/*0:0*/ top__DOT__axis1_B_READY;
        CData/*0:0*/ top__DOT__axis1_AR_VALID;
        CData/*0:0*/ top__DOT__axis1_AR_READY;
        CData/*0:0*/ top__DOT__axis1_R_VALID;
        CData/*0:0*/ top__DOT__axis1_R_READY;
        CData/*0:0*/ top__DOT__axis2_AW_VALID;
        CData/*0:0*/ top__DOT__axis2_AW_READY;
        CData/*0:0*/ top__DOT__axis2_W_VALID;
        CData/*0:0*/ top__DOT__axis2_W_READY;
        CData/*0:0*/ top__DOT__axis2_B_READY;
        CData/*0:0*/ top__DOT__axis2_AR_VALID;
        CData/*0:0*/ top__DOT__axis2_AR_READY;
        CData/*0:0*/ top__DOT__axis2_R_VALID;
        CData/*0:0*/ top__DOT__axis2_R_READY;
        CData/*0:0*/ top__DOT__in_channel;
        CData/*0:0*/ top__DOT__itrace_en;
        CData/*0:0*/ top__DOT__main_valid;
        CData/*5:0*/ top__DOT__u_IFU__DOT__pre_cnt;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rask;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rreq;
        CData/*7:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg;
        CData/*0:0*/ top__DOT__u_IDU__DOT__instR_flag;
        CData/*4:0*/ top__DOT__u_EXU__DOT__rd_r;
        CData/*4:0*/ top__DOT__u_EXU__DOT__rs1_r;
        CData/*4:0*/ top__DOT__u_EXU__DOT__rs2_r;
        CData/*6:0*/ top__DOT__u_EXU__DOT__flags_r;
        CData/*4:0*/ top__DOT__u_EXU__DOT__rd;
        CData/*6:0*/ top__DOT__u_EXU__DOT__flags;
        CData/*0:0*/ top__DOT__u_EXU__DOT__exe_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__exe_finish_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__wenR;
        CData/*0:0*/ top__DOT__u_EXU__DOT__mul_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__div_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__mul_out_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__div_out_valid;
        CData/*7:0*/ top__DOT__u_EXU__DOT__wmaskM;
        CData/*0:0*/ top__DOT__u_EXU__DOT__wenM;
        CData/*0:0*/ top__DOT__u_EXU__DOT__renM;
        CData/*0:0*/ top__DOT__u_EXU__DOT__dataM_valid;
        CData/*0:0*/ top__DOT__u_EXU__DOT__wenC;
        CData/*6:0*/ top__DOT__u_EXU__DOT__u_mul__DOT__cnt;
        CData/*5:0*/ top__DOT__u_EXU__DOT__u_div__DOT__count;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_div__DOT__r_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_div__DOT__busy;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_div__DOT__busy_r;
        CData/*7:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg;
    };
    struct {
        CData/*0:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg;
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
        SData/*11:0*/ top__DOT__u_EXU__DOT__instCSR;
        IData/*31:0*/ top__DOT__op;
        IData/*31:0*/ top__DOT__u_EXU__DOT__op_r;
        IData/*31:0*/ top__DOT__u_EXU__DOT__op;
        VlWide<4>/*127:0*/ top__DOT__u_EXU__DOT__u_mul__DOT__result_reg;
        VlWide<3>/*64:0*/ top__DOT__u_EXU__DOT__u_div__DOT__sub_add;
        QData/*63:0*/ top__DOT__IFU_pc;
        QData/*63:0*/ top__DOT__IDU_pc;
        QData/*63:0*/ top__DOT__IFU_inst;
        QData/*63:0*/ top__DOT__IDU_inst;
        QData/*63:0*/ top__DOT__imm;
        QData/*63:0*/ top__DOT__npc;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg;
        QData/*63:0*/ top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__imm_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__pc_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__inst_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__imm;
        QData/*63:0*/ top__DOT__u_EXU__DOT__pc;
        QData/*63:0*/ top__DOT__u_EXU__DOT__inst;
        QData/*63:0*/ top__DOT__u_EXU__DOT__src1;
        QData/*63:0*/ top__DOT__u_EXU__DOT__src2;
        QData/*63:0*/ top__DOT__u_EXU__DOT__temp;
        QData/*63:0*/ top__DOT__u_EXU__DOT__quotient;
        QData/*63:0*/ top__DOT__u_EXU__DOT__remainder;
        QData/*63:0*/ top__DOT__u_EXU__DOT__raddrM;
        QData/*63:0*/ top__DOT__u_EXU__DOT__rdataM;
        QData/*63:0*/ top__DOT__u_EXU__DOT__waddrM;
        QData/*63:0*/ top__DOT__u_EXU__DOT__rCSR;
        QData/*63:0*/ top__DOT__u_EXU__DOT__wCSR1;
        QData/*63:0*/ top__DOT__u_EXU__DOT__wCSR2;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__reg_q;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__reg_r;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__reg_b;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__op_dividend;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__op_divisor;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_div__DOT__reg_r2;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_csr__DOT__mcause;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_csr__DOT__mepc;
        QData/*63:0*/ top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
        QData/*63:0*/ top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_EXU__DOT__u_gpr__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
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
