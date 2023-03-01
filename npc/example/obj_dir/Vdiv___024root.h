// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdiv.h for the primary calling header

#ifndef VERILATED_VDIV___024ROOT_H_
#define VERILATED_VDIV___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdiv__Syms;
class Vdiv_VerilatedVcd;


//----------

VL_MODULE(Vdiv___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(sign_div,0,0);
    VL_IN8(divw,0,0);
    VL_IN8(div_valid,0,0);
    VL_OUT8(out_valid,0,0);
    VL_IN64(dividend,63,0);
    VL_IN64(divisor,63,0);
    VL_OUT64(quotient,63,0);
    VL_OUT64(remainder,63,0);

    // LOCAL SIGNALS
    CData/*5:0*/ div__DOT__count;
    CData/*0:0*/ div__DOT__r_sign;
    CData/*0:0*/ div__DOT__dividend_sign;
    CData/*0:0*/ div__DOT__divisor_sign;
    CData/*0:0*/ div__DOT__busy;
    CData/*0:0*/ div__DOT__busy_r;
    VlWide<3>/*64:0*/ div__DOT__sub_add;
    QData/*63:0*/ div__DOT__reg_q;
    QData/*63:0*/ div__DOT__reg_r;
    QData/*63:0*/ div__DOT__reg_b;
    QData/*63:0*/ div__DOT__op_dividend;
    QData/*63:0*/ div__DOT__op_divisor;
    QData/*63:0*/ div__DOT__reg_r2;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdiv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdiv___024root);  ///< Copying not allowed
  public:
    Vdiv___024root(const char* name);
    ~Vdiv___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdiv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
