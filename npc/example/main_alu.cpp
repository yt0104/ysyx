#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Valu.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Valu* top;

static void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}


static void step_once(){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();

}

static void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Valu;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

static void sim_exit(){
  step_and_dump_wave();
  //delete top;
  tfp->close();
  //delete contextp;
  //exit(0);
}

int main() {

  sim_init();

  top->rst_n = 1; step_once();
  top->rst_n = 0; step_once();
  top->rst_n = 1; step_once();

  for (size_t i = 0; i < 10; i++)
  {
    top->mul_valid = 1; 
    top->multiplier = i;
    top->multiplicand = i + 10;
    step_once();
    for (size_t j = 0; j < 80; j++)
    {
        top->mul_valid = 0; 
        top->multiplier = 0;
        top->multiplicand = 0;
        step_once();
    }
    
  }

  sim_exit();
}
