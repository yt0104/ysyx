// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsw.h for the primary calling header

#include "Vsw___024root.h"
#include "Vsw__Syms.h"

//==========

VL_INLINE_OPT void Vsw___024root___sequent__TOP__1(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->f = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->a) 
                                             ^ (IData)(vlSelf->b)));
}

void Vsw___024root___eval(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsw___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vsw___024root___change_request_1(Vsw___024root* vlSelf);

VL_INLINE_OPT QData Vsw___024root___change_request(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___change_request\n"); );
    // Body
    return (Vsw___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsw___024root___change_request_1(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsw___024root___eval_debug_assertions(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
