// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst.h for the primary calling header

#include "Vinst___024root.h"
#include "Vinst__Syms.h"

//==========

void Vinst___024root___eval(Vinst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst___024root___eval\n"); );
}

QData Vinst___024root___change_request_1(Vinst___024root* vlSelf);

VL_INLINE_OPT QData Vinst___024root___change_request(Vinst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst___024root___change_request\n"); );
    // Body
    return (Vinst___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vinst___024root___change_request_1(Vinst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vinst___024root___eval_debug_assertions(Vinst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinst___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
