#include "common.h"
#include <readline/readline.h>
#include <readline/history.h>

extern Vtop* top;


static char* subcmd_p;
static char* subcmd1;
static char* subcmd2;


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;

  
}

static int cmd_c(char *args) {
  printf("CONTINUE NPC:\n");
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  sim_exit(3);
  return 0;
}


static int cmd_si(char *args) {
  uint64_t n;
  subcmd1 = strtok(NULL," ");
  if(subcmd1==NULL){
  	n = 1;
  	printf("EXEC ONCE:\n");
  }
  else{
  	n = strtol( subcmd1, NULL, 10 ); 
  	if(n <= 0){
  		printf("EXEC ONCE:\n");
  		n = 1;
  	}
  	else printf("EXEC %ld:\n",n);
  }
  cpu_exec(n);
  return 0;
}


static int cmd_info(char *args) {
  subcmd1 = strtok(NULL," ");
  if(subcmd1 == NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  if(strcmp("r", subcmd1) == 0 ){

    printf("PRINT REG:\n");
    isa_reg_display();
	  return 0;
  }
  if(strcmp("w", subcmd1) == 0 ){
    printf("PRINT POINT:\n");
  	print_point();
	  return 0;
  }  
  
  printf("Invalid command\n");
  return 0;
  
}


static int cmd_x(char *args) {
  subcmd1 = strtok(NULL," ");
  subcmd2 = strtok(NULL," ");
  if(subcmd1==NULL || subcmd2==NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  uint64_t n = strtol( subcmd1, NULL, 10 );
  uint64_t maddr = strtol( &subcmd2[2], NULL, 16 );
  
  uint64_t raddr;
  raddr=maddr;
  for(int i=0;i<n;i++){
  	printf("0x%lx\t\t",raddr);
  	printf("0x%lx\n",pmem_read(raddr, 4));	
  	raddr += 4;
  }
  
  return 0;
}


static int cmd_p(char *args) {
  
  if(subcmd_p==NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  bool success;
  uint64_t result = expr(subcmd_p,&success);
  if(success) printf("expr success! result is %ld\n",result);
  else printf("expr failed\n");
  
  return 0;
}


static int cmd_w(char *args) {
  
  if(subcmd_p==NULL){
  	printf("Invalid command\n");
  	return 0;
  }

  int NO = set_point(subcmd_p);
  printf("set watchpoint %d:%s success! \n",NO,subcmd_p );
  return 0;
}


static int cmd_d(char *args) {
  if(subcmd_p==NULL){
  	printf("Invalid command\n");
  	return 0;
  }
  printf("delete watchpoint\n");
  //int NO = strtol( subcmd_p, NULL, 10 ); 
  //char *e = del_point(NO);
  
  //printf("delete watchpoint %d:%s success! \n",NO,e );
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
  { "x", "scan memory", cmd_x },
  { "p", "calulate expr", cmd_p },
  { "w", "watch expr", cmd_w },
  { "d", "delete watch", cmd_d },

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


void sdb_mainloop() {

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
     subcmd_p = &cmd[2];
     
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

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



