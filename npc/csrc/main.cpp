#include "common.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;

int main_time = 0;      // 仿真时间戳
long sim_time = 10000;   // 最大仿真时间戳

uint64_t lpc = 0x80000000;
uint64_t linst = 0x00000413;

char logbuf[128];       

void update_logbuff(uint64_t logpc, uint64_t loginst){
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "#%2d  0x%016lx :", main_time, logpc);
    int ilen = 4;
    uint8_t *inst = (uint8_t *)&loginst;
    for (int i = ilen - 1; i >= 0; i --) {
      p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    disassemble(p, logbuf + sizeof(logbuf) - p, logpc, (uint8_t *)&loginst, ilen);

}

static long load_img(char *bin) {
  
  char *img_file = bin;

  if (img_file == NULL) assert(0);

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) assert(0);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log(ANSI_FMT("The image is %s, size = %ld", ANSI_FG_BLUE), img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static void sim_init(){
  contextp = new VerilatedContext;
  top = new Vtop;
  contextp->traceEverOn(true);
#ifdef CONFIG_GTK
    tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");
#endif
}


extern uint64_t *cpu_gpr;

extern "C" void sim_exit(int state){

  #ifdef CONFIG_CACHE
    free_cache();
  #endif


  switch (state)
  {
  case 0: 
    if(cpu_gpr[10] == 0 ) {
      Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN));
    }
    else  {
      mtrace_puts_mtracebuf();
      itrace_puts_iringbuf();
      Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED));
    }
    break;
  case 1:
    mtrace_puts_mtracebuf();
    itrace_puts_iringbuf();
    Log(ANSI_FMT("INST ERROR(OP INV): 0x%lx", ANSI_FG_RED),top->inst);
    update_logbuff(top->pc, top->inst);
    Log(ANSI_FMT("break at: %s", ANSI_FG_RED), logbuf);
    break;
  case 2:
    mtrace_puts_mtracebuf();
    itrace_puts_iringbuf();
    Log(ANSI_FMT("TIME OUT", ANSI_FG_YELLOW));
    break;
  case 3:
    Log(ANSI_FMT("QUIT NPC", ANSI_FG_YELLOW));
    break; 
  case 4:
    mtrace_puts_mtracebuf();
    itrace_puts_iringbuf();
    Log(ANSI_FMT("DIFFTEST ERROR", ANSI_FG_RED));
    Log(ANSI_FMT("break at: %s", ANSI_FG_RED), logbuf);
    break; 
  default:
    mtrace_puts_mtracebuf();
    itrace_puts_iringbuf();
    Log(ANSI_FMT("Sim EXIT: 0x%x", ANSI_FG_RED), state);
    break;
  }

  delete top;
#ifdef CONFIG_GTK
  tfp->close();
#endif

#ifdef CONFIG_PREDICTOR
  GetPredictorReport();
#endif

  delete contextp;
  exit(0);
}

static void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
#ifdef CONFIG_GTK
  tfp->dump(contextp->time());
#endif
}

static void step_once(){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();

}

static void init_device(){
  init_vga();
  init_key();

}


#define TIMER_HZ  60
static void update_device(){
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  update_key();
  vga_update_screen();

}



extern bool device_inst;   //difftest: skip device inst
void cpu_exec(uint64_t n){

  while(n > 0)
  { 
    
    /*cpu-exec*/
    step_once();

    /*debug*/
    if(top->mainUpdate_valid){

      /*logbuff*/
      update_logbuff(lpc, linst);
      if(n <= 20) puts(logbuf);

      if ( trace_point() ){ puts(logbuf); n = 1; }

      itrace_update_iringbuf(logbuf);

      ftrace_matchFunc(lpc, top->pc, linst);

      update_device();

      difftest_step(&device_inst);

      main_time++;
#ifdef CONFIG_GTK
      if(main_time > sim_time) sim_exit(2);
#endif

#ifdef CONFIG_PREDICTOR
      GsharePredict(lpc, top->jmp_type, top->ifetch_taken, top->ifetch_pc);
#endif

      lpc = top->pc;
      linst = top->inst;
      n--;

      //if(top->pc == 0x83009168) {
      //Log(ANSI_FMT("------next pc = 0x83009168 output begin", ANSI_FG_RED));
      //isa_reg_display();
      //Log(ANSI_FMT("------next pc = 0x83009168 output end", ANSI_FG_RED));
      //}

    }


  }
    
}



int main(int argc, char *argv[]) {

  sim_init();

  long img_size = load_img(argv[1]);

  ftrace_load_elf(argv[2]);

  init_sdb();
  
  init_disasm("riscv64-pc-linux-gnu");

  init_device();

  #ifdef CONFIG_CACHE_CPP
    init_cache(14, 2);
  #endif

  #ifdef CONFIG_PREDICTOR
    GshareInit();
  #endif

  top->clk = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //5s reset

  init_difftest(argv[3], img_size, 1234); //pc=0x80000000 after reset

  //while (!Verilated::gotFinish() && main_time < sim_time)
    
  #ifdef CONFIG_AUTO_C	
    cpu_exec(-1);	//define in build.mk
  #else 
  /* Receive commands from user. */
    sdb_mainloop();
  #endif


}



