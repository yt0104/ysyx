#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;


uint32_t boot_time;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  uint32_t time = tv.tv_usec/1000;
  return time - boot_time;
}

int NDL_PollEvent(char *buf, int len) {

  int fd = open("/dev/events", 0, 0);
  if( read(fd, buf, len) ) return 1;
  return 0;
}

int disp_w, disp_h; 

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }

  char dispinfo[64];
  int fd = open("/proc/dispinfo", 0, 0);
  int len = read(fd, dispinfo, 64);

  sscanf(dispinfo, "WIDTH : %d\nHEIGHT : %d\n", &disp_w, &disp_h);
  printf("get disp width = %d, height = %d\n", disp_w, disp_h);

  if(*w == 0) *w = disp_w;
  if(*h == 0) *h = disp_h;
  int canvas_w = *w, canvas_h = *h;
  printf("get canvas width = %d, height = %d\n", canvas_w, canvas_h);
  
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {

  assert(x >= 0 && x + w <= disp_w);
  assert(y >= 0 && y + h <= disp_h);

  int fd = open("/dev/fb", 0, 0);
  assert(fd != 0);

/*  
  //update one raw

  int disp_off = lseek(fd, y * disp_w + x, SEEK_SET); //disp start position
  int pixel_off = 0;

  for (size_t i = 0; i < h; i++)
  {
    //printf("NDL_DrawRect write pixel: disp_off = %d, pixel_off = %d\n", disp_off, pixel_off);
    write(fd, &pixels[pixel_off], w);
    disp_off = lseek(fd, disp_w, SEEK_CUR); //next raw
    pixel_off += w;
    assert(disp_off <= disp_w*disp_h);
    assert(pixel_off <= w*h);
  }
*/

  //update entire screen

  int disp_off = lseek(fd, y * disp_w + x, SEEK_SET); //disp start position
  size_t len = h;
  len = (len<<32) + w; 
  write(fd, pixels, len);


}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  struct timeval tv;
  gettimeofday(&tv, NULL);
  boot_time = tv.tv_usec/1000;  

  return 0;
}

void NDL_Quit() {
}
