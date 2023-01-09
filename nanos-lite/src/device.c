#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {

  //printf("serial write : len = %d\n",len);
  char *p = (char *)buf;
  int i;
  for(i = 0; i < len; i++){
    if(p[i]=='\0') break;
    putch(p[i]);
  }
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  bool has_kbd = io_read(AM_INPUT_CONFIG).present;
  if (has_kbd)
  {
    AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    if (ev.keycode != AM_KEY_NONE) {
      char *p = (char*)buf;

      if(ev.keydown) sprintf(p, "kd (%d) %s\n", ev.keycode, keyname[ev.keycode]);
      else sprintf(p, "ku (%d) %s\n", ev.keycode, keyname[ev.keycode]);

      int keylen = strlen(buf);
      //printf("Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
      if(keylen < len)return keylen;
      else panic("key read error");
    }
  }
  
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int w = io_read(AM_GPU_CONFIG).width ;
  int h = io_read(AM_GPU_CONFIG).height;
  char *p = (char*)buf;
  int wlen = sprintf(p, "WIDTH : %d\nHEIGHT : %d\n", w, h);
  if(wlen < len && wlen > 0) return wlen;
  else panic("dispinfo read error");
}

size_t fb_write(void *buf, size_t offset, size_t len) {

  int disp_w = io_read(AM_GPU_CONFIG).width ;
  int disp_h = io_read(AM_GPU_CONFIG).height;

  int pos_x = offset % disp_w;
  int pos_y = offset / disp_w;

  int w = len & 0x00000000ffffffff;
  int h = len>>32;
  if(h == 0 && w != 0) h = 1;

  assert(pos_x + w <= disp_w);
  assert(pos_y + h <= disp_h);

  io_write(AM_GPU_FBDRAW, pos_x, pos_y, buf, w, h , false);
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);


  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
