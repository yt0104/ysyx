VSRC = $(wildcard ./vsrc/top.sv)
CSRC = $(wildcard ./vsrc/main.cpp)
ELF  = $(wildcard ./obj_dir/Vtop)
TOPNAME = top

all:
	@echo "verilator!"
	verilator -Wall $(VSRC) $(CSRC) --top-module $(TOPNAME) --cc --trace --exe --build
	
sim:all
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "sim RTL!"
	$(ELF)
	
gtk:sim
	@echo "gtkwave!"
	gtkwave wave.vcd
	

clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile


 .PHONY:clean sim all gtk
