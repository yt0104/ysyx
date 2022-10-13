/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char *expr;
  word_t val;

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
    
    if(head == NULL) head = wp;
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


int set_point(char *e){
  WP* wp = new_wp();
  wp->expr = e;
  bool success;
  wp->val = expr(e,&success);
  
  if(success) return wp->NO;
  else assert(0);

}


char* del_point(int no){
  WP *wp = head;
  while(wp->NO != no) {
    wp = wp->next;
    if(wp == NULL) assert(0);
  }
  free_wp(wp);
  
  return wp->expr;
}







