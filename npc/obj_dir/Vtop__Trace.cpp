// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__exit_flag));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__halt_ret));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__npc),64);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__op),32);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__u_EXU__DOT__wenR));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[0]),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[1]),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[2]),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[3]),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[4]),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[5]),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[6]),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[7]),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[8]),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[9]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[10]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[11]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[12]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[13]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[14]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[15]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[16]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[17]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[18]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[19]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[20]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[21]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[22]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[23]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[24]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[25]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[26]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[27]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[28]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[29]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[30]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+79,(vlSelf->clk));
        tracep->chgBit(oldp+80,(vlSelf->rst_n));
        tracep->chgIData(oldp+81,(vlSelf->inst),32);
        tracep->chgQData(oldp+82,(vlSelf->pc),64);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__cpu),32);
        tracep->chgQData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                  [vlSelf->top__DOT__rs2]),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
