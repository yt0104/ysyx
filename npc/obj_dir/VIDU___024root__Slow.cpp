// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "VIDU___024root.h"
#include "VIDU__Syms.h"

//==========


void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf);

VIDU___024root::VIDU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIDU___024root___ctor_var_reset(this);
}

void VIDU___024root::__Vconfigure(VIDU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIDU___024root::~VIDU___024root() {
}

void VIDU___024root___settle__TOP__1(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->rs2 = 0U;
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

void VIDU___024root___eval_initial(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_initial\n"); );
}

void VIDU___024root___eval_settle(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_settle\n"); );
    // Body
    VIDU___024root___settle__TOP__1(vlSelf);
}

void VIDU___024root___final(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___final\n"); );
}

void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->dest = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2 = VL_RAND_RESET_I(32);
    vlSelf->imm = VL_RAND_RESET_Q(64);
    vlSelf->op = 0;
}
