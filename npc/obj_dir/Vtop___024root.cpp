// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_exit(int state);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP\n"); );
    // Body
    int state__Vcvt;
    for (size_t state__Vidx = 0; state__Vidx < 1; ++state__Vidx) state__Vcvt = state;
    sim_exit(state__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ifetch(long long pc, long long* inst);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__ifetch_TOP(QData/*63:0*/ pc, QData/*63:0*/ &inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__ifetch_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long inst__Vcvt;
    ifetch(pc__Vcvt, &inst__Vcvt);
    inst = inst__Vcvt;
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vdly__top__DOT__u_IFU__DOT__pre_cnt;
    CData/*0:0*/ __Vdly__top__DOT__IDU_valid;
    CData/*0:0*/ __Vdly__top__DOT__IFU_ready;
    CData/*0:0*/ __Vdly__top__DOT__EXU_valid;
    CData/*0:0*/ __Vdly__top__DOT__IDU_ready;
    CData/*0:0*/ __Vdly__top__DOT__EXU_ready;
    CData/*0:0*/ __Vdly__top__DOT__IFU_valid;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*6:0*/ __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt;
    CData/*5:0*/ __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count;
    CData/*0:0*/ __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    QData/*63:0*/ __Vdly__top__DOT__IFU_pc;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mepc;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
    // Body
    __Vdly__top__DOT__u_IFU__DOT__pre_cnt = vlSelf->top__DOT__u_IFU__DOT__pre_cnt;
    __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt = vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt;
    __Vdly__top__DOT__IDU_valid = vlSelf->top__DOT__IDU_valid;
    __Vdly__top__DOT__IFU_ready = vlSelf->top__DOT__IFU_ready;
    __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count 
        = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count;
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
        = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q;
    __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy 
        = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy;
    __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U] 
        = vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U];
    __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U] 
        = vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U];
    __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U] 
        = vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U];
    __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U] 
        = vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U];
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 = 0U;
    __Vdly__top__DOT__IFU_valid = vlSelf->top__DOT__IFU_valid;
    __Vdly__top__DOT__IDU_ready = vlSelf->top__DOT__IDU_ready;
    __Vdly__top__DOT__IFU_pc = vlSelf->top__DOT__IFU_pc;
    __Vdly__top__DOT__EXU_valid = vlSelf->top__DOT__EXU_valid;
    __Vdly__top__DOT__EXU_ready = vlSelf->top__DOT__EXU_ready;
    __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mepc 
        = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc;
    __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec 
        = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
    __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus 
        = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
    __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause 
        = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause;
    if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
        if ((0x3fU == vlSelf->top__DOT__u_EXU__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(0U);
        } else if ((0U == vlSelf->top__DOT__u_EXU__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(1U);
        }
    }
    if (vlSelf->top__DOT__main_valid) {
        vlSelf->top__DOT__itrace_en = 1U;
    }
    if (vlSelf->rst_n) {
        if ((0xaU > (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt))) {
            __Vdly__top__DOT__u_IFU__DOT__pre_cnt = 
                (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt)));
        }
    } else {
        __Vdly__top__DOT__u_IFU__DOT__pre_cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__mul_valid) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)))) {
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)));
        } else if ((0x40U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt))) {
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt = 0U;
        } else if ((0U != (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt))) {
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)));
        }
    } else {
        __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_ready) & (IData)(vlSelf->top__DOT__IDU_valid))) {
            __Vdly__top__DOT__IDU_valid = 0U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rask) {
            __Vdly__top__DOT__IDU_valid = 1U;
        }
    } else {
        __Vdly__top__DOT__IDU_valid = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__mul_out_valid = ((IData)(vlSelf->rst_n) 
                                                   & (0x40U 
                                                      == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_valid) & (IData)(vlSelf->top__DOT__IDU_ready))) {
            __Vdly__top__DOT__IFU_ready = 1U;
        } else if (((IData)(vlSelf->top__DOT__IFU_valid) 
                    & (IData)(vlSelf->top__DOT__IFU_ready))) {
            __Vdly__top__DOT__IFU_ready = 0U;
        }
    } else {
        __Vdly__top__DOT__IFU_ready = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r 
        = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy;
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__div_valid) {
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign 
                = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div) 
                   & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
                              >> 0x3fU)));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__div_valid) {
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign 
                = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div) 
                   & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
                              >> 0x3fU)));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__div_valid) {
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b 
                = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                    ? ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
                                      >> 0x3fU))) ? 
                       (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor))
                        : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor)
                    : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor);
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID) 
               & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID)) 
              & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 1U;
        } else if (((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY) 
                    & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 0U;
        }
    } else {
        __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 0U;
    }
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = ((IData)(vlSelf->rst_n) & ((~ ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY))) 
                                     & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID))));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__div_valid) {
            __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                    ? ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
                                      >> 0x3fU))) ? 
                       (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend))
                        : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend)
                    : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend);
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r = 0ULL;
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy = 1U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy) {
            __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                = ((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                    << 1U) | (QData)((IData)((1U & 
                                              (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U])))));
            __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count)));
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                = (((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U])));
            vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign 
                = (1U & vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U]);
            if ((0x3fU == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count))) {
                __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count = 0U;
        __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r = 0ULL;
        __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
    }
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = ((IData)(vlSelf->rst_n) & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
                                      & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY)));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY 
        = ((IData)(vlSelf->rst_n) & ((~ ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY))) 
                                     & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY)) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID))));
    if (vlSelf->rst_n) {
        if (((0U < (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)) 
             & (0x40U >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)))) {
            if ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r 
                               >> (0x3fU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt) 
                                            - (IData)(1U))))))) {
                VL_EXTEND_WQ(128,64, __Vtemp4, vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r);
                VL_SHIFTL_WWI(128,128,32, __Vtemp5, __Vtemp4, 
                              ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt) 
                               - (IData)(1U)));
                VL_ADD_W(4, __Vtemp6, vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg, __Vtemp5);
                __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U] 
                    = __Vtemp6[0U];
                __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U] 
                    = __Vtemp6[1U];
                __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U] 
                    = __Vtemp6[2U];
                __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U] 
                    = __Vtemp6[3U];
            }
        } else {
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U] = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U] = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U] = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U] = 0U;
        }
    } else {
        __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U] = 0U;
        __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U] = 0U;
        __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U] = 0U;
        __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY) 
             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 0U;
        } else if ((((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID)) 
                    & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 1U;
        }
    } else {
        __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 0U;
    }
    vlSelf->top__DOT__axis2_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis2_B_READY)) 
                                          & ((IData)(vlSelf->top__DOT__in_channel) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    vlSelf->top__DOT__axis1_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis1_B_READY)) 
                                          & ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis1_AR_VALID) 
             & (IData)(vlSelf->top__DOT__axis1_AR_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = vlSelf->top__DOT__IFU_pc;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg) 
             & (IData)(vlSelf->top__DOT__axis1_R_VALID))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AR_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_W_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__wenM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg 
                = vlSelf->top__DOT__u_EXU__DOT__wmaskM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_W_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_EXU__DOT__wenM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg 
                = vlSelf->top__DOT__u_EXU__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__wenM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg) 
             & (IData)(vlSelf->top__DOT__axis2_R_VALID))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__renM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_AW_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_EXU__DOT__wenM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg 
                = vlSelf->top__DOT__u_EXU__DOT__waddrM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_AR_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_AR_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_EXU__DOT__renM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = vlSelf->top__DOT__u_EXU__DOT__raddrM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis2_AW_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__wenM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis2_AR_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__renM) {
            vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__wenR) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                : vlSelf->top__DOT__u_EXU__DOT__temp);
        __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__rd;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IFU_ready) & (IData)(vlSelf->top__DOT__IFU_valid))) {
            __Vdly__top__DOT__IFU_valid = 0U;
        } else if (((IData)(vlSelf->top__DOT__EXU_valid) 
                    & (IData)(vlSelf->top__DOT__EXU_ready))) {
            __Vdly__top__DOT__IFU_valid = 1U;
        }
    } else {
        __Vdly__top__DOT__IFU_valid = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            __Vdly__top__DOT__IDU_ready = 1U;
        } else if (((IData)(vlSelf->top__DOT__IDU_valid) 
                    & (IData)(vlSelf->top__DOT__IDU_ready))) {
            __Vdly__top__DOT__IDU_ready = 0U;
        }
    } else {
        __Vdly__top__DOT__IDU_ready = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__pc_r = vlSelf->top__DOT__IDU_pc;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__pc_r = 0ULL;
    }
    __Vdly__top__DOT__IFU_pc = ((IData)(vlSelf->rst_n)
                                 ? (((IData)(vlSelf->top__DOT__IFU_valid) 
                                     & (IData)(vlSelf->top__DOT__IFU_ready))
                                     ? vlSelf->top__DOT__npc
                                     : vlSelf->top__DOT__IFU_pc)
                                 : 0x80000000ULL);
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__op_r = vlSelf->top__DOT__op;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__op_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__imm_r = vlSelf->top__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__imm_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_ready) & (IData)(vlSelf->top__DOT__EXU_valid))) {
            __Vdly__top__DOT__EXU_valid = 0U;
        } else if (((IData)(vlSelf->top__DOT__IDU_valid) 
                    & (IData)(vlSelf->top__DOT__IDU_ready))) {
            __Vdly__top__DOT__EXU_valid = 1U;
        }
    } else {
        __Vdly__top__DOT__EXU_valid = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid) {
            __Vdly__top__DOT__EXU_ready = 1U;
        } else if (((IData)(vlSelf->top__DOT__EXU_valid) 
                    & (IData)(vlSelf->top__DOT__EXU_ready))) {
            __Vdly__top__DOT__EXU_ready = 0U;
        }
    } else {
        __Vdly__top__DOT__EXU_ready = 1U;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__wenC) {
        if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            if ((0x342U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                if ((0x300U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                    if ((0x305U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                        __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mepc 
                            = ((0x341U == (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                ? vlSelf->top__DOT__u_EXU__DOT__wCSR1
                                : vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc);
                    }
                }
            }
        } else {
            __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mepc 
                = ((1U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                    ? vlSelf->top__DOT__u_EXU__DOT__wCSR1
                    : vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc);
        }
    }
    if (vlSelf->top__DOT__u_EXU__DOT__wenC) {
        if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            if ((0x342U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                if ((0x300U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                    if ((0x305U == (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                        __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec 
                            = vlSelf->top__DOT__u_EXU__DOT__wCSR1;
                    } else if ((0x341U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                        __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec 
                            = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
                    }
                }
            }
        } else if ((1U != (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec 
                = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
        }
    }
    if (vlSelf->top__DOT__u_EXU__DOT__wenC) {
        if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            if ((0x342U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                if ((0x300U == (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                    __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus 
                        = vlSelf->top__DOT__u_EXU__DOT__wCSR1;
                } else if ((0x305U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                        __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus 
                            = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
                    }
                }
            }
        } else if ((1U != (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus 
                = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__flags_r = vlSelf->top__DOT__flags;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__flags_r = 0U;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__wenC) {
        if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))) {
            if ((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause 
                    = vlSelf->top__DOT__u_EXU__DOT__wCSR1;
            } else if ((0x300U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                if ((0x305U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))) {
                        __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause 
                            = vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause;
                    }
                }
            }
        } else {
            __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause 
                = ((1U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                    ? vlSelf->top__DOT__u_EXU__DOT__wCSR2
                    : vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause);
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__rd_r = (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 7U)));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__inst_r = vlSelf->top__DOT__IDU_inst;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__inst_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__rs2_r = (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__IDU_inst 
                                                              >> 0x14U)));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rs2_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__u_EXU__DOT__rs1_r = (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__IDU_inst 
                                                              >> 0xfU)));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rs1_r = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count 
        = __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__count;
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
        = __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__reg_q;
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy 
        = __Vdly__top__DOT__u_EXU__DOT__u_div__DOT__busy;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    if (__Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc 
        = __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mepc;
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec 
        = __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mtvec;
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus 
        = __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mstatus;
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause 
        = __Vdly__top__DOT__u_EXU__DOT__u_csr__DOT__mcause;
    __Vtemp10[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp10[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp10[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp12, __Vtemp10, __Vtemp11);
    __Vtemp13[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp13[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp13[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp14, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    if (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp12[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp12[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp12[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp15[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp15[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp15[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = (
                                                   (~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy)) 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__mul_valid) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)))) {
            vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r 
                = vlSelf->top__DOT__u_EXU__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__mul_valid) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt)))) {
            vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r 
                = vlSelf->top__DOT__u_EXU__DOT__src1;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IFU_valid) & (IData)(vlSelf->top__DOT__IFU_ready))) {
            vlSelf->top__DOT__u_IFU__DOT__rreq = 1U;
        } else if ((9U == (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt))) {
            vlSelf->top__DOT__u_IFU__DOT__rreq = 1U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rask) {
            vlSelf->top__DOT__u_IFU__DOT__rreq = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__rreq = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__wenR = ((IData)(vlSelf->rst_n) 
                                          & ((IData)(vlSelf->top__DOT__u_EXU__DOT__exe_valid) 
                                             & (((((((((1U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                       | (2U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (3U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (4U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (5U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                   | (6U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                  | (7U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                 | (8U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                | (((((((((9U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | (0xaU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0xbU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0xcU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0xdU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0xeU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0xfU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0x10U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                   | (((((((((0x11U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                             | (0x12U 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x13U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x14U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x15U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x16U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x17U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x18U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (((((((((0x19U 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                | (0x1aU 
                                                                   == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                               | (0x1bU 
                                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                              | (0x1cU 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                             | (0x1dU 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x1eU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x1fU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x20U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op))
                                                          ? 
                                                         ((0x19U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | ((0x1aU 
                                                              != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                             & ((0x1bU 
                                                                 != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                & ((0x1cU 
                                                                    != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                   & (0x1dU 
                                                                      != vlSelf->top__DOT__u_EXU__DOT__op)))))
                                                          : 
                                                         (((((((((0x21U 
                                                                  == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                 | (0x22U 
                                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                | (0x23U 
                                                                   == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                               | (0x24U 
                                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                              | (0x25U 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                             | (0x26U 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x27U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x28U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (((((((((0x29U 
                                                                     == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                    | (0x2aU 
                                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                   | (0x2bU 
                                                                      == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                  | (0x2cU 
                                                                     == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                 | (0x2dU 
                                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                | (0x2eU 
                                                                   == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                               | (0x2fU 
                                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                              | (0x30U 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                             | (((((((((0x31U 
                                                                        == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                       | (0x32U 
                                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                      | (0x33U 
                                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                     | (0x34U 
                                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                    | (0x36U 
                                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                   | (0x35U 
                                                                      == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                  | (0x37U 
                                                                     == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                 | (0x38U 
                                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                                & ((0x31U 
                                                                    == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                   | ((0x32U 
                                                                       == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                      | ((0x33U 
                                                                          == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                         | ((0x34U 
                                                                             == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                            | ((0x36U 
                                                                                == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                                               | (0x35U 
                                                                                == vlSelf->top__DOT__u_EXU__DOT__op)))))))))))))));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__exe_valid) {
            vlSelf->top__DOT__u_EXU__DOT__temp = ((
                                                   (((((((1U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         | (2U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (3U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (4U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (5U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (6U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (7U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                   | (8U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op))
                                                   ? 
                                                  ((1U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                    : 
                                                   ((2U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__u_EXU__DOT__pc)
                                                     : 
                                                    ((3U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__u_EXU__DOT__pc)
                                                      : 
                                                     ((4U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM))))
                                                       : 
                                                      ((5U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM))))
                                                        : 
                                                       ((6U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM))
                                                         : 
                                                        ((7U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? vlSelf->top__DOT__u_EXU__DOT__rdataM
                                                          : 
                                                         (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__rdataM 
                                                                                >> 0x1fU))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM))))))))))
                                                   : 
                                                  (((((((((9U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | (0xaU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0xbU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0xcU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0xdU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0xeU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0xfU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0x10U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op))
                                                    ? 
                                                   ((9U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__rdataM 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM)))))
                                                     : 
                                                    ((0xaU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__rdataM 
                                                                                >> 7U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdataM)))))
                                                      : 
                                                     ((0xbU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__imm)
                                                       : 
                                                      ((0xcU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 
                                                       VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__imm)
                                                        : 
                                                       ((0xdU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? 
                                                        ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                          < vlSelf->top__DOT__u_EXU__DOT__imm)
                                                          ? 1ULL
                                                          : 0ULL)
                                                         : 
                                                        ((0xeU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? 
                                                         (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                          ^ vlSelf->top__DOT__u_EXU__DOT__imm)
                                                          : 
                                                         ((0xfU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? 
                                                          VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                           : 
                                                          (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           & vlSelf->top__DOT__u_EXU__DOT__imm))))))))
                                                    : 
                                                   (((((((((0x11U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                           | (0x12U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x13U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x14U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x15U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x16U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x17U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0x18U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op))
                                                     ? 
                                                    ((0x11U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                      + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                      : 
                                                     ((0x12U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__imm)
                                                       : 
                                                      ((0x13U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (QData)((IData)(
                                                                          VL_SHIFTR_IIQ(32,32,64, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                        : 
                                                       ((0x14U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? 
                                                        VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                         : 
                                                        ((0x15U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? 
                                                         (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                          | vlSelf->top__DOT__u_EXU__DOT__imm)
                                                          : 
                                                         ((0x16U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? vlSelf->top__DOT__u_EXU__DOT__rCSR
                                                           : 
                                                          ((0x17U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)
                                                            ? vlSelf->top__DOT__u_EXU__DOT__rCSR
                                                            : 
                                                           (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                            + vlSelf->top__DOT__u_EXU__DOT__imm))))))))
                                                     : 
                                                    (((((((((0x19U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                            | (0x1aU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x1bU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x1cU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x1dU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x1eU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x1fU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x20U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op))
                                                      ? 
                                                     ((0x19U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__imm 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__imm 
                                                                                >> 0xcU)) 
                                                                          << 0xcU))))
                                                       : 
                                                      ((0x1aU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 0ULL
                                                        : 
                                                       ((0x1bU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? 0ULL
                                                         : 
                                                        ((0x1cU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? 0ULL
                                                          : 
                                                         ((0x1dU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? 0ULL
                                                           : 
                                                          ((0x1eU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->top__DOT__u_EXU__DOT__pc)
                                                            : 
                                                           ((0x1fU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)
                                                             ? 
                                                            (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                             + vlSelf->top__DOT__u_EXU__DOT__src2)
                                                             : 
                                                            ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                              < vlSelf->top__DOT__u_EXU__DOT__src2)
                                                              ? 1ULL
                                                              : 0ULL))))))))
                                                      : 
                                                     (((((((((0x21U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                             | (0x22U 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x23U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x24U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x25U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x26U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x27U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x28U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op))
                                                       ? 
                                                      ((0x21U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 
                                                       (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                        & vlSelf->top__DOT__u_EXU__DOT__src2)
                                                        : 
                                                       ((0x22U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? 
                                                        (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                         | vlSelf->top__DOT__u_EXU__DOT__src2)
                                                         : 
                                                        ((0x23U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? 
                                                         (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                          ^ vlSelf->top__DOT__u_EXU__DOT__src2)
                                                          : 
                                                         ((0x24U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? 
                                                          (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           - vlSelf->top__DOT__u_EXU__DOT__src2)
                                                           : 
                                                          ((0x25U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))
                                                            : 
                                                           ((0x26U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)
                                                             ? 
                                                            (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                              ? 1ULL
                                                              : 0ULL)
                                                             : 
                                                            ((0x27U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                                              ? 
                                                             (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                              + vlSelf->top__DOT__u_EXU__DOT__src2)
                                                              : 
                                                             (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                              << 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2))))))))))
                                                       : 
                                                      (((((((((0x29U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                              | (0x2aU 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                             | (0x2bU 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x2cU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x2dU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x2eU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x2fU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x30U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op))
                                                        ? 
                                                       ((0x29U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (QData)((IData)(
                                                                           ((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))))
                                                         : 
                                                        ((0x2aU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? (QData)((IData)(
                                                                            VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))))
                                                          : 
                                                         ((0x2bU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))
                                                           : 
                                                          ((0x2cU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)
                                                            ? 
                                                           (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                            - vlSelf->top__DOT__u_EXU__DOT__src2)
                                                            : 
                                                           ((0x2dU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)
                                                             ? vlSelf->top__DOT__u_EXU__DOT__quotient
                                                             : 
                                                            ((0x2eU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                                              ? vlSelf->top__DOT__u_EXU__DOT__remainder
                                                              : 
                                                             ((0x2fU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                                               ? vlSelf->top__DOT__u_EXU__DOT__quotient
                                                               : vlSelf->top__DOT__u_EXU__DOT__remainder)))))))
                                                        : 
                                                       (((((((((0x31U 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                               | (0x32U 
                                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                              | (0x33U 
                                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                             | (0x34U 
                                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                            | (0x36U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x35U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x37U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x38U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op))
                                                         ? 
                                                        ((0x31U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? vlSelf->top__DOT__u_EXU__DOT__quotient
                                                          : 
                                                         ((0x32U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)
                                                           ? vlSelf->top__DOT__u_EXU__DOT__remainder
                                                           : 
                                                          ((0x33U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)
                                                            ? 
                                                           VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                            : 
                                                           ((0x34U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)
                                                             ? 
                                                            VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                             : 
                                                            ((0x36U 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                                              ? vlSelf->top__DOT__u_EXU__DOT__quotient
                                                              : 
                                                             ((0x35U 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                                               ? vlSelf->top__DOT__u_EXU__DOT__remainder
                                                               : 0ULL))))))
                                                         : 0ULL)))))));
            if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__rd))) {
                vlSelf->top__DOT__u_EXU__DOT__temp = 0ULL;
            }
        } else {
            vlSelf->top__DOT__u_EXU__DOT__temp = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__temp = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_valid) & (IData)(vlSelf->top__DOT__IDU_ready))) {
            vlSelf->top__DOT__IDU_pc = vlSelf->top__DOT__IFU_pc;
        }
    } else {
        vlSelf->top__DOT__IDU_pc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
            vlSelf->top__DOT__npc = (((((((((2U == vlSelf->top__DOT__u_EXU__DOT__op) 
                                            | (3U == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                           | (0x1eU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                          | (0x37U 
                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                         | (0x38U == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                        | (0x39U == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                       | (0x3aU == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                      | (0x3bU == vlSelf->top__DOT__u_EXU__DOT__op))
                                      ? ((2U == vlSelf->top__DOT__u_EXU__DOT__op)
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                + vlSelf->top__DOT__u_EXU__DOT__imm))
                                          : ((3U == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? (0xfffffffffffffffeULL 
                                                 & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__u_EXU__DOT__imm))
                                              : ((0x1eU 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op)
                                                  ? 
                                                 (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                  + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                  : 
                                                 ((0x37U 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? 
                                                  ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    == vlSelf->top__DOT__u_EXU__DOT__src2)
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                    + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__u_EXU__DOT__pc))
                                                   : 
                                                  ((0x38U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     != vlSelf->top__DOT__u_EXU__DOT__src2)
                                                     ? 
                                                    (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                     + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__u_EXU__DOT__pc))
                                                    : 
                                                   ((0x39U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                      ? 
                                                     (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                      + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__u_EXU__DOT__pc))
                                                     : 
                                                    ((0x3aU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                       ? 
                                                      (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                       + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__u_EXU__DOT__pc))
                                                      : 
                                                     ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                       < vlSelf->top__DOT__u_EXU__DOT__src2)
                                                       ? 
                                                      (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                       + vlSelf->top__DOT__u_EXU__DOT__imm)
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->top__DOT__u_EXU__DOT__pc)))))))))
                                      : ((0x3cU == vlSelf->top__DOT__u_EXU__DOT__op)
                                          ? ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                              >= vlSelf->top__DOT__u_EXU__DOT__src2)
                                              ? (vlSelf->top__DOT__u_EXU__DOT__pc 
                                                 + vlSelf->top__DOT__u_EXU__DOT__imm)
                                              : (4ULL 
                                                 + vlSelf->top__DOT__u_EXU__DOT__pc))
                                          : ((0x3dU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? vlSelf->top__DOT__u_EXU__DOT__rCSR
                                              : ((0x3eU 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__rCSR
                                                  : 
                                                 ((0x3fU 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? vlSelf->top__DOT__u_EXU__DOT__pc
                                                   : 
                                                  ((0U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? vlSelf->top__DOT__u_EXU__DOT__pc
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__u_EXU__DOT__pc)))))));
        }
    } else {
        vlSelf->top__DOT__npc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_valid) & (IData)(vlSelf->top__DOT__IDU_ready))) {
            vlSelf->top__DOT__op = (((((((((0x13ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__IFU_inst)) 
                                           | (0x67ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                          | (0x2067ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))) 
                                         | (0x4003ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__IFU_inst))) 
                                        | (0x5003ULL 
                                           == (0x707fULL 
                                               & vlSelf->top__DOT__IFU_inst))) 
                                       | (0x6003ULL 
                                          == (0x707fULL 
                                              & vlSelf->top__DOT__IFU_inst))) 
                                      | (0x3003ULL 
                                         == (0x707fULL 
                                             & vlSelf->top__DOT__IFU_inst))) 
                                     | (0x2003ULL == 
                                        (0x707fULL 
                                         & vlSelf->top__DOT__IFU_inst)))
                                     ? ((0x13ULL == 
                                         (0x707fULL 
                                          & vlSelf->top__DOT__IFU_inst))
                                         ? 1U : ((0x67ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 2U
                                                  : 
                                                 ((0x2067ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x4003ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x5003ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x6003ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x3003ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 7U
                                                       : 8U)))))))
                                     : (((((((((0x1003ULL 
                                                == 
                                                (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst)) 
                                               | (3ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                              | (0x1013ULL 
                                                 == 
                                                 (0xfc00707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                             | (0x5013ULL 
                                                == 
                                                (0xfc00707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))) 
                                            | (0x3013ULL 
                                               == (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                           | (0x4013ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                          | (0x40005013ULL 
                                             == (0xfc00707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))) 
                                         | (0x7013ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__IFU_inst)))
                                         ? ((0x1003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))
                                             ? 9U : 
                                            ((3ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))
                                              ? 0xaU
                                              : ((0x1013ULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 0xbU
                                                  : 
                                                 ((0x5013ULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 0xcU
                                                   : 
                                                  ((0x3013ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 0xdU
                                                    : 
                                                   ((0x4013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x40005013ULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0xfU
                                                      : 0x10U)))))))
                                         : ((((((((
                                                   (0x1bULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst)) 
                                                   | (0x101bULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x501bULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))) 
                                                 | (0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))) 
                                                | (0x6013ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))) 
                                               | (0x1073ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                              | (0x2073ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                             | (0x17ULL 
                                                == 
                                                (0x7fULL 
                                                 & vlSelf->top__DOT__IFU_inst)))
                                             ? ((0x1bULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))
                                                 ? 0x11U
                                                 : 
                                                ((0x101bULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 0x12U
                                                  : 
                                                 ((0x501bULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 0x13U
                                                   : 
                                                  ((0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 0x14U
                                                    : 
                                                   ((0x6013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x15U
                                                     : 
                                                    ((0x1073ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x16U
                                                      : 
                                                     ((0x2073ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x17U
                                                       : 0x18U)))))))
                                             : ((((
                                                   (((((0x37ULL 
                                                        == 
                                                        (0x7fULL 
                                                         & vlSelf->top__DOT__IFU_inst)) 
                                                       | (0x3023ULL 
                                                          == 
                                                          (0x707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x2023ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x1023ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x23ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x6fULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x33ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))) 
                                                 | (0x3033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst)))
                                                 ? 
                                                ((0x37ULL 
                                                  == 
                                                  (0x7fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 0x19U
                                                  : 
                                                 ((0x3023ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 0x1aU
                                                   : 
                                                  ((0x2023ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 0x1bU
                                                    : 
                                                   ((0x1023ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x1cU
                                                     : 
                                                    ((0x23ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x1dU
                                                      : 
                                                     ((0x6fULL 
                                                       == 
                                                       (0x7fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x1eU
                                                       : 
                                                      ((0x33ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0x1fU
                                                        : 0x20U)))))))
                                                 : 
                                                (((((((((0x7033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst)) 
                                                        | (0x6033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x4033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x40000033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x2000033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x2033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x3bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x103bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst)))
                                                  ? 
                                                 ((0x7033ULL 
                                                   == 
                                                   (0xfe00707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 0x21U
                                                   : 
                                                  ((0x6033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 0x22U
                                                    : 
                                                   ((0x4033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x23U
                                                     : 
                                                    ((0x40000033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x24U
                                                      : 
                                                     ((0x2000033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x25U
                                                       : 
                                                      ((0x2033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0x26U
                                                        : 
                                                       ((0x3bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 0x27U
                                                         : 0x28U)))))))
                                                  : 
                                                 (((((((((0x503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst)) 
                                                         | (0x4000503bULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))) 
                                                        | (0x200003bULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x4000003bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x200403bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x200603bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x200503bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x200703bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst)))
                                                   ? 
                                                  ((0x503bULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 0x29U
                                                    : 
                                                   ((0x4000503bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x2aU
                                                     : 
                                                    ((0x200003bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x2bU
                                                      : 
                                                     ((0x4000003bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x2cU
                                                       : 
                                                      ((0x200403bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0x2dU
                                                        : 
                                                       ((0x200603bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 0x2eU
                                                         : 
                                                        ((0x200503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))
                                                          ? 0x2fU
                                                          : 0x30U)))))))
                                                   : 
                                                  (((((((((0x2005033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst)) 
                                                          | (0x2007033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->top__DOT__IFU_inst))) 
                                                         | (0x2006033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))) 
                                                        | (0x2004033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x1033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x5033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x63ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x1063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst)))
                                                    ? 
                                                   ((0x2005033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x31U
                                                     : 
                                                    ((0x2007033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x32U
                                                      : 
                                                     ((0x2006033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x35U
                                                       : 
                                                      ((0x2004033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0x36U
                                                        : 
                                                       ((0x1033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 0x33U
                                                         : 
                                                        ((0x5033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))
                                                          ? 0x34U
                                                          : 
                                                         ((0x63ULL 
                                                           == 
                                                           (0x707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))
                                                           ? 0x37U
                                                           : 0x38U)))))))
                                                    : 
                                                   ((0x5063ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 0x39U
                                                     : 
                                                    ((0x4063ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0x3aU
                                                      : 
                                                     ((0x6063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0x3bU
                                                       : 
                                                      ((0x7063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0x3cU
                                                        : 
                                                       ((0x30200073ULL 
                                                         == 
                                                         (0xffffffffULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 0x3dU
                                                         : 
                                                        ((0x73ULL 
                                                          == 
                                                          (0xffffffffULL 
                                                           & vlSelf->top__DOT__IFU_inst))
                                                          ? 0x3eU
                                                          : 
                                                         ((0x100073ULL 
                                                           == 
                                                           (0xffffffffULL 
                                                            & vlSelf->top__DOT__IFU_inst))
                                                           ? 0x3fU
                                                           : 0U))))))))))))));
        }
    } else {
        vlSelf->top__DOT__op = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_valid) & (IData)(vlSelf->top__DOT__IDU_ready))) {
            vlSelf->top__DOT__imm = (((((((((0x13ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst)) 
                                            | (0x67ULL 
                                               == (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                           | (0x2067ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                          | (0x4003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))) 
                                         | (0x5003ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__IFU_inst))) 
                                        | (0x6003ULL 
                                           == (0x707fULL 
                                               & vlSelf->top__DOT__IFU_inst))) 
                                       | (0x3003ULL 
                                          == (0x707fULL 
                                              & vlSelf->top__DOT__IFU_inst))) 
                                      | (0x2003ULL 
                                         == (0x707fULL 
                                             & vlSelf->top__DOT__IFU_inst)))
                                      ? ((0x13ULL == 
                                          (0x707fULL 
                                           & vlSelf->top__DOT__IFU_inst))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__IFU_inst 
                                                                             >> 0x1fU)))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__IFU_inst 
                                                                           >> 0x14U))))))
                                          : ((0x67ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__IFU_inst 
                                                                               >> 0x14U))))))
                                              : ((0x2067ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                  : 
                                                 ((0x4003ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                   : 
                                                  ((0x5003ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                    : 
                                                   ((0x6003ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                     : 
                                                    ((0x3003ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U)))))))))))))
                                      : (((((((((0x1003ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst)) 
                                                | (3ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))) 
                                               | (0x1013ULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                              | (0x5013ULL 
                                                 == 
                                                 (0xfc00707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                             | (0x3013ULL 
                                                == 
                                                (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst))) 
                                            | (0x4013ULL 
                                               == (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                           | (0x40005013ULL 
                                              == (0xfc00707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))) 
                                          | (0x7013ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__IFU_inst)))
                                          ? ((0x1003ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__IFU_inst 
                                                                               >> 0x14U))))))
                                              : ((3ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                  : 
                                                 ((0x1013ULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                   : 
                                                  ((0x5013ULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                    : 
                                                   ((0x3013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                     : 
                                                    ((0x4013ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                      : 
                                                     ((0x40005013ULL 
                                                       == 
                                                       (0xfc00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U)))))))))))))
                                          : (((((((
                                                   ((0x1bULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst)) 
                                                    | (0x101bULL 
                                                       == 
                                                       (0xfc00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x501bULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x4000501bULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))) 
                                                 | (0x6013ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))) 
                                                | (0x1073ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))) 
                                               | (0x2073ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                              | (0x17ULL 
                                                 == 
                                                 (0x7fULL 
                                                  & vlSelf->top__DOT__IFU_inst)))
                                              ? ((0x1bULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                  : 
                                                 ((0x101bULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                   : 
                                                  ((0x501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                    : 
                                                   ((0x4000501bULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                     : 
                                                    ((0x6013ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                      : 
                                                     ((0x1073ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                       : 
                                                      ((0x2073ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U))))))
                                                        : 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)))))))))))
                                              : (((
                                                   ((((((0x37ULL 
                                                         == 
                                                         (0x7fULL 
                                                          & vlSelf->top__DOT__IFU_inst)) 
                                                        | (0x3023ULL 
                                                           == 
                                                           (0x707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x2023ULL 
                                                          == 
                                                          (0x707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x1023ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x23ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x6fULL 
                                                       == 
                                                       (0x7fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x33ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x3033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__IFU_inst)))
                                                  ? 
                                                 ((0x37ULL 
                                                   == 
                                                   (0x7fULL 
                                                    & vlSelf->top__DOT__IFU_inst))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(
                                                                              (vlSelf->top__DOT__IFU_inst 
                                                                               >> 0xcU)) 
                                                                      << 0xcU))))
                                                   : 
                                                  ((0x3023ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)))))))
                                                    : 
                                                   ((0x2023ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0xfe0U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                            << 5U)) 
                                                                        | (0x1fU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)))))))
                                                     : 
                                                    ((0x1023ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                             << 5U)) 
                                                                         | (0x1fU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)))))))
                                                      : 
                                                     ((0x23ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)))))))
                                                       : 
                                                      ((0x6fULL 
                                                        == 
                                                        (0x7fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                         << 0x14U) 
                                                        | (QData)((IData)(
                                                                          ((0xff000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0xcU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                              | (0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                        : 0ULL))))))
                                                  : 
                                                 (((((((((0x7033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst)) 
                                                         | (0x6033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))) 
                                                        | (0x4033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x40000033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x2000033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x2033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x3bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x103bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst)))
                                                   ? 0ULL
                                                   : 
                                                  (((((((((0x503bULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst)) 
                                                          | (0x4000503bULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->top__DOT__IFU_inst))) 
                                                         | (0x200003bULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))) 
                                                        | (0x4000003bULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x200403bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x200603bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x200503bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))) 
                                                    | (0x200703bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst)))
                                                    ? 0ULL
                                                    : 
                                                   (((((((((0x2005033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst)) 
                                                           | (0x2007033ULL 
                                                              == 
                                                              (0xfe00707fULL 
                                                               & vlSelf->top__DOT__IFU_inst))) 
                                                          | (0x2006033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->top__DOT__IFU_inst))) 
                                                         | (0x2004033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))) 
                                                        | (0x1033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x5033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x63ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))) 
                                                     | (0x1063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst)))
                                                     ? 
                                                    ((0x2005033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 0ULL
                                                      : 
                                                     ((0x2007033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 0ULL
                                                       : 
                                                      ((0x2006033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 0ULL
                                                        : 
                                                       ((0x2004033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 0ULL
                                                         : 
                                                        ((0x1033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__IFU_inst))
                                                          ? 0ULL
                                                          : 
                                                         ((0x5033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__IFU_inst))
                                                           ? 0ULL
                                                           : 
                                                          ((0x63ULL 
                                                            == 
                                                            (0x707fULL 
                                                             & vlSelf->top__DOT__IFU_inst))
                                                            ? 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                               | ((0x7e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                                | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                            : 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                               | ((0x7e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                                | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U))))))))))))))
                                                     : 
                                                    ((0x5063ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__IFU_inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                             << 0xbU)) 
                                                                         | ((0x7e0U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                            | (0x1eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                      : 
                                                     ((0x4063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0x800U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                              << 0xbU)) 
                                                                          | ((0x7e0U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                             | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                       : 
                                                      ((0x6063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__IFU_inst))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                               << 0xbU)) 
                                                                           | ((0x7e0U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                              | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                        : 
                                                       ((0x7063ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & vlSelf->top__DOT__IFU_inst))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                            | ((0x7e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                               | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                         : 0ULL)))))))))));
        }
    } else {
        vlSelf->top__DOT__imm = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->top__DOT__u_EXU__DOT__exe_valid));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__u_EXU__DOT__wCSR2 = (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                & (IData)(vlSelf->top__DOT__EXU_ready))
                                                ? (
                                                   (0x16U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 0ULL
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 0ULL
                                                     : 
                                                    ((0x3dU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 0ULL
                                                      : 
                                                     ((0x3eU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 0xbULL
                                                       : 0ULL))))
                                                : 0ULL);
        vlSelf->top__DOT__u_EXU__DOT__wenC = ((((IData)(vlSelf->top__DOT__EXU_valid) 
                                                & (IData)(vlSelf->top__DOT__EXU_ready)) 
                                               & ((0x16U 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                  | ((0x17U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                     | ((0x3dU 
                                                         != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                        & (0x3eU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op))))) 
                                              & 1U);
        vlSelf->top__DOT__u_EXU__DOT__wCSR1 = (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                & (IData)(vlSelf->top__DOT__EXU_ready))
                                                ? (
                                                   (0x16U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     | vlSelf->top__DOT__u_EXU__DOT__rCSR)
                                                     : 
                                                    ((0x3dU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 0ULL
                                                      : 
                                                     ((0x3eU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? vlSelf->top__DOT__u_EXU__DOT__pc
                                                       : 0ULL))))
                                                : 0ULL);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__wCSR2 = 0ULL;
        vlSelf->top__DOT__u_EXU__DOT__wenC = 0U;
        vlSelf->top__DOT__u_EXU__DOT__wCSR1 = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__IDU_valid) & (IData)(vlSelf->top__DOT__IDU_ready))) {
            vlSelf->top__DOT__IDU_inst = vlSelf->top__DOT__IFU_inst;
        }
    } else {
        vlSelf->top__DOT__IDU_inst = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt = __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__cnt;
    vlSelf->top__DOT__u_IFU__DOT__pre_cnt = __Vdly__top__DOT__u_IFU__DOT__pre_cnt;
    vlSelf->top__DOT__IFU_valid = __Vdly__top__DOT__IFU_valid;
    vlSelf->top__DOT__IFU_ready = __Vdly__top__DOT__IFU_ready;
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U] 
        = __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U];
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U] 
        = __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U];
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U] 
        = __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U];
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U] 
        = __Vdly__top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U];
    vlSelf->top__DOT__u_EXU__DOT__remainder = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                                : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2);
    vlSelf->top__DOT__u_EXU__DOT__quotient = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                               ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                               : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q);
    vlSelf->top__DOT__IFU_pc = __Vdly__top__DOT__IFU_pc;
    vlSelf->top__DOT__EXU_valid = __Vdly__top__DOT__EXU_valid;
    vlSelf->top__DOT__EXU_ready = __Vdly__top__DOT__EXU_ready;
    vlSelf->top__DOT__IDU_valid = __Vdly__top__DOT__IDU_valid;
    vlSelf->top__DOT__IDU_ready = __Vdly__top__DOT__IDU_ready;
    vlSelf->top__DOT__axis1_AR_VALID = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                        | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__main_valid = ((IData)(vlSelf->top__DOT__EXU_valid) 
                                    & (IData)(vlSelf->top__DOT__EXU_ready));
    if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__IDU_pc;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__op;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__imm;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__u_EXU__DOT__pc_r;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__u_EXU__DOT__op_r;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__u_EXU__DOT__imm_r;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_IFU__DOT__rask) {
            vlSelf->top__DOT__IFU_inst = (((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                           & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                           ? ((IData)(vlSelf->top__DOT__in_channel)
                                               ? 0ULL
                                               : (0xffffffffULL 
                                                  & vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA))
                                           : 0ULL);
        }
    } else {
        vlSelf->top__DOT__IFU_inst = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
        vlSelf->top__DOT__u_EXU__DOT__rd = (0x1fU & (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 7U)));
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__IDU_inst;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd = (0x1fU & (IData)(vlSelf->top__DOT__u_EXU__DOT__rd_r));
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [(0x1fU & (((IData)(vlSelf->top__DOT__EXU_valid) 
                    & (IData)(vlSelf->top__DOT__EXU_ready))
                    ? (IData)((vlSelf->top__DOT__IDU_inst 
                               >> 0x14U)) : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs2_r)))];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [(0x1fU & (((IData)(vlSelf->top__DOT__EXU_valid) 
                    & (IData)(vlSelf->top__DOT__EXU_ready))
                    ? (IData)((vlSelf->top__DOT__IDU_inst 
                               >> 0xfU)) : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs1_r)))];
    vlSelf->top__DOT__u_IDU__DOT__instR_flag = ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__IDU_inst))));
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__main_valid))
                                 : 0U);
    vlSelf->pc = vlSelf->top__DOT__u_EXU__DOT__pc;
    vlSelf->top__DOT__u_EXU__DOT__instCSR = ((0x3dU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? 2U : 
                                             ((0x3eU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div 
        = ((((0x36U == vlSelf->top__DOT__u_EXU__DOT__op) 
             | (0x2dU == vlSelf->top__DOT__u_EXU__DOT__op)) 
            | (0x35U == vlSelf->top__DOT__u_EXU__DOT__op)) 
           | (0x2eU == vlSelf->top__DOT__u_EXU__DOT__op));
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                       | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->inst = vlSelf->top__DOT__u_EXU__DOT__inst;
    vlSelf->top__DOT__u_EXU__DOT__waddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__raddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__flags = ((((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst)))
                                  ? (3U & (IData)((vlSelf->top__DOT__IDU_inst 
                                                   >> 0xcU)))
                                  : 0U) << 5U) | ((
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                   << 4U) 
                                                  | (((3U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                      << 3U) 
                                                     | (((((IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag) 
                                                           & (1U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__IDU_inst 
                                                                          >> 0x19U))))) 
                                                          & ((2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__IDU_inst 
                                                                          >> 0xdU)))) 
                                                             | (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__IDU_inst 
                                                                            >> 0xdU)))))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (1U 
                                                                       & (IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag))) 
                                                                     & (0x2000000ULL 
                                                                        == 
                                                                        (0xfe007000ULL 
                                                                         & vlSelf->top__DOT__IDU_inst)))) 
                                                            << 1U) 
                                                           | ((0x3bU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                              | (0x1bU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top__DOT__IDU_inst)))))))));
    vlSelf->top__DOT__u_EXU__DOT__rCSR = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                           ? ((0x342U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                               ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause
                                               : ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                    ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                     ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc
                                                     : 0ULL))))
                                           : ((1U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                               ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc
                                                   : 0ULL)));
    if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
        vlSelf->top__DOT__u_EXU__DOT__flags = vlSelf->top__DOT__flags;
        vlSelf->top__DOT__u_EXU__DOT__mul_valid = (
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                                    >> 1U) 
                                                   & 1U);
        vlSelf->top__DOT__u_EXU__DOT__div_valid = (
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                                    >> 2U) 
                                                   & 1U);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__flags = vlSelf->top__DOT__u_EXU__DOT__flags_r;
        vlSelf->top__DOT__u_EXU__DOT__mul_valid = 0U;
        vlSelf->top__DOT__u_EXU__DOT__div_valid = 0U;
    }
    if ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)));
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = vlSelf->top__DOT__u_EXU__DOT__src1;
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = vlSelf->top__DOT__u_EXU__DOT__src2;
    }
    vlSelf->top__DOT__u_EXU__DOT__wmaskM = ((0x40U 
                                             & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                                 ? 0xffU
                                                 : 0xfU)
                                             : ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                                 ? 3U
                                                 : 1U));
    vlSelf->top__DOT__u_EXU__DOT__wenM = (((IData)(vlSelf->top__DOT__EXU_valid) 
                                           & (IData)(vlSelf->top__DOT__EXU_ready)) 
                                          & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                             >> 4U));
    vlSelf->top__DOT__u_EXU__DOT__renM = (((IData)(vlSelf->top__DOT__EXU_valid) 
                                           & (IData)(vlSelf->top__DOT__EXU_ready)) 
                                          & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                             >> 3U));
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__axis1_AR_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
    vlSelf->top__DOT__axis1_AW_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__axis1_W_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
    vlSelf->top__DOT__axis2_AR_READY = ((IData)(vlSelf->top__DOT__in_channel) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
    vlSelf->top__DOT__axis2_AW_READY = ((IData)(vlSelf->top__DOT__in_channel) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
        = ((IData)(vlSelf->top__DOT__in_channel) ? 
           ((IData)(vlSelf->top__DOT__in_channel) & (IData)(vlSelf->top__DOT__axis2_B_READY))
            : (IData)(vlSelf->top__DOT__axis1_B_READY));
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
    if (vlSelf->top__DOT__in_channel) {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AW_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_W_VALID));
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AR_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_R_READY));
        vlSelf->top__DOT__axis2_R_VALID = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID) 
                                           & 1U);
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        vlSelf->top__DOT__axis2_W_READY = 0U;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = vlSelf->top__DOT__axis1_AR_VALID;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = vlSelf->top__DOT__axis1_R_READY;
        vlSelf->top__DOT__axis2_R_VALID = 0U;
    }
    vlSelf->top__DOT__u_IFU__DOT__rask = ((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                          & (IData)(vlSelf->top__DOT__axis1_R_READY));
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL)), 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL)), 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))));
    }
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                                                                 ? vlSelf->top__DOT__IFU_pc
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__dataM_valid = (((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                  & (IData)(vlSelf->top__DOT__axis2_R_VALID)) 
                                                 | ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                    & (IData)(vlSelf->top__DOT__axis2_W_VALID)));
    vlSelf->top__DOT__u_EXU__DOT__rdataM = (((IData)(vlSelf->top__DOT__axis2_R_VALID) 
                                             & (IData)(vlSelf->top__DOT__axis2_R_READY))
                                             ? ((IData)(vlSelf->top__DOT__in_channel)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                  ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                  : 0ULL)
                                                 : 0ULL)
                                             : 0ULL);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__u_EXU__DOT__exe_valid = ((IData)(vlSelf->rst_n) 
                                               & (((((((((4U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         | (5U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (6U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (7U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (8U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (9U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0xaU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                   | (0x1aU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op))
                                                   ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                   : 
                                                  (((((((((0x1bU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | (0x1cU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x1dU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x25U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x2bU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x2dU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0x2eU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0x2fU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op))
                                                    ? 
                                                   ((0x1bU 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                      : 
                                                     ((0x1dU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                       : 
                                                      ((0x25U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                        : 
                                                       ((0x2bU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                         : (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid))))))
                                                    : 
                                                   ((0x30U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                     : 
                                                    ((0x31U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                      : 
                                                     ((0x32U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                       : 
                                                      ((0x35U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                        : 
                                                       ((0x36U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                         : 
                                                        ((0U 
                                                          != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         & ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                            & (IData)(vlSelf->top__DOT__EXU_ready)))))))))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
