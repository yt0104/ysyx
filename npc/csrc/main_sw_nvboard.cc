#include <nvboard.h>
#include "Vsw.h"

static TOP_NAME sw;

void nvboard_bind_all_pins(Vsw* top);


void single_cycle() {
  sw.clk = 0; sw.eval();
  sw.clk = 1; sw.eval();
}

void reset(int n) {
  sw.rst = 1;
  while (n -- > 0) single_cycle();
  sw.rst = 0;
}

int main() {

  nvboard_bind_all_pins(&sw);
  nvboard_init();

  reset(10);
  
  while(1) {
    nvboard_update();
    single_cycle();
  }



}








