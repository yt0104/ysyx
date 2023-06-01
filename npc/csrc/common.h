#include <iostream>
#include <assert.h>
#include <cstdint>
#include <string>
#include <cstring>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "verilated_dpi.h"

#include "util.h"

#define   CONFIG_AUTO_C
//#define   CONFIG_WATCHPOINT   
#define   CONFIG_ITRACE       
//#define   CONFIG_FTRACE 
//#define   CONFIG_MTRACE_OUT  
//#define   CONFIG_MTRACE
//#define   CONFIG_DTRACE
#define   CONFIG_DIFFTEST   
//#define   CONFIG_CACHE_CPP

//#define   CONFIG_GTK


extern Vtop* top;
extern int main_time;

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
#define IO_SPACE_MAX (2 * 1024 * 1024)

uint8_t* guest_to_host(uint64_t paddr);
uint64_t host_to_guest(uint8_t *haddr);

#define DEVICE_BASE     0xa0000000
#define DEVICE_SIZE     0x1000
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define MMIO_BASE       0xa0000000
#define FB_ADDR         (MMIO_BASE   + 0x1000000)

void mem_block_read(uintptr_t block_num, uint8_t *buf);
void mem_block_write(uintptr_t block_num, const uint8_t *buf);

extern "C" void dpi_mem_block_read(long long block_num, uint8_t* buf);
extern "C" void dpi_mem_block_write(long long block_num, const uint8_t *buf);

extern "C" void pmem_read(long long raddr, long long *rdata );
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);
extern "C" void ifetch(long long pc, long long* inst);

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#define exp2(x) (1 << (x))
#define BLOCK_WIDTH  6  // 64B
#define BLOCK_SIZE exp2(BLOCK_WIDTH)

static uint8_t *io_space = (uint8_t*)malloc(IO_SPACE_MAX);;
static uint8_t *p_space = io_space;

static inline uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}


/*cache*/
uint64_t cache_read(uint64_t addr);
void cache_write(uint64_t addr, uint64_t data, char wmask8);
void init_cache(int total_size_width, int associativity_width);
void free_cache();


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

/*mtrace*/
void mtrace_read(uint64_t addr, int len, uint64_t data);
void mtrace_write(uint64_t addr, int len, uint64_t data);
void mtrace_update_mtracebuf(char *s);
void mtrace_puts_mtracebuf();

/*dtrace*/
void dtrace_read(uint64_t addr, int len, uint64_t data);
void dtrace_write(uint64_t addr, int len, uint64_t data);

/*disasm*/
extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


/*difftest*/

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(bool *skip) ;

extern "C" {
extern void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut_gpr, void *dut_pc, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
}

/*timer*/
uint64_t get_time();

/*key*/
void update_key();
uint32_t read_key();
void init_key();

/*vga*/
void vga_update_screen();
void write_vgactl(uint64_t data);
void write_vgasync(uint64_t data);
void write_vgafb(uint64_t addr, uint64_t data);
void init_vga();
