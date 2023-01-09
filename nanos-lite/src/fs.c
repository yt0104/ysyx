#include <fs.h>


size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FP_DISP};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_FB]     = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FP_DISP]   = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb

  int disp_w = io_read(AM_GPU_CONFIG).width ;
  int disp_h = io_read(AM_GPU_CONFIG).height;
  file_table[FD_FB].size = disp_w * disp_h; //pixel: 32bit 00RRGGBB
}


int fs_open(const char *pathname, int flags, int mode){

  for (int i = 0; file_table[i].name != NULL; i++)
  {
    if (strcmp(file_table[i].name, pathname) == 0)
    {
      //printf("open file success: %s\n", pathname);
      file_table[i].open_offset = 0;
      return i;
    }
  }
  panic("open file failed");
}


size_t fs_read(int fd, void *buf, size_t len){

  size_t fs_offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  if(file_table[fd].open_offset >= file_table[fd].size){   //overwhale
    printf("read file (%s) overwhale: offset =%d, len = %d\n", file_table[fd].name, file_table[fd].open_offset, len);
    return 0;
  }
  size_t len_r;
  if(file_table[fd].open_offset + len >= file_table[fd].size){   
    len_r = file_table[fd].size - file_table[fd].open_offset ;
  }
  else len_r = len;

  //printf("read file %d success: offset =%d, len = %d\n", fd,  file_table[fd].open_offset, len_r);
  file_table[fd].open_offset += len_r ;    //update offset after rd/wr
  return ramdisk_read(buf, fs_offset, len_r);
}


size_t fs_write(int fd, const void *buf, size_t len){
  
  size_t fs_offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  if(file_table[fd].open_offset >= file_table[fd].size){   //overwhale
    printf("write file (%s) overwhale: offset =%d, len = %d\n", file_table[fd].name, file_table[fd].open_offset, len);
    return 0;
  }
  size_t len_r;
  if(file_table[fd].open_offset + len >= file_table[fd].size){   
    len_r = file_table[fd].size - file_table[fd].open_offset ;
  }
  else len_r = len;

  //printf("write file %d success: df = %d, offset =%d, len = %d\n", fd, file_table[fd].open_offset, len_r);
  file_table[fd].open_offset += len_r;    //update offset after rd/wr
  return ramdisk_write(buf, fs_offset, len_r);
}


size_t fs_lseek(int fd, size_t offset, int whence){
  switch (whence)
  {
  case SEEK_SET: file_table[fd].open_offset = offset; break;
  case SEEK_CUR: file_table[fd].open_offset = file_table[fd].open_offset + offset; break;
  case SEEK_END: file_table[fd].open_offset = file_table[fd].size + offset; break;
  default: file_table[fd].open_offset = offset; break;
  }
  return file_table[fd].open_offset;
}

int fs_close(int fd){

  //file_table[fd].open_offset = 0;
  return 0;
}


