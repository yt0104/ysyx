#include "common.h"

/********************************************/
/*memory*/

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint64_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

long load_img(char *bin) {
  
  char *img_file = bin;

  if (img_file == NULL) assert(0);

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) assert(0);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("---The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


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
  printf("address = %16lx is out of bound\n", addr);
  assert(0);
}

extern "C" void pmem_read(long long raddr, long long *rdata ) {
  if (likely(in_pmem((uint64_t)raddr))) {
    *rdata = host_read(guest_to_host(raddr), 8);
    return;
  }
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
        wdata >> 8;
        host_write(guest_to_host(waddr), 1, wtemp);
      }
      wmask >> 1;
    }
    
    
  }
  out_of_bound(waddr);
  return;
}


extern "C" void ifetch(long long pc, long long* inst) {
  long long inst_t;
  pmem_read(pc, &inst_t);
  *inst = inst_t &0xffffffff;
  return;
}

/*memory end*/
