#include "common.h"
#include <inttypes.h>


typedef struct cache_line {
    uint8_t valid;
    uint8_t dirty;
    uint64_t tag;
    uint8_t data[BLOCK_SIZE];
} cache_line_t;

typedef cache_line_t* cache_set_t;
typedef cache_set_t*  cache_t;

cache_t cache;

uint64_t set_width;   //6bit: 64 set
uint64_t line_width;  //2bit: 4 line per set

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

static inline uint64_t choose(uint64_t n) { return rand() % n; }

#define cache_message 0
#define cache_printf if(cache_message)printf

uint64_t cache_read(uint64_t addr) {

  uint64_t inaddr = BITS(addr, BLOCK_WIDTH - 1 , 0) & ~0x7;
  uint64_t set = BITS(addr, BLOCK_WIDTH + set_width - 1, BLOCK_WIDTH);
  uint64_t tag = BITS(addr, 63, BLOCK_WIDTH + set_width);
  uint64_t block_num = BITS(addr, 63, BLOCK_WIDTH);

  //hit
  for (size_t i = 0; i < exp2(line_width); i++)
  {
    if(cache[set][i].tag == tag && cache[set][i].valid == 1){   
      //read cache
      cache_printf("  cache_read: hit\n");
      uint64_t *p = (uint64_t*)(cache[set][i].data + inaddr);
      return *p;
    }
  }
  //not hit
  for (size_t i = 0; i < exp2(line_width); i++)
  {
    if(cache[set][i].valid == 0){   //invalid line
      cache_printf("cache_read: new line\n");
      //update cache_line
      cache[set][i].valid = 1;
      cache[set][i].tag = tag;
      mem_block_read(block_num, cache[set][i].data);
      cache[set][i].dirty = 0;
      //read cache
      uint64_t *p = (uint64_t*)(cache[set][i].data + inaddr);
      return *p;
    }
  }
  //random replace
  cache_printf("cache_read: random\n");
  uint64_t rand_line = choose(exp2(line_width));
  //write back
  if(cache[set][rand_line].dirty == 1){
    uint64_t dirty_block_num = (cache[set][rand_line].tag << (set_width)) + (set );
    mem_block_write(dirty_block_num, cache[set][rand_line].data);
  }
  //update cache_line
  cache[set][rand_line].valid = 1;
  cache[set][rand_line].tag = tag;
  mem_block_read(block_num, cache[set][rand_line].data);
  cache[set][rand_line].dirty = 0;
  //read cache
  uint64_t *p = (uint64_t*)(cache[set][rand_line].data + inaddr);
  return *p;


}

void cache_write(uint64_t addr, uint64_t data, char wmask8) {

  uint64_t inaddr = BITS(addr, BLOCK_WIDTH - 1 , 0) & ~0x7;
  uint64_t set = BITS(addr, BLOCK_WIDTH + set_width - 1, BLOCK_WIDTH);
  uint64_t tag = BITS(addr, 63, BLOCK_WIDTH + set_width);
  uint64_t block_num = BITS(addr, 63, BLOCK_WIDTH);

  uint64_t wmask = 0;
  for (int i = 0; i < 8; i++)
  {
    if( BITS(wmask8, 7, 7)){
      wmask = (wmask << 8) + 0xff;
    }
    else {
      wmask = (wmask << 8);
    }
    wmask8 = wmask8 << 1;
  }

  //hit
  for (size_t i = 0; i < exp2(line_width); i++)
  {
    if(cache[set][i].tag == tag && cache[set][i].valid == 1){   
      //write cache
      uint64_t *p = (uint64_t*)(cache[set][i].data + inaddr);
      *p = (*p & ~wmask) | (data & wmask);
      cache[set][i].dirty = 1;
      cache_printf("cache_write: hit\n");
      return;
    }
  }
  //not hit
  for (size_t i = 0; i < exp2(line_width); i++)
  {
    if(cache[set][i].valid == 0){   //invalid line      
      //write cache
      mem_block_read(block_num, cache[set][i].data);
      cache[set][i].valid = 1;
      cache[set][i].dirty = 1;
      cache[set][i].tag = tag;
      uint64_t *p = (uint64_t*)(cache[set][i].data + inaddr);
      *p = (*p & ~wmask) | (data & wmask);
      cache_printf("cache_write: new line\n");
      return;
    }
  }
  //random replace
  uint64_t rand_line = choose(exp2(line_width));
  //write back
  if(cache[set][rand_line].dirty == 1){
    uint64_t dirty_block_num = (cache[set][rand_line].tag << (set_width)) + (set);
    mem_block_write(dirty_block_num, cache[set][rand_line].data);
  }
  //update cache_line
  cache[set][rand_line].dirty = 1;
  cache[set][rand_line].tag = tag;
  mem_block_read(block_num, cache[set][rand_line].data);
  //write cache
  uint64_t *p = (uint64_t*)(cache[set][rand_line].data + inaddr);
  *p = (*p & ~wmask) | (data & wmask);
  cache_printf("cache_write: random\n");
  return;

}

void init_cache(int total_size_width, int associativity_width) {
  set_width = total_size_width - associativity_width - BLOCK_SIZE;  //64sets
  line_width= associativity_width;  //4 lines

  cache = (cache_line_t**)malloc(exp2(set_width) * sizeof(cache_line_t*));
  for (size_t i = 0; i < exp2(set_width); i++)
  {
    cache[i] = (cache_line_t*)malloc(exp2(line_width) * sizeof(cache_line_t));
  }

  for (size_t i = 0; i < exp2(set_width); i++)
    for (size_t j = 0; j < exp2(line_width); j++){
      cache[i][j].valid = 0;
      cache[i][j].dirty = 1;
    }

  uint32_t seed = time(0);
  srand(seed);
  cache_printf("random seed = %u\n", seed);

}

void free_cache() {

  for (size_t i = 0; i < exp2(set_width); i++)
  {
    free(cache[i]);
  }
  free(cache);

}

void display_statistic(void) {
}
