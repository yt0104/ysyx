// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIDU__Syms.h"


void VIDU___024root__traceInitSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VIDU___024root__traceInitTop(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VIDU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VIDU___024root__traceInitSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"inst", false,-1, 31,0);
        tracep->declBus(c+2,"dest", false,-1, 31,0);
        tracep->declBus(c+3,"rs1", false,-1, 31,0);
        tracep->declBus(c+4,"rs2", false,-1, 31,0);
        tracep->declQuad(c+5,"imm", false,-1, 63,0);
        tracep->declBus(c+7,"op", false,-1, 31,0);
        tracep->declBus(c+1,"IDU inst", false,-1, 31,0);
        tracep->declBus(c+2,"IDU dest", false,-1, 31,0);
        tracep->declBus(c+3,"IDU rs1", false,-1, 31,0);
        tracep->declBus(c+4,"IDU rs2", false,-1, 31,0);
        tracep->declQuad(c+5,"IDU imm", false,-1, 63,0);
        tracep->declBus(c+7,"IDU op", false,-1, 31,0);
    }
}

void VIDU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VIDU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VIDU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VIDU___024root__traceRegister(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VIDU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VIDU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VIDU___024root__traceCleanup, vlSelf);
    }
}

void VIDU___024root__traceFullSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VIDU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VIDU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VIDU___024root__traceFullSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->inst),32);
        tracep->fullIData(oldp+2,(vlSelf->dest),32);
        tracep->fullIData(oldp+3,(vlSelf->rs1),32);
        tracep->fullIData(oldp+4,(vlSelf->rs2),32);
        tracep->fullQData(oldp+5,(vlSelf->imm),64);
        tracep->fullIData(oldp+7,(vlSelf->op),32);
    }
}
