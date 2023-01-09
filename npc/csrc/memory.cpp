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

static bool in_device(uint64_t addr) {
  return addr - DEVICE_BASE < DEVICE_SIZE;
}

extern uint32_t screen_size();
static bool in_vgafb(uint64_t addr) {
  return addr - FB_ADDR < screen_size();
}

extern int main_time;
static void out_of_bound(uint64_t addr) {
  Log(ANSI_FMT("time = %d, address = %16lx is out of bound", ANSI_FG_RED),main_time, addr);
  assert(0);
}

bool memr_state;
bool device_inst = false;   //difftest: skip device inst

extern "C" void pmem_read(long long raddr, long long *rdata ) {

  if(memr_state)  memr_state = false;   /*every two times read once*/
  else memr_state = true;
  if(memr_state) return;

  if (likely(in_pmem(raddr))) {
    *rdata = host_read(guest_to_host(raddr), 8); 
     mtrace_read(raddr, 8, *rdata);
    return;
  }
  else if (likely(in_device(raddr))){

    device_inst = true;

    dtrace_read(raddr, 8, *rdata);

    if(raddr == RTC_ADDR) {   /*mmio:rtc*/
      *rdata = get_time();
      return;
    }
    if(raddr == KBD_ADDR) {   /*mmio:kbd*/ 
      *rdata = read_key();
      return;
    }
    Log("read device not found: addr = %8x, data = %16x", raddr, rdata);
  }

  *rdata = 0;
  out_of_bound(raddr);
  return;
}


bool memw_state;

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {

  if(memw_state)  memw_state = false;   /*every two times print once*/
  else memw_state = true;
  if(memw_state) return;

  if (likely(in_pmem(waddr))){
    int len = 0;
    uint64_t wtemp = 0;
    for (int i = 0; i < 8; i++)
    {
      if( wmask & 0x01){
        wtemp = wdata&0xff ;
        wdata = wdata >> 8;
        host_write(guest_to_host(waddr), 1, wtemp);
        len ++;
      }
      wmask = wmask >> 1;
      waddr ++;
    }
    mtrace_write(waddr-8, len, wdata);
    return;
  }
  else if (likely(in_device(waddr))){

    device_inst = true;

    dtrace_write(waddr, wmask, wdata);

    if(waddr == SERIAL_PORT) {   /*mmio:uart*/
      printf("%c",(char)wdata & 0xFF);
      return;
    }
    else if(waddr == VGACTL_ADDR){ /*mmio:vgactl*/
      write_vgactl(wdata);
      return;
    }
    else if(waddr == SYNC_ADDR){ /*mmio:vgactl*/
      write_vgasync(wdata);
      return;
    }
    Log("write device not found: addr = %8x, data = %16x", waddr, wdata);
  }

  else if(likely(in_vgafb(waddr))){
    write_vgafb(waddr, wdata);
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
