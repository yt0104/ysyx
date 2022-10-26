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
    VL_OUT8(end_state,0,0);
    VL_IN(inst,31,0);

    // LOCAL SIGNALS
    CData/*4:0*/ top__DOT__rd;
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__rs2;
    CData/*0:0*/ top__DOT__u_EXU__DOT__wenR;
    IData/*31:0*/ top__DOT__op;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__u_EXU__DOT__dest;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_EXU__DOT__u_reg__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
