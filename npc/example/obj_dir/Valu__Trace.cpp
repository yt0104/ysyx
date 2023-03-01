// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__traceChgSub0(Valu___024root* vlSelf, VerilatedVcd* tracep);

void Valu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Valu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Valu___024root__traceChgSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->alu__DOT__cnt),7);
            tracep->chgQData(oldp+1,(vlSelf->alu__DOT__multiplicand_r),64);
            tracep->chgQData(oldp+3,(vlSelf->alu__DOT__multiplier_r),64);
            tracep->chgWData(oldp+5,(vlSelf->alu__DOT__result_reg),128);
        }
        tracep->chgBit(oldp+9,(vlSelf->clk));
        tracep->chgBit(oldp+10,(vlSelf->rst_n));
        tracep->chgBit(oldp+11,(vlSelf->mul_valid));
        tracep->chgQData(oldp+12,(vlSelf->multiplicand),64);
        tracep->chgQData(oldp+14,(vlSelf->multiplier),64);
        tracep->chgBit(oldp+16,(vlSelf->out_valid));
        tracep->chgQData(oldp+17,(vlSelf->result_h),64);
        tracep->chgQData(oldp+19,(vlSelf->result_l),64);
    }
}

void Valu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
