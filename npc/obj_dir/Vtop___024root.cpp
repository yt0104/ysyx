// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->top__DOT__rs1 = (0x1fU & (vlSelf->inst 
                                          >> 0xfU));
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U))));
        vlSelf->top__DOT__op = 1U;
    } else {
        vlSelf->top__DOT__rs1 = 0U;
        vlSelf->top__DOT__imm = 0ULL;
        vlSelf->top__DOT__op = ((0x100073U == vlSelf->inst)
                                 ? 2U : 0U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->pc = ((0U == vlSelf->top__DOT__cpu)
                       ? (4ULL + vlSelf->pc) : vlSelf->pc);
        vlSelf->top__DOT__cpu = ((IData)(vlSelf->exit_flag)
                                  ? 1U : vlSelf->top__DOT__cpu);
    } else {
        vlSelf->pc = 0x80000000ULL;
        vlSelf->top__DOT__cpu = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 = 0U;
    if (vlSelf->top__DOT__u_EXU__DOT__wenR) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__dest;
        __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 
            = vlSelf->top__DOT__rd;
    }
    if (__Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->exit_flag = ((1U != vlSelf->top__DOT__op) 
                         & (2U == vlSelf->top__DOT__op));
    vlSelf->top__DOT__u_EXU__DOT__wenR = (1U == vlSelf->top__DOT__op);
    vlSelf->top__DOT__rd = ((0x13U == (0x707fU & vlSelf->inst))
                             ? (0x1fU & (vlSelf->inst 
                                         >> 7U)) : 0U);
    if ((1U == vlSelf->top__DOT__op)) {
        vlSelf->top__DOT__u_EXU__DOT__dest = (vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                              [vlSelf->top__DOT__rs1] 
                                              + vlSelf->top__DOT__imm);
    } else if ((2U != vlSelf->top__DOT__op)) {
        vlSelf->top__DOT__u_EXU__DOT__dest = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
            [vlSelf->top__DOT__rs2];
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
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
