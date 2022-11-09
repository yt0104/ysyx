#include "common.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;     // 仿真时间戳
int sim_time = 1000;   // 最大仿真时间戳



#define   CONFIG_WATCHPOINT   
//#define   CONFIG_ITRACE       


char logbuf[128];

static void print_inst(){
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "#time =%2d  0x%016lx :", main_time, top->pc);
    int ilen = 4;
    uint8_t *inst = (uint8_t *)&top->inst;
    for (int i = ilen - 1; i >= 0; i --) {
      p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
#ifdef CONFIG_ITRACE
    disassemble(p, logbuf + sizeof(logbuf) - p,
         top->pc, (uint8_t *)&top->inst, ilen);
#endif
    puts(logbuf);

}




static void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

extern "C" void sim_exit(int state){
  switch (state)
  {
  case 0: 
    printf("---SimMessage: HIT GOOD TRAP!\n");
    break;
  case 1:
    printf("---SimMessage: HIT BAD TRAP\n");
    printf("---break: ");
    print_inst();
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
    if(n <= 20) print_inst();
    step_once(top);

#ifdef CONFIG_WATCHPOINT
    int NO; char expr[32]; uint64_t val1,val2;
    if ( trace_point(&NO, expr, &val1, &val2) ){
      print_inst();
      printf("watchpoint %d: %s has changed from %ld to %ld\n",NO,expr,val1,val2 ); 
      break;
    }
#endif

#ifdef CONFIG_ITRACE
    //update_iringbuf();
#endif
    main_time ++;
  }
    
}



int main(int argc, char *argv[]) {

  load_img(argc, argv);

  sim_init();

  init_sdb();

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





