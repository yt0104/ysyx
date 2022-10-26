#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VIDU.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VIDU* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VIDU;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  //delete top;
  tfp->close();
  //delete contextp;
  //exit(0);
}

int main() {
  sim_init();

  top->inst=0xff010113;   //addi	sp,sp,-16
    step_and_dump_wave();      
  top->inst=0x00100513;   //li	    a0,1
    step_and_dump_wave();   
  top->inst=0xfb010113;   //addi	sp,sp,-80   
    step_and_dump_wave();
  top->inst=0x00100073;   //ebreak 
    step_and_dump_wave();

  sim_exit();
}
