#include "common.h"

extern "C" void sim_exit(int state);

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;     // 仿真时间戳
int sim_time = 100;   // 最大仿真时间戳


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(int state){

  if(state == 0) printf("HIT GOOD TRAP!\n");
  else if(state == 1) printf("HIT BAD TRAP!\n");
  else if(state == 2) printf("TIME OUT!\n");

  delete top;
  tfp->close();
  delete contextp;
  exit(0);
}

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void step_once(Vtop* top){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();
    
}

void cpu_exec(Vtop* top, int n){
  if(n < 1) assert(0);

  for (int i = 0; i < n; i++)
  {
    top->inst = ifetch(top->pc, 4);
    if(n <= 20) printf("#time = %d \t pc = 0x%8.0lx, inst = 0x%8.0x\n", main_time, top->pc, top->inst);
    step_once(top);
    main_time ++;
  }
    
}



int main(int argc, char *argv[]) {

  load_img(argc, argv);

  sim_init();

  top->clk = 0;
  top->inst = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->inst = ifetch(top->pc, 4); step_and_dump_wave(); // inst 
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //5s reset

  while (!Verilated::gotFinish() && main_time < sim_time) {
    sdb_mainloop();
    //cpu_exec(top, 1);
  }

  sim_exit(2);
}











