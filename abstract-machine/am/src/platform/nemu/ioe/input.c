#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

uint32_t key_now,key_last;

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
  uint32_t key_now = inl(KBD_ADDR);
  if(key_last != key_now){
    if(key_now == AM_KEY_NONE){
      kbd->keydown = 1;
      kbd->keycode = key_last;
    }
    else{
      kbd->keydown = 0;
      kbd->keycode = key_last;      
    }
  }
  key_last = key_now;
}
