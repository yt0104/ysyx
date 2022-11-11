// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/top.sv:16:30
    extern void ifetch(long long pc, int* inst);
    // DPI import at vsrc/RegisterFile.sv:21:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/top.sv:15:30
    extern void sim_exit(int state);

#ifdef __cplusplus
}
#endif
