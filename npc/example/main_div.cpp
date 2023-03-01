#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vdiv.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vdiv* top;

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
  top = new Vdiv;
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

  for (size_t i = 0; i < 30; i++)
  {
    top->sign_div = 1;
    top->divw = 1;
    top->div_valid = 1; 
    top->divisor = i -15;
    top->dividend = i*20 - 100;
    step_once();
    for (size_t j = 0; j < 80; j++)
    {
        top->div_valid = 0; 
        top->divisor = 0;
        top->dividend = 0;
        step_once();
    }
    
  }

  sim_exit();
}
