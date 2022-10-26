// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIDU__SYMS_H_
#define VERILATED_VIDU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VIDU.h"

// INCLUDE MODULE CLASSES
#include "VIDU___024root.h"
#include "VIDU___024unit.h"

// SYMS CLASS (contains all model state)
class VIDU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VIDU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VIDU___024root                 TOP;

    // CONSTRUCTORS
    VIDU__Syms(VerilatedContext* contextp, const char* namep, VIDU* modelp);
    ~VIDU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
