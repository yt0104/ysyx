#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
//#include "verilated_dpi.h"

extern "C" void sim_exit();


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  delete top;
  tfp->close();
  delete contextp;
  exit(0);
}



uint64_t pmemread(uint64_t pc){
  switch (pc)
  {
  case 0x80000000: return 0xff010113;//addi	sp,sp,-16
  case 0x80000004: return 0x00100513;//li	    a0,1
  case 0x80000008: return 0xfb010113;//addi	sp,sp,-80 
  case 0x8000000c: return 0x00100073;//ebreak 
  case 0x80000010: return 0xff010113;//addi	sp,sp,-16
  case 0x80000014: return 0x00100513;//li	    a0,1
  case 0x80000018: return 0xfb010113;//addi	sp,sp,-80 
  default: return 0x00100073;//ebreak 
  }

}

void step_one_clk(Vtop* top){
    top->clk = 1;
    step_and_dump_wave();
    top->clk = 0;
    step_and_dump_wave();
    
}


int main() {
  sim_init();

  top->clk = 0;
  top->inst = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //4s reset

  int main_time = 0;     // 仿真时间戳
  int sim_time = 50;   // 最大仿真时间戳
  while (!Verilated::gotFinish() && main_time < sim_time) {
    top->inst = pmemread(top->pc);
    printf("#time = %d \t pc = 0x%8.0lx, inst = 0x%8.0x\n", main_time, top->pc, top->inst);
    step_one_clk(top);
    /*
    if(top->exit_flag) {
      printf("ebreak!\n");
      sim_exit();
    }*/
    main_time ++;
  }

  sim_exit();
}











