VSRC = $(wildcard ./vsrc/mux21.v)
CSRC = $(wildcard ./csrc/main_mux21.cpp)
ELF  = $(wildcard ./obj_dir/Vmux21)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#make -C obj_dir -f Vsw.mk Vsw
	verilator -Wall $(VSRC) $(CSRC) --cc --trace --exe --build
	
	@echo "Write this Makefile by your self."

wave:sim
	$(ELF)
	gtkwave wave.vcd

clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile


 .PHONY:clean sim all gtk
