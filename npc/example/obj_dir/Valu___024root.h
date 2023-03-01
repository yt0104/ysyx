// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Valu__Syms;
class Valu_VerilatedVcd;


//----------

VL_MODULE(Valu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(mul_valid,0,0);
    VL_OUT8(out_valid,0,0);
    VL_IN64(multiplicand,63,0);
    VL_IN64(multiplier,63,0);
    VL_OUT64(result_h,63,0);
    VL_OUT64(result_l,63,0);

    // LOCAL SIGNALS
    CData/*6:0*/ alu__DOT__cnt;
    VlWide<4>/*127:0*/ alu__DOT__result_reg;
    QData/*63:0*/ alu__DOT__multiplicand_r;
    QData/*63:0*/ alu__DOT__multiplier_r;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Valu___024root);  ///< Copying not allowed
  public:
    Valu___024root(const char* name);
    ~Valu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Valu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
