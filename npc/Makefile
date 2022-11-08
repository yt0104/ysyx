VSRC = $(wildcard ./vsrc/top.sv)
CSRC = $(wildcard ./csrc/main.cpp)
ELF  = $(wildcard ./obj_dir/Vtop)
TOPNAME = top
IMG ?=  

CSRC += ./csrc/memory.cpp

all:
	@echo "verilator!"
	verilator -Wall $(VSRC) $(CSRC) --top-module $(TOPNAME) --cc --trace --exe --build
	
run:all
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "sim RTL!"
	$(ELF) $(IMG)
	
gtk:sim
	@echo "gtkwave!"
	gtkwave wave.vcd
	

clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile


 .PHONY:clean sim all gtk
