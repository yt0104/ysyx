#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error unsupported ISA __ISA__
#endif


int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

extern void init_irq();

static uintptr_t loader(PCB *pcb, const char *filename) {
  
  int fd = fs_open(filename, 0, 0);

  Elf_Ehdr ehdr;
  fs_lseek(fd, 0, 0);
  fs_read(fd, &ehdr, sizeof(Elf64_Ehdr));
  
  //printf("ELF: e_ident = %s\n", ehdr.e_ident);
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);  //check elf
  //printf("ELF: except_type = %d, e_type = %d\n", EXPECT_TYPE, ehdr.e_machine);
  assert(EXPECT_TYPE == ehdr.e_machine);  //check machine
  //printf("ELF: segment entry: 0x%x\n",ehdr.e_entry);

  //printf("ELF: There are %d program headers, starting at offset 0x%04x, size = %d\n", ehdr.e_phnum, ehdr.e_phoff, ehdr.e_phentsize);
  
  int count = ehdr.e_phnum;    //程序头表的数量
  Elf_Phdr phdr[count];
  fs_lseek(fd, ehdr.e_phoff, 0);
  fs_read(fd, phdr, count * sizeof(Elf_Phdr));

  for(int i = 0; i < count; i++){
    if(phdr[i].p_type == PT_LOAD) {
      printf("ELF---> Loadable program segment: offset = %x, FileSiz = %x, VirtAddr = %x, MemSiz = %x\n",phdr[i].p_offset, phdr[i].p_filesz, phdr[i].p_vaddr, phdr[i].p_memsz);
      memset((char *)phdr[i].p_vaddr, 0, phdr[i].p_memsz);
      char *load_ram = malloc(phdr[i].p_filesz);
      fs_lseek(fd, phdr[i].p_offset, 0);
      fs_read(fd, load_ram, phdr[i].p_filesz);
      memcpy((char *)phdr[i].p_vaddr, load_ram, phdr[i].p_filesz);
      //printf("ELF: Load success!\n");
      free(load_ram);
    }
  }
  //TODO();
  return (uintptr_t)(ehdr.e_entry);
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);

  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

