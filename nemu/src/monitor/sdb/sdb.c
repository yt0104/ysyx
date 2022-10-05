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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

static char* subcmd1;
static char* subcmd2;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  printf("CONTINUE NEMU\n");
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  printf("QUIT NEMU\n");
  nemu_state.state = NEMU_QUIT;
  return -1;
}


static int cmd_si(char *args) {
  uint64_t n;
  if(subcmd1==NULL){
  	n = 1;
  	printf("EXEC ONCE\n");
  }
  else{
  	n = strtol( subcmd1, NULL, 10 ); 
  	if(n <= 0 || n > 4){
  		printf("EXEC ONCE\n");
  		n = 1;
  	}
  	else printf("EXEC %ld\n",n);
  }
  cpu_exec(n);
  return 0;
}


static int cmd_info(char *args) {

  if(subcmd1 == NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  if(strcmp("r", subcmd1) != 0){
	printf("Invalid command\n");
	return 0;
  }
  
  printf("PRINT REG\n");
  isa_reg_display();
  return 0;
  
}


static int cmd_x(char *args) {
  if(subcmd1==NULL || subcmd2==NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  uint64_t n = strtol( subcmd1, NULL, 10 );
  uint64_t maddr = strtol( &subcmd2[2], NULL, 16 );
  
  uint64_t raddr;
  raddr=maddr;
  for(int i=0;i<n;i++){
  	printf("0x%lx\t",raddr);
  	printf("0x%x\n",*(uint32_t*)raddr);
  	raddr += 4;
  }
  
  

  return 0;
}


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "exec once", cmd_si },
  { "info", "print", cmd_info },
  { "x", "scan memory", cmd_x }/*,
  { "p", "calulate expr", cmd_p },
  { "w", "watch expr", cmd_w },
  { "d", "delete watch", cmd_d },*/

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    subcmd1 = strtok(NULL," ");
    subcmd2 = strtok(NULL," ");
     
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {	//NR_CMD=3
      if (strcmp(cmd, cmd_table[i].name) == 0) {	//cmd与3个table中的命令匹配
        if (cmd_table[i].handler(args) < 0) { return; }      	//执行命令
        //else { if (cmd_table[i].handler(args,para) < 0) { return; }   }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }	//匹配不到命令
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
