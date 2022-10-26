// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINST__SYMS_H_
#define VERILATED_VINST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vinst.h"

// INCLUDE MODULE CLASSES
#include "Vinst___024root.h"
#include "Vinst___024unit.h"

// SYMS CLASS (contains all model state)
class Vinst__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vinst* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vinst___024root                TOP;

    // CONSTRUCTORS
    Vinst__Syms(VerilatedContext* contextp, const char* namep, Vinst* modelp);
    ~Vinst__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
