
`include "vsrc/common/InstFmt.sv"
`include "vsrc/common/para.sv"
`include "vsrc/common/multiport_ram.sv"

`include "vsrc/ifu/ifetch_cache.sv"
`include "vsrc/ifu/icache.sv"
`include "vsrc/ifu/icache_axi.sv"

`include "vsrc/idu/decode.sv"

`include "vsrc/alu/ALU.sv"
`include "vsrc/alu/shifter.sv"
`include "vsrc/alu/adder.sv"
`include "vsrc/alu/mult_wallace.sv"

`include "vsrc/exu/EXU_cache.sv"
`include "vsrc/exu/LSU.sv"
`include "vsrc/exu/BJU.sv"
`include "vsrc/exu/SYS_control.sv"

`include "vsrc/alu/mul.sv"
`include "vsrc/alu/div.sv"

`include "vsrc/regfile/RegisterFile.sv"
`include "vsrc/regfile/CSRegisterFile.sv"
`include "vsrc/regfile/RMU.sv"

`include "vsrc/AXI_if/AXI_slave_SRAM.sv"
`include "vsrc/AXI_if/AXI_slave_ifench.sv"
`include "vsrc/AXI_if/AXI_master_SRAM.sv"
`include "vsrc/AXI_if/AXI_arbiter_SRAM.sv"
`include "vsrc/AXI_if/cache.sv"

