#include "common.h"

/********************************************/
/*memory*/

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - CONFIG_MBASE; }

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


static uint64_t host_read(void *addr, int len){
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}


uint64_t pmem_read(uint64_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

uint64_t ifetch(uint64_t addr, int len) {
  return pmem_read(addr, len);
}

/*memory end*/
