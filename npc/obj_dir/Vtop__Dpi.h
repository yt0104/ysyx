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
    // DPI import at vsrc/AXI_if/AXI_slave_SRAM.sv:34:30
    extern void ifetch(long long pc, long long* inst);
    // DPI import at vsrc/AXI_if/AXI_slave_SRAM.sv:35:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/AXI_if/AXI_slave_SRAM.sv:37:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/regfile/RegisterFile.sv:21:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/idu/IDU.sv:205:30
    extern void sim_exit(int state);

#ifdef __cplusplus
}
#endif
