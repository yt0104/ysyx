// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


void Vdiv___024root__traceInitSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdiv___024root__traceInitTop(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdiv___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdiv___024root__traceInitSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+18,"clk", false,-1);
        tracep->declBit(c+19,"rst_n", false,-1);
        tracep->declBit(c+20,"sign_div", false,-1);
        tracep->declBit(c+21,"divw", false,-1);
        tracep->declQuad(c+22,"dividend", false,-1, 63,0);
        tracep->declQuad(c+24,"divisor", false,-1, 63,0);
        tracep->declBit(c+26,"div_valid", false,-1);
        tracep->declQuad(c+27,"quotient", false,-1, 63,0);
        tracep->declQuad(c+29,"remainder", false,-1, 63,0);
        tracep->declBit(c+31,"out_valid", false,-1);
        tracep->declBit(c+18,"div clk", false,-1);
        tracep->declBit(c+19,"div rst_n", false,-1);
        tracep->declBit(c+20,"div sign_div", false,-1);
        tracep->declBit(c+21,"div divw", false,-1);
        tracep->declQuad(c+22,"div dividend", false,-1, 63,0);
        tracep->declQuad(c+24,"div divisor", false,-1, 63,0);
        tracep->declBit(c+26,"div div_valid", false,-1);
        tracep->declQuad(c+27,"div quotient", false,-1, 63,0);
        tracep->declQuad(c+29,"div remainder", false,-1, 63,0);
        tracep->declBit(c+31,"div out_valid", false,-1);
        tracep->declBus(c+1,"div count", false,-1, 5,0);
        tracep->declQuad(c+2,"div reg_q", false,-1, 63,0);
        tracep->declQuad(c+4,"div reg_r", false,-1, 63,0);
        tracep->declQuad(c+6,"div reg_b", false,-1, 63,0);
        tracep->declBit(c+8,"div r_sign", false,-1);
        tracep->declBit(c+9,"div dividend_sign", false,-1);
        tracep->declBit(c+10,"div divisor_sign", false,-1);
        tracep->declQuad(c+32,"div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+34,"div op_divisor", false,-1, 63,0);
        tracep->declArray(c+11,"div sub_add", false,-1, 64,0);
        tracep->declQuad(c+14,"div reg_r2", false,-1, 63,0);
        tracep->declBit(c+16,"div busy", false,-1);
        tracep->declBit(c+17,"div busy_r", false,-1);
    }
}

void Vdiv___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdiv___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdiv___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdiv___024root__traceRegister(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdiv___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdiv___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdiv___024root__traceCleanup, vlSelf);
    }
}

void Vdiv___024root__traceFullSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdiv___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdiv___024root* const __restrict vlSelf = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdiv___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdiv___024root__traceFullSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->div__DOT__count),6);
        tracep->fullQData(oldp+2,(vlSelf->div__DOT__reg_q),64);
        tracep->fullQData(oldp+4,(vlSelf->div__DOT__reg_r),64);
        tracep->fullQData(oldp+6,(vlSelf->div__DOT__reg_b),64);
        tracep->fullBit(oldp+8,(vlSelf->div__DOT__r_sign));
        tracep->fullBit(oldp+9,(vlSelf->div__DOT__dividend_sign));
        tracep->fullBit(oldp+10,(vlSelf->div__DOT__divisor_sign));
        tracep->fullWData(oldp+11,(vlSelf->div__DOT__sub_add),65);
        tracep->fullQData(oldp+14,(vlSelf->div__DOT__reg_r2),64);
        tracep->fullBit(oldp+16,(vlSelf->div__DOT__busy));
        tracep->fullBit(oldp+17,(vlSelf->div__DOT__busy_r));
        tracep->fullBit(oldp+18,(vlSelf->clk));
        tracep->fullBit(oldp+19,(vlSelf->rst_n));
        tracep->fullBit(oldp+20,(vlSelf->sign_div));
        tracep->fullBit(oldp+21,(vlSelf->divw));
        tracep->fullQData(oldp+22,(vlSelf->dividend),64);
        tracep->fullQData(oldp+24,(vlSelf->divisor),64);
        tracep->fullBit(oldp+26,(vlSelf->div_valid));
        tracep->fullQData(oldp+27,(vlSelf->quotient),64);
        tracep->fullQData(oldp+29,(vlSelf->remainder),64);
        tracep->fullBit(oldp+31,(vlSelf->out_valid));
        tracep->fullQData(oldp+32,(vlSelf->div__DOT__op_dividend),64);
        tracep->fullQData(oldp+34,(vlSelf->div__DOT__op_divisor),64);
    }
}
