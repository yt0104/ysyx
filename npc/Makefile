VSRC = $(wildcard ./vsrc/top.sv)
CSRC = $(wildcard ./csrc/*.cpp)
CSRC+= $(wildcard ./csrc/*.c)
NPC  = $(wildcard ./obj_dir/Vtop)
TOPNAME = top
IMG ?=  
ELF ?=
DIFF = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so

LDFLAGS += -LDFLAGS -lreadline #Linker pre-object arguments for makefile
LDFLAGS += -LDFLAGS -lLLVM-13
LDFLAGS += -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image
#C++ compiler arguments for makefile
CFLAGS += -CFLAGS -I/usr/lib/llvm-13/include -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS

all:
	@echo "verilator!"
	verilator $(VSRC) $(CSRC) --top-module $(TOPNAME) $(LDFLAGS) $(CFLAGS) --cc --trace --exe --build 
	
run:all
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "sim RTL!"
	$(NPC) $(IMG) $(ELF) $(DIFF)
	
gtk:sim
	@echo "gtkwave!"
	gtkwave wave.vcd
	

clean:
	rm -rf obj_dir wave.vcd	
	

include ../Makefile


 .PHONY:clean sim all gtk
