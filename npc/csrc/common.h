#include <iostream>
#include <assert.h>
#include <cstdint>
#include <string>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "verilated_dpi.h"



/*main*/
void cpu_exec(uint64_t n);
extern "C" void sim_exit(int state);


/*memory*/
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

uint64_t pmem_read(uint64_t addr, int len);
uint64_t ifetch(uint64_t addr, int len);
void load_img(int argc, char *argv[]);


/*reg*/
void isa_reg_display();
uint64_t isa_reg_str2val(const char *s, bool *success);


/*sdb*/
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

void sdb_mainloop();
void init_sdb();
void init_regex();      /*re*/
void init_wp_pool();    /*watchpoint*/
uint64_t expr(char *e, bool *success);
int set_point(char *e);
char* del_point(int no);
void print_point();
bool trace_point(int* NO, char* e, uint64_t* val1, uint64_t* val2);
