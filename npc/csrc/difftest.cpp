/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <dlfcn.h>
#include "common.h"

extern uint64_t *cpu_gpr;
extern Vtop *top;


extern "C" {

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut_gpr, void *dut_pc, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

}

#ifdef CONFIG_DIFFTEST

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void(*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void *, void *, bool ))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  puts("---Differential testing: ON");
  Log(ANSI_FMT("The result of every instruction will be compared with %s.", ANSI_FG_BLUE), ref_so_file );

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  
  ref_difftest_regcpy(cpu_gpr, &top->pc , DIFFTEST_TO_REF);

}

extern char *regs[];

static void checkregs() {

  uint64_t ref_gpr[32];
  uint64_t ref_pc;

  ref_difftest_regcpy(ref_gpr, &ref_pc, DIFFTEST_TO_DUT);

  for (int i = 0; i < 32; i++)
  {
    if(ref_gpr[i] != cpu_gpr[i]) {

      isa_reg_display();
      Log(ANSI_FMT("reg difftest: %s, dut=%lx, ref=%lx", ANSI_FG_RED), regs[i], cpu_gpr[i], ref_gpr[i]);
      sim_exit(4);
    }
  }
  
  if(ref_pc != top->pc) {
    Log(ANSI_FMT("pc difftest: dut=%lx, ref=%lx", ANSI_FG_RED), top->pc, ref_pc );
    sim_exit(4);
  }
  
  return;
}


void difftest_step() {

  ref_difftest_exec(1);

  checkregs();
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
void difftest_step() { }
#endif

