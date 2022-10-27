// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+76,"clk", false,-1);
        tracep->declBit(c+77,"rst_n", false,-1);
        tracep->declBus(c+78,"inst", false,-1, 31,0);
        tracep->declBit(c+79,"exit_flag", false,-1);
        tracep->declQuad(c+80,"pc", false,-1, 63,0);
        tracep->declBit(c+76,"top clk", false,-1);
        tracep->declBit(c+77,"top rst_n", false,-1);
        tracep->declBus(c+78,"top inst", false,-1, 31,0);
        tracep->declBit(c+79,"top exit_flag", false,-1);
        tracep->declQuad(c+80,"top pc", false,-1, 63,0);
        tracep->declBus(c+82,"top cpu", false,-1, 31,0);
        tracep->declBus(c+2,"top rd", false,-1, 4,0);
        tracep->declBus(c+3,"top rs1", false,-1, 4,0);
        tracep->declBus(c+1,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top imm", false,-1, 63,0);
        tracep->declBus(c+6,"top op", false,-1, 31,0);
        tracep->declBus(c+78,"top u_IDU inst", false,-1, 31,0);
        tracep->declBus(c+2,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+3,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+1,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top u_IDU imm", false,-1, 63,0);
        tracep->declBus(c+6,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+76,"top u_EXU clk", false,-1);
        tracep->declBus(c+2,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+3,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+1,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+6,"top u_EXU op", false,-1, 31,0);
        tracep->declBit(c+79,"top u_EXU exit_flag", false,-1);
        tracep->declQuad(c+83,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+10,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU dest", false,-1, 63,0);
        tracep->declBit(c+9,"top u_EXU wenR", false,-1);
        tracep->declBus(c+85,"top u_EXU u_reg ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+86,"top u_EXU u_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+76,"top u_EXU u_reg clk", false,-1);
        tracep->declQuad(c+83,"top u_EXU u_reg rdata1", false,-1, 63,0);
        tracep->declBus(c+3,"top u_EXU u_reg raddr1", false,-1, 4,0);
        tracep->declQuad(c+10,"top u_EXU u_reg rdata2", false,-1, 63,0);
        tracep->declBus(c+1,"top u_EXU u_reg raddr2", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_EXU u_reg wdata", false,-1, 63,0);
        tracep->declBus(c+2,"top u_EXU u_reg waddr", false,-1, 4,0);
        tracep->declBit(c+9,"top u_EXU u_reg wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+12+i*2,"top u_EXU u_reg rf", true,(i+0), 63,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__rs2),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__rs1),5);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__op),32);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__u_EXU__DOT__wenR));
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                   [vlSelf->top__DOT__rs2]),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[0]),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[1]),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[2]),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[3]),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[4]),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[5]),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[6]),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[7]),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[8]),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[9]),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[10]),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[11]),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[12]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[13]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[14]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[15]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[16]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[17]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[18]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[19]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[20]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[21]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[22]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[23]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[24]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[25]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[26]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[27]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[28]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[29]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[30]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[31]),64);
        tracep->fullBit(oldp+76,(vlSelf->clk));
        tracep->fullBit(oldp+77,(vlSelf->rst_n));
        tracep->fullIData(oldp+78,(vlSelf->inst),32);
        tracep->fullBit(oldp+79,(vlSelf->exit_flag));
        tracep->fullQData(oldp+80,(vlSelf->pc),64);
        tracep->fullIData(oldp+82,(vlSelf->top__DOT__cpu),32);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                   [vlSelf->top__DOT__rs1]),64);
        tracep->fullIData(oldp+85,(5U),32);
        tracep->fullIData(oldp+86,(0x40U),32);
    }
}
