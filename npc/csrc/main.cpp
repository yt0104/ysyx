#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
//#include "svdpi.h"

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

extern void sim_exit(){
  step_and_dump_wave();
  //delete top;
  tfp->close();
  //delete contextp;
  //exit(0);
}



uint64_t pmemread(uint64_t pc){
  switch (pc)
  {
  case 0x80000000: return 0xff010113;//addi	sp,sp,-16
  case 0x80000004: return 0x00100513;//li	    a0,1
  case 0x80000008: return 0xfb010113;//addi	sp,sp,-80 
  case 0x8000000b: return 0x00100073;//ebreak 
  case 0x80000010: return 0xff010113;//addi	sp,sp,-16
  
  default: return 0x00100073;//ebreak 
  }

}

void step_one_clk(Vtop* top){
    top->inst = pmemread(top->pc);
    top->clk = 1;
    step_and_dump_wave();
    top->clk = 0;
    step_and_dump_wave();
    if(top->exit_flag) sim_exit();
}


int main() {
  sim_init();
  top->clk = 0;
  top->inst = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->rst_n = 1; step_and_dump_wave();

  int main_time = 0;     // 仿真时间戳
  int sim_time = 50;   // 最大仿真时间戳
  while (!Verilated::gotFinish() && main_time < sim_time) {

    step_one_clk(top);
    //printf("#time = %d, a = %d, b = %d, f = %d\n", main_time, a, b, top->f);
    main_time ++;
  }

  /*
  top->inst=0xff010113;   //addi	sp,sp,-16
    step_one_clk(top);      
  top->inst=0x00100513;   //li	    a0,1
    step_one_clk(top);    
  top->inst=0xfb010113;   //addi	sp,sp,-80   
    step_one_clk(top); 
  top->inst=0x00100073;   //ebreak 
    step_one_clk(top); 

  top->inst=0xff010113;   //addi	sp,sp,-16
    step_one_clk(top);      
  top->inst=0x00100513;   //li	    a0,1
    step_one_clk(top);    
  top->inst=0xfb010113;   //addi	sp,sp,-80   
    step_one_clk(top); 
  top->inst=0x00100073;   //ebreak 
    step_one_clk(top); 
*/
  sim_exit();
}











