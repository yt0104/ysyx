#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include "NDL.h"

int main() {

  NDL_Init(0);
  int sec = 1;
  
  while (1) {

    while( NDL_GetTicks() < sec *1000) ;

    int msec = NDL_GetTicks();

    printf("msec=%d GMT (",msec);
    if (sec == 1) {
      printf("%d second).\n", sec);
    } else {
      printf("%d seconds).\n", sec);
    }
    sec ++;
    if(sec >= 10) break;
  }

  NDL_Quit();

  return 0;
}
