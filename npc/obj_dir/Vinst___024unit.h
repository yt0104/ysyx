// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst.h for the primary calling header

#ifndef VERILATED_VINST___024UNIT_H_
#define VERILATED_VINST___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vinst__Syms;
class Vinst_VerilatedVcd;


//----------

VL_MODULE(Vinst___024unit) {
  public:

    // INTERNAL VARIABLES
    Vinst__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vinst___024unit);  ///< Copying not allowed
  public:
    Vinst___024unit(const char* name);
    ~Vinst___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vinst__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
