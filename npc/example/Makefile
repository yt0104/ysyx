VSRC = $(wildcard ./div.v)
CSRC = $(wildcard ./main_div.cpp)
ELF  = $(wildcard ./obj_dir/Vdiv)

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



 .PHONY:clean sim all gtk
