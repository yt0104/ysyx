// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ifetch(long long pc, int* inst);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ifetch_TOP____024unit(QData/*63:0*/ pc, IData/*31:0*/ &inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ifetch_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    ifetch(pc__Vcvt, &inst__Vcvt);
    inst = inst__Vcvt;
}
