// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


void Vdiv___024root__traceChgSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep);

void Vdiv___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdiv___024root* const __restrict vlSelf = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vdiv___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdiv___024root__traceChgSub0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->div__DOT__count),6);
            tracep->chgQData(oldp+1,(vlSelf->div__DOT__reg_q),64);
            tracep->chgQData(oldp+3,(vlSelf->div__DOT__reg_r),64);
            tracep->chgQData(oldp+5,(vlSelf->div__DOT__reg_b),64);
            tracep->chgBit(oldp+7,(vlSelf->div__DOT__r_sign));
            tracep->chgBit(oldp+8,(vlSelf->div__DOT__dividend_sign));
            tracep->chgBit(oldp+9,(vlSelf->div__DOT__divisor_sign));
            tracep->chgWData(oldp+10,(vlSelf->div__DOT__sub_add),65);
            tracep->chgQData(oldp+13,(vlSelf->div__DOT__reg_r2),64);
            tracep->chgBit(oldp+15,(vlSelf->div__DOT__busy));
            tracep->chgBit(oldp+16,(vlSelf->div__DOT__busy_r));
        }
        tracep->chgBit(oldp+17,(vlSelf->clk));
        tracep->chgBit(oldp+18,(vlSelf->rst_n));
        tracep->chgBit(oldp+19,(vlSelf->sign_div));
        tracep->chgBit(oldp+20,(vlSelf->divw));
        tracep->chgQData(oldp+21,(vlSelf->dividend),64);
        tracep->chgQData(oldp+23,(vlSelf->divisor),64);
        tracep->chgBit(oldp+25,(vlSelf->div_valid));
        tracep->chgQData(oldp+26,(vlSelf->quotient),64);
        tracep->chgQData(oldp+28,(vlSelf->remainder),64);
        tracep->chgBit(oldp+30,(vlSelf->out_valid));
        tracep->chgQData(oldp+31,(vlSelf->div__DOT__op_dividend),64);
        tracep->chgQData(oldp+33,(vlSelf->div__DOT__op_divisor),64);
    }
}

void Vdiv___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vdiv___024root* const __restrict vlSelf = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
