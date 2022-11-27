#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

uint32_t key_now,key_last;

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
  //kbd->keycode = inl(KBD_ADDR);
  uint32_t key= inl(KBD_ADDR);
  if(key != AM_KEY_NONE){
  kbd->keydown = (key & KEYDOWN_MASK ? true : false);
  kbd->keycode = key & ~KEYDOWN_MASK;
  }
}
