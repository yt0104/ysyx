#include <iostream>
#include <assert.h>
#include <cstdint>
//#define uint8_t     unsigned char
//#define uint32_t    unsigned int
//#define uint64_t    unsigned long

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)


uint64_t ifetch(uint32_t addr, int len);
void load_img(int argc, char *argv[]);

