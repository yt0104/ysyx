#include "common.h"


uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	printf("32 REGS is shown:\n");
	printf("$0 \t\t 0x%lx \t\t %ld\n", cpu_gpr[0 ],cpu_gpr[ 0]);
	printf("ra \t\t 0x%lx \t\t %ld\n", cpu_gpr[1 ],cpu_gpr[ 1]);
	printf("sp \t\t 0x%lx \t\t %ld\n", cpu_gpr[2 ],cpu_gpr[ 2]);
	printf("gp \t\t 0x%lx \t\t %ld\n", cpu_gpr[3 ],cpu_gpr[ 3]);
	printf("tp \t\t 0x%lx \t\t %ld\n", cpu_gpr[4 ],cpu_gpr[ 4]);
	printf("t0 \t\t 0x%lx \t\t %ld\n", cpu_gpr[5 ],cpu_gpr[ 5]);
	printf("t1 \t\t 0x%lx \t\t %ld\n", cpu_gpr[6 ],cpu_gpr[ 6]);
	printf("t2 \t\t 0x%lx \t\t %ld\n", cpu_gpr[7 ],cpu_gpr[ 7]);
  
	printf("s0 \t\t 0x%lx \t\t %ld\n", cpu_gpr[8 ],cpu_gpr[ 8]);
	printf("s1 \t\t 0x%lx \t\t %ld\n", cpu_gpr[9 ],cpu_gpr[ 9]);
	printf("a0 \t\t 0x%lx \t\t %ld\n", cpu_gpr[10],cpu_gpr[10]);
	printf("a1 \t\t 0x%lx \t\t %ld\n", cpu_gpr[11],cpu_gpr[11]);
	printf("a2 \t\t 0x%lx \t\t %ld\n", cpu_gpr[12],cpu_gpr[12]);
	printf("a3 \t\t 0x%lx \t\t %ld\n", cpu_gpr[13],cpu_gpr[13]);
	printf("a4 \t\t 0x%lx \t\t %ld\n", cpu_gpr[14],cpu_gpr[14]);
	printf("a5 \t\t 0x%lx \t\t %ld\n", cpu_gpr[15],cpu_gpr[15]);
	
	printf("a6 \t\t 0x%lx \t\t %ld\n", cpu_gpr[16],cpu_gpr[16]);
	printf("a7 \t\t 0x%lx \t\t %ld\n", cpu_gpr[17],cpu_gpr[17]);
	printf("s2 \t\t 0x%lx \t\t %ld\n", cpu_gpr[18],cpu_gpr[18]);
	printf("s3 \t\t 0x%lx \t\t %ld\n", cpu_gpr[19],cpu_gpr[19]);
	printf("s4 \t\t 0x%lx \t\t %ld\n", cpu_gpr[20],cpu_gpr[20]);
	printf("s5 \t\t 0x%lx \t\t %ld\n", cpu_gpr[21],cpu_gpr[21]);
	printf("s6 \t\t 0x%lx \t\t %ld\n", cpu_gpr[22],cpu_gpr[22]);
	printf("s7 \t\t 0x%lx \t\t %ld\n", cpu_gpr[23],cpu_gpr[23]);

	printf("s8 \t\t 0x%lx \t\t %ld\n", cpu_gpr[24],cpu_gpr[24]);
	printf("s9 \t\t 0x%lx \t\t %ld\n", cpu_gpr[25],cpu_gpr[25]);
	printf("s10\t\t 0x%lx \t\t %ld\n", cpu_gpr[26],cpu_gpr[26]);
	printf("s11\t\t 0x%lx \t\t %ld\n", cpu_gpr[27],cpu_gpr[27]);
	printf("t3 \t\t 0x%lx \t\t %ld\n", cpu_gpr[28],cpu_gpr[28]);
	printf("t4 \t\t 0x%lx \t\t %ld\n", cpu_gpr[29],cpu_gpr[29]);
	printf("t5 \t\t 0x%lx \t\t %ld\n", cpu_gpr[30],cpu_gpr[30]);
	printf("t6 \t\t 0x%lx \t\t %ld\n", cpu_gpr[31],cpu_gpr[31]);
	
	return;

}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  
  *success = true;
  for(int i=0;i<32;i++){
  	if(strcmp(s,regs[i])==0) return cpu_gpr[i];
  }
  
  *success = false;
  return 0;
  
}
