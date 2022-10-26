// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst.h for the primary calling header

#ifndef VERILATED_VINST___024ROOT_H_
#define VERILATED_VINST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vinst__Syms;
class Vinst_VerilatedVcd;


//----------

VL_MODULE(Vinst___024root) {
  public:

    // INTERNAL VARIABLES
    Vinst__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vinst___024root);  ///< Copying not allowed
  public:
    Vinst___024root(const char* name);
    ~Vinst___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vinst__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
