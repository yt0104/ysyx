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
        tracep->declBit(c+114,"clk", false,-1);
        tracep->declBit(c+115,"rst_n", false,-1);
        tracep->declBus(c+116,"inst", false,-1, 31,0);
        tracep->declQuad(c+117,"pc", false,-1, 63,0);
        tracep->declBit(c+114,"top clk", false,-1);
        tracep->declBit(c+115,"top rst_n", false,-1);
        tracep->declBus(c+116,"top inst", false,-1, 31,0);
        tracep->declQuad(c+117,"top pc", false,-1, 63,0);
        tracep->declBit(c+79,"top exit_flag", false,-1);
        tracep->declBit(c+80,"top halt_ret", false,-1);
        tracep->declBus(c+1,"top cpu", false,-1, 31,0);
        tracep->declQuad(c+81,"top npc", false,-1, 63,0);
        tracep->declBus(c+109,"top rd", false,-1, 4,0);
        tracep->declBus(c+2,"top rs1", false,-1, 4,0);
        tracep->declBus(c+3,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top imm", false,-1, 63,0);
        tracep->declBus(c+6,"top op", false,-1, 31,0);
        tracep->declBus(c+116,"top u_IDU inst", false,-1, 31,0);
        tracep->declBus(c+109,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+2,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+3,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top u_IDU imm", false,-1, 63,0);
        tracep->declBus(c+6,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+114,"top u_EXU clk", false,-1);
        tracep->declBit(c+115,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+109,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+2,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+3,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+4,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+6,"top u_EXU op", false,-1, 31,0);
        tracep->declQuad(c+117,"top u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+81,"top u_EXU npc", false,-1, 63,0);
        tracep->declBit(c+79,"top u_EXU exit_flag", false,-1);
        tracep->declBit(c+80,"top u_EXU halt_ret", false,-1);
        tracep->declQuad(c+83,"top u_EXU temp", false,-1, 63,0);
        tracep->declQuad(c+110,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+112,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+85,"top u_EXU dest", false,-1, 63,0);
        tracep->declBit(c+87,"top u_EXU wenR", false,-1);
        tracep->declQuad(c+88,"top u_EXU rCSR", false,-1, 63,0);
        tracep->declQuad(c+90,"top u_EXU wCSR", false,-1, 63,0);
        tracep->declQuad(c+92,"top u_EXU intr_pc", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_EXU intr_NO", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU addrCSR", false,-1, 11,0);
        tracep->declBit(c+97,"top u_EXU wenC", false,-1);
        tracep->declQuad(c+98,"top u_EXU rdata", false,-1, 63,0);
        tracep->declQuad(c+100,"top u_EXU raddr", false,-1, 63,0);
        tracep->declQuad(c+102,"top u_EXU waddr", false,-1, 63,0);
        tracep->declQuad(c+104,"top u_EXU wdata", false,-1, 63,0);
        tracep->declBus(c+106,"top u_EXU wmask", false,-1, 7,0);
        tracep->declBit(c+107,"top u_EXU wenM", false,-1);
        tracep->declBit(c+108,"top u_EXU renM", false,-1);
        tracep->declBus(c+119,"top u_EXU u_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+120,"top u_EXU u_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+114,"top u_EXU u_gpr clk", false,-1);
        tracep->declQuad(c+110,"top u_EXU u_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+2,"top u_EXU u_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+112,"top u_EXU u_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+3,"top u_EXU u_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+85,"top u_EXU u_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+109,"top u_EXU u_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+87,"top u_EXU u_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+7+i*2,"top u_EXU u_gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+121,"top u_EXU u_csr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+120,"top u_EXU u_csr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+114,"top u_EXU u_csr clk", false,-1);
        tracep->declQuad(c+88,"top u_EXU u_csr rdata", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU u_csr op_addr", false,-1, 11,0);
        tracep->declQuad(c+90,"top u_EXU u_csr wdata", false,-1, 63,0);
        tracep->declQuad(c+92,"top u_EXU u_csr intr_pc", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_EXU u_csr intr_NO", false,-1, 63,0);
        tracep->declBit(c+97,"top u_EXU u_csr wen", false,-1);
        tracep->declQuad(c+71,"top u_EXU u_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_EXU u_csr mstatus", false,-1, 63,0);
        tracep->declQuad(c+75,"top u_EXU u_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+77,"top u_EXU u_csr mtvec", false,-1, 63,0);
        tracep->declBus(c+122,"top u_EXU u_csr addr_mcause", false,-1, 11,0);
        tracep->declBus(c+123,"top u_EXU u_csr addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+124,"top u_EXU u_csr addr_mepc", false,-1, 11,0);
        tracep->declBus(c+125,"top u_EXU u_csr addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+126,"top u_EXU u_csr addr_inst_ecall", false,-1, 11,0);
        tracep->declBus(c+127,"top u_EXU u_csr addr_inst_mret", false,-1, 11,0);
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
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cpu),32);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__op),32);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__exit_flag));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__halt_ret));
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__npc),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__temp),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__wenR));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_EXU__DOT__wCSR),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__intr_pc),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__intr_NO),64);
        tracep->fullSData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__addrCSR),12);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__wenC));
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__rdata),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__raddr),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__waddr),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__wdata),64);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__wmask),8);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__wenM));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__renM));
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__rd),5);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
        tracep->fullBit(oldp+114,(vlSelf->clk));
        tracep->fullBit(oldp+115,(vlSelf->rst_n));
        tracep->fullIData(oldp+116,(vlSelf->inst),32);
        tracep->fullQData(oldp+117,(vlSelf->pc),64);
        tracep->fullIData(oldp+119,(5U),32);
        tracep->fullIData(oldp+120,(0x40U),32);
        tracep->fullIData(oldp+121,(0xcU),32);
        tracep->fullSData(oldp+122,(0x342U),12);
        tracep->fullSData(oldp+123,(0x300U),12);
        tracep->fullSData(oldp+124,(0x341U),12);
        tracep->fullSData(oldp+125,(0x305U),12);
        tracep->fullSData(oldp+126,(0U),12);
        tracep->fullSData(oldp+127,(1U),12);
    }
}
