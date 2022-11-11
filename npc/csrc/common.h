#include <iostream>
#include <assert.h>
#include <cstdint>
#include <string>
#include <cstring>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "verilated_dpi.h"



#define   CONFIG_WATCHPOINT   
#define   CONFIG_ITRACE       
#define   CONFIG_FTRACE 
#define   CONFIG_DIFFTEST     



/*main*/
void cpu_exec(uint64_t n);
extern "C" void sim_exit(int state);
void update_logbuff();


/*memory*/
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

uint8_t* guest_to_host(uint64_t paddr);
uint64_t host_to_guest(uint8_t *haddr);

extern "C" void pmem_read(long long raddr, long long *rdata );
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);
extern "C" void ifetch(long long pc, long long* inst);
long load_img(char *bin);


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
void set_point(char *e);
void del_point(int no);
void print_point();
bool trace_point();


/*itrace*/
void itrace_update_iringbuf(char *s);
void itrace_puts_iringbuf();

/*ftrace*/
int ftrace_load_elf(char* elf);
void ftrace_matchFunc( uint64_t pc, uint64_t dnpc, uint32_t inst);


/*disasm*/
extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


/*difftest*/

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step();

extern "C" {
extern void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut_gpr, void *dut_pc, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
}

