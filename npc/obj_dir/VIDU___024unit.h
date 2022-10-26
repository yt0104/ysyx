// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIDU.h for the primary calling header

#ifndef VERILATED_VIDU___024UNIT_H_
#define VERILATED_VIDU___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VIDU__Syms;
class VIDU_VerilatedVcd;


//----------

VL_MODULE(VIDU___024unit) {
  public:

    // INTERNAL VARIABLES
    VIDU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIDU___024unit);  ///< Copying not allowed
  public:
    VIDU___024unit(const char* name);
    ~VIDU___024unit();

    // INTERNAL METHODS
    void __Vconfigure(VIDU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
