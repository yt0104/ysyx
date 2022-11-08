#include "common.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;     // 仿真时间戳
int sim_time = 1000;   // 最大仿真时间戳


static void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(int state){
  switch (state)
  {
  case 0: 
    printf("---SimMessage: HIT GOOD TRAP!\n");
    break;
  case 1:
    printf("---SimMessage: HIT BAD TRAP\n");
    printf("---break: time = %d \t pc = 0x%.8lx, inst = 0x%.8x\n", main_time, top->pc, top->inst);
    break;
  case 2:
    printf("---SimMessage: TIME OUT!\n");
    break;
  case 3:
    printf("---SimMessage: QUIT NPC!\n");
    break; 
  default:
    printf("---SimMessage: Unknown EXIT!\n");
    break;
  }

  delete top;
  tfp->close();
  delete contextp;
  exit(0);
}

static void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

static void step_once(Vtop* top){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();
    
}

void cpu_exec(uint64_t n){

  for (;n > 0; n --)
  {
    top->inst = ifetch(top->pc, 4);
    if(n <= 20) printf("#time = %d \t pc = 0x%.8lx \t inst = 0x%.8x\n", main_time, top->pc, top->inst);
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
  }

  sim_exit(2);
}











