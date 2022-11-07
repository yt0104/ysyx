#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "verilated_dpi.h"


extern "C" void sim_exit(int state);

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_NONE       "\33[0m"
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
// macro stringizing
#define str_temp(x) #x
#define str(x) str_temp(x)


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(int state){

  if(state == 0) ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN);
  else if(state == 1) printf("halt\n");
  else if(state == 2) printf("time out\n");

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

void step_one_clk(Vtop* top){
    top->clk = 0;
    step_and_dump_wave();
    top->clk = 1;
    step_and_dump_wave();
    
}

/********************************************/
/*memory*/

#define uint8_t     unsigned char
#define uint32_t    unsigned int
#define uint64_t    unsigned long

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)


static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

void load_img(int argc, char *argv[]) {
  
  char *img_file = argv[1];

  if (img_file == NULL) assert(0);

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) assert(0);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return;
}


uint64_t host_read(void *addr, int len){
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}


uint64_t pmem_read(uint32_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

uint64_t ifetch(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

/*memory end*/




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

  int main_time = 0;     // 仿真时间戳
  int sim_time = 50;   // 最大仿真时间戳
  while (!Verilated::gotFinish() && main_time < sim_time) {

    top->inst = ifetch(top->pc, 4);
    printf("#time = %d \t pc = 0x%8.0lx, inst = 0x%8.0x\n", main_time, top->pc, top->inst);
    step_one_clk(top);
    
    main_time ++;
  }

  sim_exit(2);
}











