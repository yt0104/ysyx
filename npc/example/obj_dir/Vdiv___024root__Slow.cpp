// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv___024root.h"
#include "Vdiv__Syms.h"

//==========


void Vdiv___024root___ctor_var_reset(Vdiv___024root* vlSelf);

Vdiv___024root::Vdiv___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdiv___024root___ctor_var_reset(this);
}

void Vdiv___024root::__Vconfigure(Vdiv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdiv___024root::~Vdiv___024root() {
}

void Vdiv___024root___settle__TOP__2(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp16;
    // Body
    if (vlSelf->divw) {
        vlSelf->div__DOT__op_dividend = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->dividend 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->dividend)));
        vlSelf->div__DOT__op_divisor = (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->divisor 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->divisor)));
    } else {
        vlSelf->div__DOT__op_dividend = vlSelf->dividend;
        vlSelf->div__DOT__op_divisor = vlSelf->divisor;
    }
    vlSelf->out_valid = ((~ (IData)(vlSelf->div__DOT__busy)) 
                         & (IData)(vlSelf->div__DOT__busy_r));
    vlSelf->quotient = (((IData)(vlSelf->div__DOT__divisor_sign) 
                         ^ (IData)(vlSelf->div__DOT__dividend_sign))
                         ? (1ULL + (~ vlSelf->div__DOT__reg_q))
                         : vlSelf->div__DOT__reg_q);
    __Vtemp11[0U] = (((IData)(vlSelf->div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp11[1U] = (((IData)(vlSelf->div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp11[2U] = ((IData)((vlSelf->div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    __Vtemp14[0U] = (((IData)(vlSelf->div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp14[1U] = (((IData)(vlSelf->div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp14[2U] = ((IData)((vlSelf->div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp15, vlSelf->div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp16, __Vtemp14, __Vtemp15);
    if (vlSelf->div__DOT__r_sign) {
        vlSelf->div__DOT__sub_add[0U] = __Vtemp13[0U];
        vlSelf->div__DOT__sub_add[1U] = __Vtemp13[1U];
        vlSelf->div__DOT__sub_add[2U] = (1U & __Vtemp13[2U]);
        vlSelf->div__DOT__reg_r2 = (vlSelf->div__DOT__reg_r 
                                    + vlSelf->div__DOT__reg_b);
    } else {
        vlSelf->div__DOT__sub_add[0U] = __Vtemp16[0U];
        vlSelf->div__DOT__sub_add[1U] = __Vtemp16[1U];
        vlSelf->div__DOT__sub_add[2U] = (1U & __Vtemp16[2U]);
        vlSelf->div__DOT__reg_r2 = vlSelf->div__DOT__reg_r;
    }
    vlSelf->remainder = ((IData)(vlSelf->div__DOT__dividend_sign)
                          ? (1ULL + (~ vlSelf->div__DOT__reg_r2))
                          : vlSelf->div__DOT__reg_r2);
}

void Vdiv___024root___eval_initial(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vdiv___024root___eval_settle(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_settle\n"); );
    // Body
    Vdiv___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vdiv___024root___final(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___final\n"); );
}

void Vdiv___024root___ctor_var_reset(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->sign_div = VL_RAND_RESET_I(1);
    vlSelf->divw = VL_RAND_RESET_I(1);
    vlSelf->dividend = VL_RAND_RESET_Q(64);
    vlSelf->divisor = VL_RAND_RESET_Q(64);
    vlSelf->div_valid = VL_RAND_RESET_I(1);
    vlSelf->quotient = VL_RAND_RESET_Q(64);
    vlSelf->remainder = VL_RAND_RESET_Q(64);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->div__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->div__DOT__reg_r = VL_RAND_RESET_Q(64);
    vlSelf->div__DOT__reg_b = VL_RAND_RESET_Q(64);
    vlSelf->div__DOT__r_sign = VL_RAND_RESET_I(1);
    vlSelf->div__DOT__dividend_sign = VL_RAND_RESET_I(1);
    vlSelf->div__DOT__divisor_sign = VL_RAND_RESET_I(1);
    vlSelf->div__DOT__op_dividend = VL_RAND_RESET_Q(64);
    vlSelf->div__DOT__op_divisor = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->div__DOT__sub_add);
    vlSelf->div__DOT__reg_r2 = VL_RAND_RESET_Q(64);
    vlSelf->div__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->div__DOT__busy_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
