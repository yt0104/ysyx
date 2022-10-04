// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsw__Syms.h"


void Vsw___024root__traceInitSub0(Vsw___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsw___024root__traceInitTop(Vsw___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsw___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsw___024root__traceInitSub0(Vsw___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"f", false,-1);
        tracep->declBit(c+1,"sw a", false,-1);
        tracep->declBit(c+2,"sw b", false,-1);
        tracep->declBit(c+3,"sw f", false,-1);
    }
}

void Vsw___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsw___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsw___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsw___024root__traceRegister(Vsw___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsw___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsw___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsw___024root__traceCleanup, vlSelf);
    }
}

void Vsw___024root__traceFullSub0(Vsw___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsw___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsw___024root* const __restrict vlSelf = static_cast<Vsw___024root*>(voidSelf);
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsw___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsw___024root__traceFullSub0(Vsw___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->f));
    }
}
