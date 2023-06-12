#include "common.h"

/********************************************/
/*memory*/


static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint64_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }


static uint64_t host_read(void *addr, int len){
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}


static void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
}

/*cache*/
#define addr_offset_bit(addr) (((addr) & 0x7) * 8)
#define mask_offset_bit(addr) (((addr) & 0x7) )

void mem_block_read(uintptr_t block_num, uint8_t *buf) {
  memcpy(buf, pmem - CONFIG_MBASE + (block_num << BLOCK_WIDTH), BLOCK_SIZE);
}

void mem_block_write(uintptr_t block_num, const uint8_t *buf) {
  memcpy(pmem - CONFIG_MBASE + (block_num << BLOCK_WIDTH), buf, BLOCK_SIZE);
}

extern "C" void dpi_mem_block_read(long long block_num, uint8_t* buf){
  printf("dpi_mem_block_read : block_num = %llx\n", block_num);
  mem_block_read(block_num, buf);
}
extern "C" void dpi_mem_block_write(long long block_num, const uint8_t *buf){
  printf("dpi_mem_block_write: block_num = %llx\n", block_num);
  mem_block_write(block_num, buf);
}

#define likely(cond)   __builtin_expect(cond, 1)

static bool in_pmem(uint64_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static bool in_device(uint64_t addr) {
  return addr - DEVICE_BASE < DEVICE_SIZE;
}



static void out_of_bound(uint64_t addr) {
  Log(ANSI_FMT("time = %ld, address = %16lx is out of bound", ANSI_FG_RED),main_time, addr);
  sim_exit(-1);
  assert(0);
}


bool device_inst = false;   //difftest: skip device inst
extern "C" void pmem_read(long long raddr, long long *rdata ) {

  if (likely(in_pmem(raddr))) {

    *rdata = host_read(guest_to_host(raddr), 8); 

    //mtrace
    if(top->pc == raddr) return;  //cmd
    mtrace_read(raddr, 8, *rdata);
    char s[128];
    sprintf(s,"MTRACE--> #%3ld, pc = %8lx read : addr = %8llx   data = %16llx\n", main_time, top->pc, raddr, *rdata);
    mtrace_update_mtracebuf(s);

    return;
  }
  else if (likely(in_device(raddr))){

    device_inst = true;

    dtrace_read(raddr, 8, *rdata);

    if(raddr == RTC_ADDR) {   /*mmio:rtc*/
      *rdata = get_time();
      return;
    }
    Log(ANSI_FMT("pmem read: %llx in device not found", ANSI_FG_RED), raddr);
    return;
  }

  *rdata = 0;
  Log(ANSI_FMT("pmem read out of bound", ANSI_FG_RED));
  out_of_bound(raddr);
  return;
}


extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {

  if (likely(in_pmem(waddr))){

    uint64_t wtemp = 0;
    for (int i = 0; i < 8; i++)
    {
      if( wmask & 0x01){
        wtemp = wdata&0xff ;
        wdata = wdata >> 8;
        host_write(guest_to_host(waddr), 1, wtemp);
      }
      wmask = wmask >> 1;
      waddr ++;
    }


    //mtrace
    char wmask8 = wmask;
    int len = 0;
    for (int i = 0; i < 8; i++){
      if( wmask8 & 0x01) len ++;
      wmask8 = wmask8 >> 1;
    }
    mtrace_write(waddr-8, len, wdata);

    char s[128];
    sprintf(s,"MTRACE--> #%3ld, pc = %8lx write: addr = %8llx  data = %16llx  len = %d\n", main_time, top->pc, waddr, wdata, len);
    mtrace_update_mtracebuf(s);

    return;
  }
  else if (likely(in_device(waddr))){

    device_inst = true;

    dtrace_write(waddr, wmask, wdata);

    if(waddr == SERIAL_PORT) {   /*mmio:uart*/
      printf("%c",(char)wdata & 0xFF);
      return;
    }
    Log(ANSI_FMT("pmem write: %llx in device not found", ANSI_FG_RED), waddr);
    return;
  }
  Log(ANSI_FMT("pmem write out of bound", ANSI_FG_RED));  
  out_of_bound(waddr);
  return;
}


extern "C" void ifetch(long long pc, long long* inst) {
  
  if (likely(in_pmem(pc))) {
    *inst = host_read(guest_to_host(pc), 8);
    return;
  }
  Log(ANSI_FMT("ifetch", ANSI_FG_RED));  
  out_of_bound(pc);
  return;
}



/*memory end*/
