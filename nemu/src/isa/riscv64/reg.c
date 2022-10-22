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

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	printf("$0 \t\t 0x%lx \t\t %d\n",gpr(0),*regs[0]);
	printf("ra \t\t 0x%lx \t\t %d\n",gpr(1),*regs[1]);
	printf("sp \t\t 0x%lx \t\t %d\n",gpr(2),*regs[2]);
	printf("gp \t\t 0x%x \t\t %d\n",*regs[3],*regs[3]);
	printf("tp \t\t 0x%x \t\t %d\n",*regs[4],*regs[4]);
	printf("t0 \t\t 0x%x \t\t %d\n",*regs[5],*regs[5]);
	printf("t1 \t\t 0x%x \t\t %d\n",*regs[6],*regs[6]);
	printf("t2 \t\t 0x%x \t\t %d\n",*regs[7],*regs[7]);
	
	printf("s0 \t\t 0x%x \t\t %d\n",*regs[8],*regs[8]);
	printf("s1 \t\t 0x%x \t\t %d\n",*regs[9],*regs[9]);
	printf("a0 \t\t 0x%x \t\t %d\n",*regs[10],*regs[10]);
	printf("a1 \t\t 0x%x \t\t %d\n",*regs[11],*regs[11]);
	printf("a2 \t\t 0x%x \t\t %d\n",*regs[12],*regs[12]);
	printf("a3 \t\t 0x%x \t\t %d\n",*regs[13],*regs[13]);
	printf("a4 \t\t 0x%x \t\t %d\n",*regs[14],*regs[14]);
	printf("a5 \t\t 0x%x \t\t %d\n",*regs[15],*regs[15]);
	
	printf("a6 \t\t 0x%x \t\t %d\n",*regs[16],*regs[16]);
	printf("a7 \t\t 0x%x \t\t %d\n",*regs[17],*regs[17]);
	printf("s2 \t\t 0x%x \t\t %d\n",*regs[18],*regs[18]);
	printf("s3 \t\t 0x%x \t\t %d\n",*regs[19],*regs[19]);
	printf("s4 \t\t 0x%x \t\t %d\n",*regs[20],*regs[20]);
	printf("s5 \t\t 0x%x \t\t %d\n",*regs[21],*regs[21]);
	printf("s6 \t\t 0x%x \t\t %d\n",*regs[22],*regs[22]);
	printf("s7 \t\t 0x%x \t\t %d\n",*regs[23],*regs[23]);
	
	printf("s8 \t\t 0x%x \t\t %d\n",*regs[24],*regs[24]);
	printf("s9 \t\t 0x%x \t\t %d\n",*regs[25],*regs[25]);
	printf("s10 \t\t 0x%x \t\t %d\n",*regs[26],*regs[26]);
	printf("s11 \t\t 0x%x \t\t %d\n",*regs[27],*regs[27]);
	printf("t3 \t\t 0x%x \t\t %d\n",*regs[28],*regs[28]);
	printf("t4 \t\t 0x%x \t\t %d\n",*regs[29],*regs[29]);
	printf("t5 \t\t 0x%x \t\t %d\n",*regs[30],*regs[30]);
	printf("t6 \t\t 0x%x \t\t %d\n",*regs[31],*regs[31]);
	
	return;

}

word_t isa_reg_str2val(const char *s, bool *success) {
  
  *success = true;
  for(int i=0;i<32;i++){
  
  	if(strcmp(s,regs[i])==0) return *regs[i];
  
  }
  
  
  *success = false;
  return 0;
  
}
