// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinst.h for the primary calling header

#include "Vinst___024unit.h"
#include "Vinst__Syms.h"

//==========


void Vinst___024unit___ctor_var_reset(Vinst___024unit* vlSelf);

Vinst___024unit::Vinst___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vinst___024unit___ctor_var_reset(this);
}

void Vinst___024unit::__Vconfigure(Vinst__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vinst___024unit::~Vinst___024unit() {
}

void Vinst___024unit___ctor_var_reset(Vinst___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinst___024unit___ctor_var_reset\n"); );
}
