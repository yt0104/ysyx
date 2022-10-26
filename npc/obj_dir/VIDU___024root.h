// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIDU.h for the primary calling header

#ifndef VERILATED_VIDU___024ROOT_H_
#define VERILATED_VIDU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VIDU__Syms;
class VIDU_VerilatedVcd;


//----------

VL_MODULE(VIDU___024root) {
  public:

    // PORTS
    VL_IN(inst,31,0);
    VL_OUT(dest,31,0);
    VL_OUT(rs1,31,0);
    VL_OUT(rs2,31,0);
    VL_OUT(op,31,0);
    VL_OUT64(imm,63,0);

    // INTERNAL VARIABLES
    VIDU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIDU___024root);  ///< Copying not allowed
  public:
    VIDU___024root(const char* name);
    ~VIDU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VIDU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
