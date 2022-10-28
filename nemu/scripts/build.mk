.DEFAULT_GOAL = app

# Add necessary options if the target is a shared library
ifeq ($(SHARE),1)
SO = -so
CFLAGS  += -fPIC
LDFLAGS += -rdynamic -shared -fPIC
endif

#Add auto_continue
ifeq ($(IMG), )
CFLAGS  += -D CONFIG_AUTO_C=1
endif


WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

INC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)$(SO)
BINARY   = $(BUILD_DIR)/$(NAME)$(SO)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<				
	@mkdir -p $(dir $@)			
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
	
	#1
	#echo + CC src/nemu-main.c
	#mkdir -p /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/
	#gcc -O2 -MMD -Wall -Werror -I/home/crofy/ysyx-workbench/nemu/include -I/home/crofy/ysyx-workbench/nemu/src/isa/riscv64/include -I/home/crofy/ysyx-workbench/nemu/src/engine/interpreter -O2  -Og -ggdb3  -DITRACE_COND=true -D__GUEST_ISA__=riscv64 -c -o /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.o src/nemu-main.c
	#/home/crofy/ysyx-workbench/nemu/tools/fixdep/build/fixdep  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.d  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.o unused >  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.d.tmp
	#mv  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.d.tmp  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/nemu-main.d

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
	
	#2
	#echo + CXX src/utils/disasm.cc
	#mkdir -p /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/
	#g++ -O2 -MMD -Wall -Werror -I/home/crofy/ysyx-workbench/nemu/include -I/home/crofy/ysyx-workbench/nemu/src/isa/riscv64/include -I/home/crofy/ysyx-workbench/nemu/src/engine/interpreter -O2  -Og -ggdb3  -DITRACE_COND=true -D__GUEST_ISA__=riscv64 -I/usr/lib/llvm-13/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -fPIE -c -o /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.o src/utils/disasm.cc
	#/home/crofy/ysyx-workbench/nemu/tools/fixdep/build/fixdep  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.d  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.o unused >  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.d.tmp
	#mv  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.d.tmp  /home/crofy/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/utils/disasm.d
	#flock /home/crofy/ysyx-workbench/nemu/../.git/ make -C /home/crofy/ysyx-workbench/nemu/.. .git_commit MSG=' "compile NEMU"'
	#sync
	
	
# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean

app: $(BINARY)

$(BINARY): $(OBJS) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

clean:
	-rm -rf $(BUILD_DIR)
