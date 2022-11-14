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


#define likely(cond)   __builtin_expect(cond, 1)

static bool in_pmem(uint64_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static void out_of_bound(uint64_t addr) {
  Log(ANSI_FMT("address = %16lx is out of bound", ANSI_FG_RED), addr);
  assert(0);
}

extern "C" void pmem_read(long long raddr, long long *rdata ) {
  if (likely(in_pmem(raddr))) {
    *rdata = host_read(guest_to_host(raddr), 8); 
     mtrace_read(raddr, 8, *rdata);
    return;
  }
  out_of_bound(raddr);
  return;
}


extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  if (likely(in_pmem(waddr))){
    int len = 0;
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
      len ++;
    }
    mtrace_write(waddr-len, len, wdata);
    return;
  }
  out_of_bound(waddr);
  return;
}


extern "C" void ifetch(long long pc, int* inst) {
  if (likely(in_pmem(pc))) {
    *inst = host_read(guest_to_host(pc), 4);
    return;
  }
  out_of_bound(pc);
  return;
}



/*memory end*/
