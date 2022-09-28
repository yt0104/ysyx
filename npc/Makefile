VSRC = $(wildcard ./vsrc/sw.v)
CSRC = $(wildcard ./csrc/sw_main.cpp)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall sw.v sw_main.cpp --cc --trace --exe --build
	#make -C obj_dir -f Vsw.mk Vsw
	./obj_dir/Vsw
	gtkwave wave.vcd
	@echo "Write this Makefile by your self."

 .PHONY:clean
clean:
	rm -rf obj_dir wave.vcd	


include ../Makefile
