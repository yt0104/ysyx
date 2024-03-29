#include "common.h"
#include <regex.h>

extern uint64_t *cpu_gpr;

enum {
  TK_NUM = 256,
  TK_NOTYPE = 257,	
  TK_EQ = 258,		
  TK_UEQ = 259,	  
  TK_AND = 260,
  TK_HEX = 261,
  TK_REG = 262		
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // sub
  {"\\*", '*'},         // mult
  {"\\/", '/'},         // div
  {"[0-9]+", TK_NUM},   // num
  {"\\(", '('},         // left
  {"\\)", ')'},         // right
  {"==", TK_EQ},        // equal
  {"!=", TK_UEQ},       // unequal
  {"&&", TK_AND},       // and
  {"0x[0-9]+", TK_HEX}, //hex_num
  {"\\$[$0-9a-z]+", TK_REG},//reg
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};	//存放编译后的正则表达式

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {		//初始化：编译成一些用于进行pattern匹配的内部信息
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);	//把正则表达式编译成特定数据格式re
    if (ret != 0) {
      //regerror(ret, &re[i], error_msg, 128);			//返回一个包含错误信息的字符串
      //panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
      assert(0);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};	//该函数或变量可能不使用，避免编译器产生警告信息
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {	
  int position = 0;			//当前处理的位置
  int i;
  
  regmatch_t pmatch;			//结构体数据类型，存放匹配文本串在目标串中的开始、结束位置

  nr_token = 0;				//指示已经被识别出的token数目

  while (e[position] != '\0') {
    /* Try all rules one by one.x */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {	//正则匹配
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: 	break;
          case '+':	tokens[nr_token++].type=rules[i].token_type;	break;
          case '-':	tokens[nr_token++].type=rules[i].token_type;	break;
          case '*':	tokens[nr_token++].type=rules[i].token_type;	break;
          case '/':	tokens[nr_token++].type=rules[i].token_type;	break;
          case TK_NUM:	strncpy(tokens[nr_token].str,substr_start,substr_len); 
          		tokens[nr_token].str[substr_len] = '\0';
          		tokens[nr_token++].type =rules[i].token_type;
          		break;
          case '(':	tokens[nr_token++].type=rules[i].token_type;	break;
          case ')':	tokens[nr_token++].type=rules[i].token_type;	break;    
          case TK_EQ:	tokens[nr_token++].type=rules[i].token_type;	break; 
          case TK_UEQ:	tokens[nr_token++].type=rules[i].token_type;	break; 
          case TK_AND:	tokens[nr_token++].type=rules[i].token_type;	break;
          case TK_HEX:	strncpy(tokens[nr_token].str,substr_start+2,substr_len-2); 
          		tokens[nr_token].str[substr_len-2] = '\0';
          		tokens[nr_token++].type =rules[i].token_type;
          		break;  
          case TK_REG:	strncpy(tokens[nr_token].str,substr_start+1,substr_len-1); 
          		tokens[nr_token].str[substr_len-1] = '\0';
          		tokens[nr_token++].type =rules[i].token_type;	
          		break;  
          default: assert(0);
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


static bool check_parentheses(int p, int q){

	if(tokens[p].type=='(' && tokens[q].type==')') {
		int p_count = 0;
		for(int i=p;i<=q;i++){
	    		if(tokens[i].type=='(' ) p_count++;
	    		else if(tokens[i].type==')' ) p_count--;
	    		if(p_count==0 && i!=q) return false;	//首尾括号不是一对
		
		}
		return true;
	
	}
	return false;
}


static uint64_t eval(int p, int q){
  if(p > q){
    /* Bad expression */
  	assert(0);
  }
  else if(p == q){		
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
     uint64_t reg;
     bool reg_success;
     switch(tokens[p].type){
     	case TK_NUM: return strtol( tokens[p].str, NULL, 10 );
     	case TK_HEX: return strtol( tokens[p].str, NULL, 16 );
     	case TK_REG: reg = isa_reg_str2val(tokens[p].str,&reg_success);  
     			if(reg_success)return reg;
     			else assert(0);
     	default : assert(0);
     
     }
     
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    /*
     * find main operator : op
     */
    int op=p;	
    int sub_p = 0;	
    bool num_status = false;
    for(int i=p;i<=q;i++){
    	if(tokens[i].type=='(' ) sub_p++;
    	else if(tokens[i].type==')' ) { sub_p--; num_status = true;}
    	else if(sub_p == 0){							//token outside "()"
    	  	if(tokens[i].type !=TK_NUM && tokens[i].type !=TK_HEX && tokens[i].type !=TK_REG){ //this token is operator	
    	  		if(num_status){						//main operator
    	  			if(op==p) op = i;
    	  			else if(tokens[i].type==TK_AND) op = i;
    	  			else if(tokens[i].type==TK_EQ || tokens[i].type==TK_UEQ)
    	  				if(tokens[op].type==TK_AND) op = op;
    	  				else op = i;
	    			else if(tokens[i].type=='+' || tokens[i].type=='-') 
	    				if(tokens[op].type==TK_AND || tokens[op].type==TK_EQ || tokens[op].type==TK_UEQ) op = op;
	    				else op = i;
	    			else if(tokens[i].type=='*' || tokens[i].type=='/' ) 
	    				if(tokens[op].type=='*' || tokens[op].type=='/' ) op = i;	
	    				else op = op;	
	    			else assert(0);

	    		}
	    		num_status = false;	//*num/+num/-num is not main operator
    		}
    		else num_status = true;		//this token is num
    	}
    
    }
    
    /*
     * return expr value
     */
     
    int 	op_type = tokens[op].type;
    uint64_t 	val1,val2;
    
    if(p==op){	 	//no main operator
    	val2 = eval(op + 1 , q);
 	switch(op_type) {
	    case '-':return 0-val2;
	    case '*':return *(char*)val2;
	    default: assert(0);	
	    }
    }
    else {
    	val1 = eval(p , op - 1);
    	val2 = eval(op + 1 , q);
	switch(op_type) {
	    case '+':return val1+val2;
	    case '-':return val1-val2;
	    case '*':return val1*val2;
	    case '/':return val1/val2;
	    case TK_EQ: return (val1==val2);
	    case TK_UEQ:return (val1!=val2);
	    case TK_AND:return (val1&&val2);
	    default: assert(0);	
	    }
    }

  }

}


uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
  return eval(0,nr_token-1);
  /* TODO: Insert codes to evaluate the expression. */
  assert(0);

  return 0;
}



