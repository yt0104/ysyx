VSRC = $(wildcard ./vsrc/sw.v)
CSRC = $(wildcard ./csrc/main.cpp)
ELF  = $(wildcard ./obj_dir/Vsw)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall $(VSRC) $(CSRC) --cc --trace --exe --build
	#make -C obj_dir -f Vsw.mk Vsw
	$(ELF)
	gtkwave wave.vcd
	@echo "Write this Makefile by your self."


clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile


 .PHONY:clean sim all
