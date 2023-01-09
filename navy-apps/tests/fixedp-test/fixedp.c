#include <stdint.h>
#include <stdio.h>
#include <fixedptc.h>


int main() {

  fixedpt a = fixedpt_rconst(1.99);
  fixedpt b = fixedpt_fromint(10);  
  fixedpt c = fixedpt_rconst(-2.01);
  int c1, c2, c3;
    /* (a + 1) * b / 2.3 */
    
    c1 = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
    c2 = fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3));
    c3 = fixedpt_div(fixedpt_muli(a + FIXEDPT_ONE, 10), fixedpt_rconst(2.3));
  int c4 = fixedpt_mul(a, b);
  int c5 = fixedpt_mul(b, c);
  int c6 = fixedpt_floor(a);
  int c7 = fixedpt_floor(b);
  int c8 = fixedpt_floor(c);
  int c9 = fixedpt_ceil(a);
  int c10 = fixedpt_ceil(b);
  int c11 = fixedpt_ceil(c);

  printf("c1 = %d\n", c1);
  printf("c2 = %d \nc3 = %d\n", c2, c3 );
  printf("c4 = %d\n", c4);
  printf("c5 = %d\n", c5);
  printf("c6 = %d \nc7 = %d\nc8 = %d\n", c6, c7, c8 );
  printf("c9 = %d \nc10 = %d\nc11 = %d\n", c9, c10, c11 );
  return 0;
}
