// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "VIDU___024unit.h"
#include "VIDU__Syms.h"

//==========


void VIDU___024unit___ctor_var_reset(VIDU___024unit* vlSelf);

VIDU___024unit::VIDU___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIDU___024unit___ctor_var_reset(this);
}

void VIDU___024unit::__Vconfigure(VIDU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIDU___024unit::~VIDU___024unit() {
}

void VIDU___024unit___ctor_var_reset(VIDU___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VIDU___024unit___ctor_var_reset\n"); );
}
