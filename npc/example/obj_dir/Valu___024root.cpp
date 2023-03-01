// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu___024root.h"
#include "Valu__Syms.h"

//==========

VL_INLINE_OPT void Valu___024root___sequent__TOP__1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vdly__alu__DOT__cnt;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    // Body
    __Vdly__alu__DOT__cnt = vlSelf->alu__DOT__cnt;
    vlSelf->out_valid = ((IData)(vlSelf->rst_n) & (0x40U 
                                                   == (IData)(vlSelf->alu__DOT__cnt)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->mul_valid) & (0U == (IData)(vlSelf->alu__DOT__cnt)))) {
            __Vdly__alu__DOT__cnt = (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->alu__DOT__cnt)));
        } else if ((0x40U == (IData)(vlSelf->alu__DOT__cnt))) {
            __Vdly__alu__DOT__cnt = 0U;
        } else if ((0U != (IData)(vlSelf->alu__DOT__cnt))) {
            __Vdly__alu__DOT__cnt = (0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->alu__DOT__cnt)));
        }
    } else {
        __Vdly__alu__DOT__cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((0U < (IData)(vlSelf->alu__DOT__cnt)) 
             & (0x40U >= (IData)(vlSelf->alu__DOT__cnt)))) {
            if ((1U & (IData)((vlSelf->alu__DOT__multiplicand_r 
                               >> (0x3fU & ((IData)(vlSelf->alu__DOT__cnt) 
                                            - (IData)(1U))))))) {
                VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->alu__DOT__multiplier_r);
                VL_SHIFTL_WWI(128,128,32, __Vtemp3, __Vtemp2, 
                              ((IData)(vlSelf->alu__DOT__cnt) 
                               - (IData)(1U)));
                VL_ADD_W(4, __Vtemp1, vlSelf->alu__DOT__result_reg, __Vtemp3);
                vlSelf->alu__DOT__result_reg[0U] = 
                    __Vtemp1[0U];
                vlSelf->alu__DOT__result_reg[1U] = 
                    __Vtemp1[1U];
                vlSelf->alu__DOT__result_reg[2U] = 
                    __Vtemp1[2U];
                vlSelf->alu__DOT__result_reg[3U] = 
                    __Vtemp1[3U];
            }
        } else {
            vlSelf->alu__DOT__result_reg[0U] = 0U;
            vlSelf->alu__DOT__result_reg[1U] = 0U;
            vlSelf->alu__DOT__result_reg[2U] = 0U;
            vlSelf->alu__DOT__result_reg[3U] = 0U;
        }
    } else {
        vlSelf->alu__DOT__result_reg[0U] = 0U;
        vlSelf->alu__DOT__result_reg[1U] = 0U;
        vlSelf->alu__DOT__result_reg[2U] = 0U;
        vlSelf->alu__DOT__result_reg[3U] = 0U;
    }
    vlSelf->result_h = (((QData)((IData)(vlSelf->alu__DOT__result_reg[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->alu__DOT__result_reg[2U])));
    vlSelf->result_l = (((QData)((IData)(vlSelf->alu__DOT__result_reg[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->alu__DOT__result_reg[0U])));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->mul_valid) & (0U == (IData)(vlSelf->alu__DOT__cnt)))) {
            vlSelf->alu__DOT__multiplicand_r = vlSelf->multiplicand;
        }
    } else {
        vlSelf->alu__DOT__multiplicand_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->mul_valid) & (0U == (IData)(vlSelf->alu__DOT__cnt)))) {
            vlSelf->alu__DOT__multiplier_r = vlSelf->multiplier;
        }
    } else {
        vlSelf->alu__DOT__multiplier_r = 0ULL;
    }
    vlSelf->alu__DOT__cnt = __Vdly__alu__DOT__cnt;
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Valu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Valu___024root___change_request_1(Valu___024root* vlSelf);

VL_INLINE_OPT QData Valu___024root___change_request(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request\n"); );
    // Body
    return (Valu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Valu___024root___change_request_1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->mul_valid & 0xfeU))) {
        Verilated::overWidthError("mul_valid");}
}
#endif  // VL_DEBUG
