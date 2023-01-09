#include <common.h>
#include "syscall.h"
#include "fs.h"
#include "proc.h"

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
extern void naive_uload(PCB *pcb, const char *filename);

#define STRACE_CONFIG 0
#define STRACE  if(STRACE_CONFIG) printf

extern Finfo file_table[];

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //type
  a[1] = c->GPR2; //a0
  a[2] = c->GPR3; //a1
  a[3] = c->GPR4; //a2

  //Log("---nanos SYSCALL %d  raise\n", a[0]);
  //printf("SYS raise:type = %d, a0 = %d, a1 = %d, a2 = %d\n",a[0],a[1],a[2],a[3]);

  switch (a[0]) {
    case SYS_exit : STRACE("---nanos SYSCALL exit\n");
                    halt(a[1]); 
                    //if(a[1]==0) naive_uload(NULL, "/bin/nterm" );
                    //else halt(a[1]);
                    break;
    case SYS_yield:  /*yield();*/ break;
    case SYS_open : STRACE("---nanos SYSCALL open: %s\n", (char*)a[1]);
                    c->GPRx = fs_open((char*)a[1], (int)a[2], (int)a[3]);
                    break;
    case SYS_read : STRACE("---nanos SYSCALL read: name:%s,open_off=%d,len=%d\n", file_table[a[1]].name,file_table[a[1]].open_offset,a[3]);
                    if(file_table[a[1]].read == NULL) c->GPRx = fs_read((int)a[1], (char*)a[2], (int)a[3]);
                    else c->GPRx = file_table[a[1]].read((void*)a[2], file_table[a[1]].open_offset, (size_t)a[3]);   //events/invalid
                    break;
    case SYS_write: STRACE("---nanos SYSCALL write: name:%s,open_off=%d,len=%d\n", file_table[a[1]].name,file_table[a[1]].open_offset,a[3]);
                    if(file_table[a[1]].write == NULL) c->GPRx = fs_write((int)a[1], (char*)a[2], (int)a[3]);
                    else c->GPRx = file_table[a[1]].write((void*)a[2], file_table[a[1]].open_offset, (size_t)a[3]);  //serial/invalid
                    break;
    case SYS_close: STRACE("---nanos SYSCALL close: %s\n", file_table[a[1]].name);
                    c->GPRx = fs_close((int)a[1]);
                    break;
    case SYS_lseek: STRACE("---nanos SYSCALL lseek: name:%s,off=%d,whence=%d\n", file_table[a[1]].name,a[2],a[3]);
                    c->GPRx = fs_lseek((int)a[1], a[2], (int)a[3]);
                    break;
    case SYS_brk:   STRACE("---nanos SYSCALL brk: increment:%d,program break:%p\n", a[1],a[2]);
                    c->GPRx = 0; 
                    break;
    case SYS_gettimeofday:   STRACE("---nanos SYSCALL gettimeofday\n");
                    long *tv = (long*)a[1];   //sec+usec
                    *tv = 0;
                    tv++;
                    *tv = io_read(AM_TIMER_UPTIME).us;
                    c->GPRx = 0; 
                    break;
    case SYS_execve:  STRACE("---nanos SYSCALL execve:%s!\n",(char*)a[1]);
                    char *p = (char*)a[1];
                    int len = strlen(p);
                    if(p[len-1] =='\n') p[len-1] = '\0';
                    naive_uload(NULL, p );
                    break;
    default: panic("Unhandled syscall ID = %d", a[0]); 
  }
}
