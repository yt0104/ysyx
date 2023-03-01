// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceInitTop(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+10,"clk", false,-1);
        tracep->declBit(c+11,"rst_n", false,-1);
        tracep->declBit(c+12,"mul_valid", false,-1);
        tracep->declQuad(c+13,"multiplicand", false,-1, 63,0);
        tracep->declQuad(c+15,"multiplier", false,-1, 63,0);
        tracep->declBit(c+17,"out_valid", false,-1);
        tracep->declQuad(c+18,"result_h", false,-1, 63,0);
        tracep->declQuad(c+20,"result_l", false,-1, 63,0);
        tracep->declBit(c+10,"alu clk", false,-1);
        tracep->declBit(c+11,"alu rst_n", false,-1);
        tracep->declBit(c+12,"alu mul_valid", false,-1);
        tracep->declQuad(c+13,"alu multiplicand", false,-1, 63,0);
        tracep->declQuad(c+15,"alu multiplier", false,-1, 63,0);
        tracep->declBit(c+17,"alu out_valid", false,-1);
        tracep->declQuad(c+18,"alu result_h", false,-1, 63,0);
        tracep->declQuad(c+20,"alu result_l", false,-1, 63,0);
        tracep->declBus(c+1,"alu cnt", false,-1, 6,0);
        tracep->declQuad(c+2,"alu multiplicand_r", false,-1, 63,0);
        tracep->declQuad(c+4,"alu multiplier_r", false,-1, 63,0);
        tracep->declArray(c+6,"alu result_reg", false,-1, 127,0);
    }
}

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Valu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Valu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Valu___024root__traceRegister(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Valu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Valu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Valu___024root__traceCleanup, vlSelf);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->alu__DOT__cnt),7);
        tracep->fullQData(oldp+2,(vlSelf->alu__DOT__multiplicand_r),64);
        tracep->fullQData(oldp+4,(vlSelf->alu__DOT__multiplier_r),64);
        tracep->fullWData(oldp+6,(vlSelf->alu__DOT__result_reg),128);
        tracep->fullBit(oldp+10,(vlSelf->clk));
        tracep->fullBit(oldp+11,(vlSelf->rst_n));
        tracep->fullBit(oldp+12,(vlSelf->mul_valid));
        tracep->fullQData(oldp+13,(vlSelf->multiplicand),64);
        tracep->fullQData(oldp+15,(vlSelf->multiplier),64);
        tracep->fullBit(oldp+17,(vlSelf->out_valid));
        tracep->fullQData(oldp+18,(vlSelf->result_h),64);
        tracep->fullQData(oldp+20,(vlSelf->result_l),64);
    }
}
