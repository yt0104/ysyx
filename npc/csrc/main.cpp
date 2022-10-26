#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

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
  //delete top;
  tfp->close();
  //delete contextp;
  //exit(0);
}



void step_one_clk(Vtop* top){
    top->clk = 1;
    step_and_dump_wave();
    top->clk = 0;
    step_and_dump_wave();
    if(top->end_state) sim_exit();
}


int main() {
  sim_init();

  top->inst=0xff010113;   //addi	sp,sp,-16
    step_one_clk(top);      
  top->inst=0x00100513;   //li	    a0,1
    step_one_clk(top);    
  top->inst=0xfb010113;   //addi	sp,sp,-80   
    step_one_clk(top); 
  top->inst=0x00100073;   //ebreak 
    step_one_clk(top); 

  sim_exit();
}
