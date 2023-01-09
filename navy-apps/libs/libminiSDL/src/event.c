#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <stdio.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

uint8_t key_state[83];


int SDL_PollEvent(SDL_Event *ev) {

  char eventbuf[64];
  if( NDL_PollEvent(eventbuf, sizeof(eventbuf)) == 0) return 0;

  assert(eventbuf != NULL);
  printf("%s",eventbuf);

  char down;
  char name[10];
  int code;
  assert(0 != sscanf(eventbuf, "k%c (%d) %s\n", &down, &code, name) );

  if(down == 'd') { ev->type = SDL_KEYDOWN; key_state[code] = 1; }
  else if (down == 'u') { ev->type = SDL_KEYUP; key_state[code] = 0; }
  else assert(0);

  ev->key.keysym.sym = (char)code;

  printf("SDL_PollEvent: down = %d, name = %s, code = %d\n", ev->type, name, code);

  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
 
  char eventbuf[64];
  while( NDL_PollEvent(eventbuf, sizeof(eventbuf)) == 0);

  assert(eventbuf != NULL);
  printf("%s",eventbuf);

  char down;
  char name[10];
  int code;
  assert(0 != sscanf(eventbuf, "k%c (%d) %s\n", &down, &code, name) );

  if(down == 'd') event->type = SDL_KEYDOWN;
  else if (down == 'u') event->type = SDL_KEYUP;
  else assert(0);

  event->key.keysym.sym = (char)code;

  printf("SDL_WaitEvent: down = %d, name = %s, code = %d\n", event->type, name, code);

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //printf("SDL_GetKeyState\n");

  return key_state;
  
}
