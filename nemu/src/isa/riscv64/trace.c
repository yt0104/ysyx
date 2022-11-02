
#include <common.h>


//ITRACE
#define MAX_INST_TO_SAVE 20
char iringbuf [MAX_INST_TO_SAVE][128];
int inst_p = 0;

void update_iringbuf(char *s){
  strcpy(iringbuf[inst_p], s);
  inst_p = (inst_p+1) % MAX_INST_TO_SAVE;

};

void puts_iringbuf(){
  printf("%d LAST INSTS is shown:\n",MAX_INST_TO_SAVE);
  for(int i = inst_p; i < inst_p + MAX_INST_TO_SAVE; i++){
    if(*iringbuf[i%MAX_INST_TO_SAVE] != '\0') puts(iringbuf[i%MAX_INST_TO_SAVE]);
  }
};

//FTRACE