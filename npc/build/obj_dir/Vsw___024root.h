// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsw.h for the primary calling header

#ifndef VERILATED_VSW___024ROOT_H_
#define VERILATED_VSW___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsw__Syms;

//----------

VL_MODULE(Vsw___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vsw__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsw___024root);  ///< Copying not allowed
  public:
    Vsw___024root(const char* name);
    ~Vsw___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsw__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
