#include "common.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;     // 仿真时间戳
int sim_time = 1000;   // 最大仿真时间戳
uint64_t lpc;
uint32_t linst;


static char logbuf[128];

void update_logbuff(){
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "#%2d  0x%016lx :", main_time, top->pc);
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

    disassemble(p, logbuf + sizeof(logbuf) - p, top->pc, (uint8_t *)&top->inst, ilen);

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
    itrace_puts_iringbuf();
    printf("---SimMessage: HIT BAD TRAP\n");
    printf("---break: ");
    puts(logbuf);
    break;
  case 2:
    printf("---SimMessage: TIME OUT!\n");
    break;
  case 3:
    printf("---SimMessage: QUIT NPC!\n");
    break; 
  case 4:
    itrace_puts_iringbuf();
    printf("---SimMessage: DIFFTEST QUIT!\n");
    printf("---break: ");
    puts(logbuf);
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
    lpc = top->pc;
    linst = top->inst;
    update_logbuff();
    if(n <= 20) puts(logbuf);
    step_once(top);
    top->inst = ifetch(top->pc, 4);

    if ( trace_point() ){ puts(logbuf); break; }

    itrace_update_iringbuf(logbuf);

    ftrace_matchFunc(lpc, top->pc, linst);

    difftest_step();

    main_time ++;
    if(main_time > sim_time) sim_exit(2);
  }
    
}



int main(int argc, char *argv[]) {

  sim_init();

  long img_size = load_img(argv[1]);

  ftrace_load_elf(argv[2]);

  init_difftest(argv[3], img_size, 1234);

  init_sdb();
  
  init_disasm("riscv64-pc-linux-gnu");

  

  top->clk = 0;
  top->inst = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->inst = ifetch(top->pc, 4); step_and_dump_wave(); // inst 
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //5s reset

  //while (!Verilated::gotFinish() && main_time < sim_time)
    
  sdb_mainloop();

}





