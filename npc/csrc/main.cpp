#include "common.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;     // 仿真时间戳
int sim_time = 10000;   // 最大仿真时间戳


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
    Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN));
    break;
  case 1:
    itrace_puts_iringbuf();
    Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED));
    Log(ANSI_FMT("break at: %s", ANSI_FG_RED), logbuf);
    puts(logbuf);
    break;
  case 2:
    Log(ANSI_FMT("TIME OUT", ANSI_FG_YELLOW));
    break;
  case 3:
    Log(ANSI_FMT("QUIT NPC", ANSI_FG_YELLOW));
    break; 
  case 4:
    itrace_puts_iringbuf();
    Log(ANSI_FMT("DIFFTEST QUIT", ANSI_FG_RED));
    Log(ANSI_FMT("break at:", ANSI_FG_RED));
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

static void step_once(){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();
    long long inst_t;

}

uint64_t lpc;
uint32_t linst;

void cpu_exec(uint64_t n){

  for (;n > 0; n --)
  { 
    /*last pc + inst*/
    lpc = top->pc;
    linst = top->inst;

    /*cpu-exec*/
    update_logbuff();
    if(n <= 20) puts(logbuf);
    step_once();

    /*debug*/
    
    if ( trace_point() ){ puts(logbuf); break; }

    itrace_update_iringbuf(logbuf);

    ftrace_matchFunc(lpc, top->pc, linst);

    difftest_step();

    if(main_time++ > sim_time) sim_exit(2);
  }
    
}



int main(int argc, char *argv[]) {

  sim_init();

  long img_size = load_img(argv[1]);

  ftrace_load_elf(argv[2]);

  init_sdb();
  
  init_disasm("riscv64-pc-linux-gnu");

  top->clk = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //5s reset

  init_difftest(argv[3], img_size, 1234);

  //while (!Verilated::gotFinish() && main_time < sim_time)
    
  #ifdef CONFIG_AUTO_C	
    cpu_exec(-1);	//define in build.mk
  #else 
  /* Receive commands from user. */
    sdb_mainloop();
  #endif


}



