// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu___024root.h"
#include "Valu__Syms.h"

//==========


void Valu___024root___ctor_var_reset(Valu___024root* vlSelf);

Valu___024root::Valu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Valu___024root___ctor_var_reset(this);
}

void Valu___024root::__Vconfigure(Valu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Valu___024root::~Valu___024root() {
}

void Valu___024root___settle__TOP__2(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->result_h = (((QData)((IData)(vlSelf->alu__DOT__result_reg[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->alu__DOT__result_reg[2U])));
    vlSelf->result_l = (((QData)((IData)(vlSelf->alu__DOT__result_reg[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->alu__DOT__result_reg[0U])));
}

void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    // Body
    Valu___024root___settle__TOP__2(vlSelf);
}

void Valu___024root___final(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___final\n"); );
}

void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->mul_valid = VL_RAND_RESET_I(1);
    vlSelf->multiplicand = VL_RAND_RESET_Q(64);
    vlSelf->multiplier = VL_RAND_RESET_Q(64);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->result_h = VL_RAND_RESET_Q(64);
    vlSelf->result_l = VL_RAND_RESET_Q(64);
    vlSelf->alu__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->alu__DOT__multiplicand_r = VL_RAND_RESET_Q(64);
    vlSelf->alu__DOT__multiplier_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->alu__DOT__result_reg);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
