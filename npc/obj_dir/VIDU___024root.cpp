// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "VIDU___024root.h"
#include "VIDU__Syms.h"

//==========

VL_INLINE_OPT void VIDU___024root___combo__TOP__2(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___combo__TOP__2\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->dest = (0x1fU & (vlSelf->inst >> 7U));
        vlSelf->rs1 = (0x1fU & (vlSelf->inst >> 0xfU));
        vlSelf->imm = (((- (QData)((IData)((vlSelf->inst 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x14U))));
        vlSelf->op = 1U;
    } else {
        vlSelf->dest = 0U;
        vlSelf->rs1 = 0U;
        vlSelf->imm = 0ULL;
        vlSelf->op = ((0x100073U == vlSelf->inst) ? 2U
                       : 0U);
    }
}

void VIDU___024root___eval(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval\n"); );
    // Body
    VIDU___024root___combo__TOP__2(vlSelf);
}

QData VIDU___024root___change_request_1(VIDU___024root* vlSelf);

VL_INLINE_OPT QData VIDU___024root___change_request(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___change_request\n"); );
    // Body
    return (VIDU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VIDU___024root___change_request_1(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIDU___024root___eval_debug_assertions(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
