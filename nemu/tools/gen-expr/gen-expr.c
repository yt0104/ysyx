/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int nr_buf = 0; 

static void gen_num(uint32_t max){
  uint32_t num = rand() % max;
  char str_num[32];
  sprintf(str_num, "%d", num); 
  for(int i=0;str_num[i]!='\0';i++){
    buf[nr_buf++] = str_num[i];
  }
}


static void gen_op(){
  switch(rand()%4){
  case 0: buf[nr_buf++] = '+';break;
  case 1: buf[nr_buf++] = '-';break;
  case 2: buf[nr_buf++] = '*';break;
  default: buf[nr_buf++] = '/';break;
  }

}


static void gen(char c){
  buf[nr_buf++] = c;
}


static void gen_rand_expr() {
  int cmd;
  if(nr_buf>10) cmd = 1;
  else if(nr_buf>1) cmd = rand()%3;
  else cmd = rand()%4;
  
  switch(cmd){
    case 0: gen('('); gen_rand_expr(); gen(')'); break;
    case 1: gen_num(100);break;
    default: gen_rand_expr(); gen_op(); gen_rand_expr(); break;
  }
  buf[nr_buf] = '\0';
}



int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 10;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    nr_buf = 0;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);	//  buf --> codebuf(main)

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);			// codebuf(main) --> fp:code.c
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");	//gcc code.c --> expr
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    if(fscanf(fp, "%d", &result) >0){			//fp:expr --> int result
	printf("%u %s\n", result, buf);
	}
    pclose(fp);
  }
  return 0;
}
