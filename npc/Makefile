VSRC = $(shell find $(abspath ./vsrc) -name "*.sv")	#找到目录下的v文件
CSRC = $(wildcard ./csrc/main.cpp)
ELF  = $(wildcard ./obj_dir/VIDU)

all:
	@echo "verilator!"
	verilator -Wall $(VSRC) $(CSRC) --cc --trace --exe --build
	
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
