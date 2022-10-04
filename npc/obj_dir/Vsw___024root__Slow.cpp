// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsw.h for the primary calling header

#include "Vsw___024root.h"
#include "Vsw__Syms.h"

//==========


void Vsw___024root___ctor_var_reset(Vsw___024root* vlSelf);

Vsw___024root::Vsw___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsw___024root___ctor_var_reset(this);
}

void Vsw___024root::__Vconfigure(Vsw__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsw___024root::~Vsw___024root() {
}

void Vsw___024root___eval_initial(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___eval_initial\n"); );
}

void Vsw___024root___combo__TOP__1(Vsw___024root* vlSelf);

void Vsw___024root___eval_settle(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___eval_settle\n"); );
    // Body
    Vsw___024root___combo__TOP__1(vlSelf);
}

void Vsw___024root___final(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___final\n"); );
}

void Vsw___024root___ctor_var_reset(Vsw___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
}
