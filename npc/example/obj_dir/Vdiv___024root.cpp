// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv___024root.h"
#include "Vdiv__Syms.h"

//==========

VL_INLINE_OPT void Vdiv___024root___sequent__TOP__1(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*5:0*/ __Vdly__div__DOT__count;
    CData/*0:0*/ __Vdly__div__DOT__busy;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    QData/*63:0*/ __Vdly__div__DOT__reg_q;
    // Body
    __Vdly__div__DOT__count = vlSelf->div__DOT__count;
    __Vdly__div__DOT__busy = vlSelf->div__DOT__busy;
    __Vdly__div__DOT__reg_q = vlSelf->div__DOT__reg_q;
    vlSelf->div__DOT__busy_r = vlSelf->div__DOT__busy;
    if (vlSelf->rst_n) {
        if (vlSelf->div_valid) {
            vlSelf->div__DOT__divisor_sign = ((IData)(vlSelf->sign_div) 
                                              & (IData)(
                                                        (vlSelf->div__DOT__op_divisor 
                                                         >> 0x3fU)));
        }
    } else {
        vlSelf->div__DOT__divisor_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->div_valid) {
            vlSelf->div__DOT__dividend_sign = ((IData)(vlSelf->sign_div) 
                                               & (IData)(
                                                         (vlSelf->div__DOT__op_dividend 
                                                          >> 0x3fU)));
        }
    } else {
        vlSelf->div__DOT__dividend_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->div_valid) {
            vlSelf->div__DOT__reg_b = ((IData)(vlSelf->sign_div)
                                        ? ((1U & (IData)(
                                                         (vlSelf->div__DOT__op_divisor 
                                                          >> 0x3fU)))
                                            ? (1ULL 
                                               + (~ vlSelf->div__DOT__op_divisor))
                                            : vlSelf->div__DOT__op_divisor)
                                        : vlSelf->divisor);
        }
    } else {
        vlSelf->div__DOT__reg_b = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->div_valid) {
            __Vdly__div__DOT__reg_q = ((IData)(vlSelf->sign_div)
                                        ? ((1U & (IData)(
                                                         (vlSelf->div__DOT__op_dividend 
                                                          >> 0x3fU)))
                                            ? (1ULL 
                                               + (~ vlSelf->div__DOT__op_dividend))
                                            : vlSelf->div__DOT__op_dividend)
                                        : vlSelf->dividend);
            vlSelf->div__DOT__reg_r = 0ULL;
            vlSelf->div__DOT__r_sign = 0U;
            __Vdly__div__DOT__count = 0U;
            __Vdly__div__DOT__busy = 1U;
        } else if (vlSelf->div__DOT__busy) {
            __Vdly__div__DOT__reg_q = ((vlSelf->div__DOT__reg_q 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     vlSelf->div__DOT__sub_add[2U])))));
            __Vdly__div__DOT__count = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->div__DOT__count)));
            vlSelf->div__DOT__reg_r = (((QData)((IData)(
                                                        vlSelf->div__DOT__sub_add[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->div__DOT__sub_add[0U])));
            vlSelf->div__DOT__r_sign = (1U & vlSelf->div__DOT__sub_add[2U]);
            if ((0x3fU == (IData)(vlSelf->div__DOT__count))) {
                __Vdly__div__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__div__DOT__count = 0U;
        __Vdly__div__DOT__busy = 0U;
        vlSelf->div__DOT__r_sign = 0U;
        vlSelf->div__DOT__reg_r = 0ULL;
        __Vdly__div__DOT__reg_q = 0ULL;
    }
    vlSelf->div__DOT__count = __Vdly__div__DOT__count;
    vlSelf->div__DOT__busy = __Vdly__div__DOT__busy;
    vlSelf->div__DOT__reg_q = __Vdly__div__DOT__reg_q;
    vlSelf->out_valid = ((~ (IData)(vlSelf->div__DOT__busy)) 
                         & (IData)(vlSelf->div__DOT__busy_r));
    vlSelf->quotient = (((IData)(vlSelf->div__DOT__divisor_sign) 
                         ^ (IData)(vlSelf->div__DOT__dividend_sign))
                         ? (1ULL + (~ vlSelf->div__DOT__reg_q))
                         : vlSelf->div__DOT__reg_q);
    __Vtemp2[0U] = (((IData)(vlSelf->div__DOT__reg_r) 
                     << 1U) | (1U & (IData)((vlSelf->div__DOT__reg_q 
                                             >> 0x3fU))));
    __Vtemp2[1U] = (((IData)(vlSelf->div__DOT__reg_r) 
                     >> 0x1fU) | ((IData)((vlSelf->div__DOT__reg_r 
                                           >> 0x20U)) 
                                  << 1U));
    __Vtemp2[2U] = ((IData)((vlSelf->div__DOT__reg_r 
                             >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    __Vtemp5[0U] = (((IData)(vlSelf->div__DOT__reg_r) 
                     << 1U) | (1U & (IData)((vlSelf->div__DOT__reg_q 
                                             >> 0x3fU))));
    __Vtemp5[1U] = (((IData)(vlSelf->div__DOT__reg_r) 
                     >> 0x1fU) | ((IData)((vlSelf->div__DOT__reg_r 
                                           >> 0x20U)) 
                                  << 1U));
    __Vtemp5[2U] = ((IData)((vlSelf->div__DOT__reg_r 
                             >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp6, vlSelf->div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    if (vlSelf->div__DOT__r_sign) {
        vlSelf->div__DOT__sub_add[0U] = __Vtemp4[0U];
        vlSelf->div__DOT__sub_add[1U] = __Vtemp4[1U];
        vlSelf->div__DOT__sub_add[2U] = (1U & __Vtemp4[2U]);
        vlSelf->div__DOT__reg_r2 = (vlSelf->div__DOT__reg_r 
                                    + vlSelf->div__DOT__reg_b);
    } else {
        vlSelf->div__DOT__sub_add[0U] = __Vtemp7[0U];
        vlSelf->div__DOT__sub_add[1U] = __Vtemp7[1U];
        vlSelf->div__DOT__sub_add[2U] = (1U & __Vtemp7[2U]);
        vlSelf->div__DOT__reg_r2 = vlSelf->div__DOT__reg_r;
    }
    vlSelf->remainder = ((IData)(vlSelf->div__DOT__dividend_sign)
                          ? (1ULL + (~ vlSelf->div__DOT__reg_r2))
                          : vlSelf->div__DOT__reg_r2);
}

VL_INLINE_OPT void Vdiv___024root___combo__TOP__3(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___combo__TOP__3\n"); );
    // Body
    if (vlSelf->divw) {
        vlSelf->div__DOT__op_divisor = (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->divisor 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->divisor)));
        vlSelf->div__DOT__op_dividend = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->dividend 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->dividend)));
    } else {
        vlSelf->div__DOT__op_divisor = vlSelf->divisor;
        vlSelf->div__DOT__op_dividend = vlSelf->dividend;
    }
}

void Vdiv___024root___eval(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdiv___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vdiv___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vdiv___024root___change_request_1(Vdiv___024root* vlSelf);

VL_INLINE_OPT QData Vdiv___024root___change_request(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___change_request\n"); );
    // Body
    return (Vdiv___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdiv___024root___change_request_1(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->sign_div & 0xfeU))) {
        Verilated::overWidthError("sign_div");}
    if (VL_UNLIKELY((vlSelf->divw & 0xfeU))) {
        Verilated::overWidthError("divw");}
    if (VL_UNLIKELY((vlSelf->div_valid & 0xfeU))) {
        Verilated::overWidthError("div_valid");}
}
#endif  // VL_DEBUG
