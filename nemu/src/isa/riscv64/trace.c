
#include <common.h>
#include <elf.h>
#include <stdlib.h>

//ITRACE
#define MAX_INST_TO_SAVE 40
static char iringbuf [MAX_INST_TO_SAVE][128];
static int inst_p = 0;

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
#define FUNC_SIZE 30
static char func[FUNC_SIZE];

static word_t sym_offset,str_offset;
static word_t sym_size;
static FILE *fp;
static int func_proc = 0;

int ftrace_getTab(char *elf_name)
{

    fp = fopen( elf_name, "r");
	if (NULL == fp) assert(0);

	// 解析head
	Elf64_Ehdr elf_head;
	int a;

	// 读取 head 到elf_head
	a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);   //fread参数1：读取内容存储地址，参数2：读取内容大小，参数3：读取次数，参数4：文件读取引擎
	if (0 == a) assert(0);

	// 判断elf文件类型
	if (elf_head.e_ident[0] != 0x7F ||
		elf_head.e_ident[1] != 'E' ||
		elf_head.e_ident[2] != 'L' ||
		elf_head.e_ident[3] != 'F')
		assert(0);

	// 解析section 分配内存 section * 数量
	Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
	if (NULL == shdr) assert(0);

	// 设置fp偏移量 offset，e_shoff含义
	a = fseek(fp, elf_head.e_shoff, SEEK_SET); //fseek调整指针的位置，采用参考位置+偏移量
	if (0 != a) assert(0);

	// 读取section 到 shdr, 大小为shdr * 数量
	a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	if (0 == a) assert(0);

	// 重置指针位置到文件流开头
	rewind(fp);

	// 将fp指针移到 字符串表偏移位置处
	fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);

	// 第e_shstrndx项是字符串表 定义 字节 长度 char类型 数组
	char shstrtab[shdr[elf_head.e_shstrndx].sh_size];
	char *temp = shstrtab;

	// 读取内容
	a = fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp);
	if (0 == a) assert(0);

	int match = 0;

	// 遍历
	for (int i = 0; i < elf_head.e_shnum; i++)
	{
		temp = shstrtab;
		temp = temp + shdr[i].sh_name;
        if (strcmp(temp, ".symtab") == 0) {		//该section名称
        	
        	sym_offset = shdr[i].sh_offset;
        	sym_size = shdr[i].sh_size;
			match++;
			continue;
		}
        else if (strcmp(temp, ".strtab") == 0) {		
        	
        	str_offset = shdr[i].sh_offset;
			match++;
			continue;
		}

		if(match == 2) break;
 	
	 }

	 free(shdr);

	 return match;
	
}



void ftrace_matchFunc( word_t pc, word_t dnpc, uint32_t inst){

	// 重置指针位置到文件流开头
	rewind(fp);

	// 将fp指针移到 symtab偏移位置处
	fseek(fp, sym_offset, SEEK_SET);

	int sym_num = sym_size / sizeof(Elf64_Sym);

	Elf64_Sym symtab[sym_num];
	int a;
	// 读取symtab内容
	a = fread(symtab, sym_size, 1, fp);
	if (0 == a) assert(0);

	for(int i = 0; i < sym_num; i++) {
		if(dnpc >= symtab[i].st_value && dnpc < symtab[i].st_value + symtab[i].st_size && dnpc == symtab[i].st_value) {
			rewind(fp);
			fseek(fp, str_offset + symtab[i].st_name, SEEK_SET);
			a = fread(func, FUNC_SIZE, 1, fp);

			if(strcmp(func, "putch") == 0) return;	//jump putch
            
			printf("pc = %lx:", pc);
			func_proc++ ;
			for(int j=0;j<func_proc;j++){
				printf("  ");
			}
			printf("call<[%s]0x%lx>\n", func, dnpc);	
		}
		else if(dnpc >= symtab[i].st_value && dnpc < symtab[i].st_value + symtab[i].st_size && inst == 0x00008067) {
			rewind(fp);
			fseek(fp, str_offset + symtab[i].st_name, SEEK_SET);
			a = fread(func, FUNC_SIZE, 1, fp);

			if(strcmp(func, "printf") == 0) return;	//jump printf

			printf("pc = %lx:", pc);
			func_proc-- ;
			for(int j=0;j<func_proc;j++){
				printf("  ");
			}
			printf("ret<[%s]0x%lx>\n", func, dnpc);	
		}



	}


}

