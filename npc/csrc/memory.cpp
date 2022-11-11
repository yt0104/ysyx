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

uint64_t pmem_read(uint64_t addr, int len) {
  if (likely(in_pmem(addr))) {
    return host_read(guest_to_host(addr), len);
  }
  out_of_bound(addr);
  return 0;
}


void pmem_write(uint64_t addr, int len, uint64_t data) {
  if (likely(in_pmem(addr))){
    host_write(guest_to_host(addr), len, data);
  }
  out_of_bound(addr);
  return;
}


uint64_t ifetch(uint64_t addr, int len) {
  return pmem_read(addr, len);
}

/*memory end*/
