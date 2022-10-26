// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinst__Syms.h"


void Vinst___024root__traceInitSub0(Vinst___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vinst___024root__traceInitTop(Vinst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vinst___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vinst___024root__traceInitSub0(Vinst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
}

void Vinst___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vinst___024root__traceRegister(Vinst___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addCleanupCb(&Vinst___024root__traceCleanup, vlSelf);
    }
}
