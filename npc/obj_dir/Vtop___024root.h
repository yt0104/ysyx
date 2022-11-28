// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__exit_flag;
    CData/*0:0*/ top__DOT__halt_ret;
    CData/*4:0*/ top__DOT__rd;
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__rs2;
    CData/*0:0*/ top__DOT__u_EXU__DOT__wenR;
    CData/*7:0*/ top__DOT__u_EXU__DOT__wmask;
    CData/*0:0*/ top__DOT__u_EXU__DOT__wenM;
    CData/*0:0*/ top__DOT__u_EXU__DOT__renM;
    IData/*31:0*/ top__DOT__cpu;
    IData/*31:0*/ top__DOT__op;
    QData/*63:0*/ top__DOT__npc;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__u_EXU__DOT__src1;
    QData/*63:0*/ top__DOT__u_EXU__DOT__src2;
    QData/*63:0*/ top__DOT__u_EXU__DOT__dest;
    QData/*63:0*/ top__DOT__u_EXU__DOT__rdata;
    QData/*63:0*/ top__DOT__u_EXU__DOT__raddr;
    QData/*63:0*/ top__DOT__u_EXU__DOT__waddr;
    QData/*63:0*/ top__DOT__u_EXU__DOT__wdata;
    QData/*63:0*/ top__DOT__u_EXU__DOT__temp;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_EXU__DOT__u_reg__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    IData/*31:0*/ __Vtask_top__DOT__ifetch__2__inst;
    QData/*63:0*/ __Vtask_top__DOT__u_EXU__DOT__pmem_read__3__rdata;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
