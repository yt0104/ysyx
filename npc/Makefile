VSRC = $(wildcard ./vsrc/top.sv)
CSRC = $(wildcard ./csrc/*.cpp)
NPC  = $(wildcard ./obj_dir/Vtop)
TOPNAME = top
IMG ?=  



LDFLAGS += -LDFLAGS -lreadline #Linker pre-object arguments for makefile
LDFLAGS += -LDFLAGS -lLLVM-13
#C++ compiler arguments for makefile
CFLAGS +=  -I/usr/lib/llvm-13/include -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS  

all:
	@echo "verilator!"
	verilator -Wall $(VSRC) $(CSRC) --top-module $(TOPNAME) $(LDFLAGS) $(CFLAGS) --cc --trace --exe --build 
	
run:all
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "sim RTL!"
	$(NPC) $(IMG)
	
gtk:sim
	@echo "gtkwave!"
	gtkwave wave.vcd
	

clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile


 .PHONY:clean sim all gtk
