// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIDU__Syms.h"


void VIDU___024root__traceChgSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep);

void VIDU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VIDU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VIDU___024root__traceChgSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgIData(oldp+0,(vlSelf->inst),32);
        tracep->chgIData(oldp+1,(vlSelf->dest),32);
        tracep->chgIData(oldp+2,(vlSelf->rs1),32);
        tracep->chgIData(oldp+3,(vlSelf->rs2),32);
        tracep->chgQData(oldp+4,(vlSelf->imm),64);
        tracep->chgIData(oldp+6,(vlSelf->op),32);
    }
}

void VIDU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
