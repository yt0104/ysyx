#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "verilated_dpi.h"

extern "C" void sim_exit();

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}

void sim_exit(){
  //step_and_dump_wave();
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



uint64_t pmemread(uint64_t pc){
  switch (pc)
  {
  case 0x80000000: return 0x00000413;//li	s0,0
  case 0x80000004: return 0x00009117;//auipc	sp,0x9
  case 0x80000008: return 0xffc10113;//addi sp,sp,-4 # 80009000 <_end>
  case 0x8000000c: return 0x00c000ef;//jal	ra,80000018 <_trm_init>
  case 0x80000010: return 0x00000513;//li	a0,0
  case 0x80000014: return 0x00008067;//ret
  case 0x80000018: return 0xff010113;//addi	sp,sp,-16 
  case 0x8000001c: return 0x00000517;//auipc	a0,0x0
  case 0x80000020: return 0x01450513;//addi	a0,a0,20 # 80000030 <_etext>
  case 0x80000024: return 0x00113423;//sd	ra,8(sp) 
  case 0x80000028: return 0xfe9ff0ef;//jal	ra,80000010 <main>
  case 0x8000002c: return 0x0000006f;//j	8000002c <_trm_init+0x14> 
  default: return 0x00100073;//ebreak 
  }

}

#define uint8_t unsigned char
#define uint32_t unsigned int


#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
/*
void load_img(int argc, char *argv[]) {
  
  char *img_file = argv[1];

  if (img_file == NULL) assert(0);

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) assert(0);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return;
}

*/

int main(int argc, char *argv[]) {

  //load_img(argc, argv);

  sim_init();

  top->clk = 0;
  top->inst = 0;
  top->rst_n = 1; step_and_dump_wave();
  top->rst_n = 0; step_and_dump_wave();
  top->rst_n = 1; step_and_dump_wave();
  step_and_dump_wave();   //4s reset

  int main_time = 0;     // 仿真时间戳
  int sim_time = 50;   // 最大仿真时间戳
  while (!Verilated::gotFinish() && main_time < sim_time) {
    top->inst = pmemread(top->pc);
    printf("#time = %d \t pc = 0x%8.0lx, inst = 0x%8.0x\n", main_time, top->pc, top->inst);
    step_one_clk(top);
    
    main_time ++;
  }

  sim_exit();
}











