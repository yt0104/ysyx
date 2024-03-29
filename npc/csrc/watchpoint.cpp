#include "common.h"


#ifdef CONFIG_WATCHPOINT

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[32];
  uint64_t val;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

static WP* new_wp(){
  if(free_ == NULL) assert(0);
  else {
    WP *wp = free_;
    free_ = free_->next;
    
    if(head == NULL) { wp->next = NULL;  head = wp;}
    else {wp->next = head;  head = wp;}
    
    return wp; 
  }
}

static void free_wp(WP *wp){
  if(wp == head){
    head = wp->next;
  }
  else {
    WP *wp1 = head;
    while(wp1->next != wp) {
      wp1 = wp1->next;
      if(wp1->next == NULL) assert(0); 
    }
    wp1->next = wp->next;
  }
  wp->next = free_;
  free_ = wp; 
  
}



void set_point(char *e){
  WP* wp = new_wp();
  strcpy(wp->expr, e);
  bool success;
  wp->val = expr(e,&success);
  
  if(success) printf("set watchpoint %d:%s = %ld success! \n", wp->NO, wp->expr, wp->val );
  else assert(0);

}


void del_point(int no){
  WP *wp = head;
  while(wp->NO != no) {
    wp = wp->next;
    if(wp == NULL) assert(0);
  }
  free_wp(wp);
  printf("delete watchpoint %d:%s success! \n", wp->NO, wp->expr );

}


void print_point(){
  printf("Watchpoint is shown:\n");
  WP* wp = head;
  int i = 0;
  while(wp != NULL){
    printf("watchpoint %d: %s is %ld\n", wp->NO, wp->expr, wp->val );
    wp = wp->next;
    i++;
  }
  printf("All(%d) points has printed!\n", i);
}


bool trace_point(){
  if(head == NULL) return false;	// no watchpoint
  WP* wp = head;
  uint64_t new_val = 0;
  bool success;
  while(wp != NULL){
    new_val = expr(wp->expr, &success);
    if(new_val != wp->val) break;
    wp = wp->next;
  } 
  
  if(wp == NULL) return false;
  else {
    printf("#watchpoint %d: %s has changed from %ld to %ld\n",wp->NO,wp->expr,wp->val,new_val ); 
    wp->val = new_val; 
    return true;
    }
  
}

#else 
void init_wp_pool() { }
void set_point(char *e) { puts("CONFIG_WATCHPOINT is OFF"); }
void del_point(int no)  { puts("CONFIG_WATCHPOINT is OFF"); }
void print_point() { puts("CONFIG_WATCHPOINT is OFF"); }
bool trace_point() { return false; }

#endif

