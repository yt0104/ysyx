#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include "ops.h"

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


//设置输出缓冲区，为1024字节大小
static char sprint_buf[1024];

int printf(const char *fmt, ...) {
  va_list args; //用于存放参数列表的数据结构
  int n;

  va_start(args, fmt);
  n = vsprintf(sprint_buf, fmt, args);
  for (const char *p = sprint_buf; *p; p++) {
    putch(*p);
  }
  va_end(args);//执行清理参数列表的工作
  //if (console_ops.write)
  //		console_ops.write(sprint_buf, n);
  return n;

}

int vsprintf(char *out, const char *fmt, va_list ap) {

  int temp[64];
  int i,len;
  const char *s;
  unsigned int num_para;
	unsigned int num;
  int base;

	char * str;

  const char* num_data = "0123456789abcdef";
  
    
	/*将字符逐个放到输出缓冲区中，直到遇到第一个%*/
	for (str=out ; *fmt ; ++fmt) 
    {
		if (*fmt != '%') 
        {    //寻找%
			*str++ = *fmt;
			continue;
		}
        
		//遇到%后执行下面代码	
		++fmt;				//跳过第一个 '%'

		num_para = 0; //%xxd
    while ((*fmt >= '0' && *fmt <= '9') || *fmt == '.')
    {
      if(*fmt >= '0' && *fmt <= '9') 
        num_para = num_para * 10 + *fmt - '0';
      fmt++;
    }

    base = 10;//默认十进制
		switch (*fmt) {
    
		/* integer number formats - set up the flags and "break" */
		case 'o':
			base = 8;
			break;

		case 'x':  //十六进制
			base = 16;
			break;
	
		case 'd':	//十进制
      base = 10;
      break;
    case 'c':
      int c = va_arg(ap, int);
      if (!c) c = 'N';
      *str++ = (char)c;
      continue;

    case 's':
      s = va_arg(ap, char *);//char*格式获取参数
      if (!s) s = "<NULL>";
      len = strlen(s);
      for (i = 0; i < len; ++i)
        *str++ = *s++;
      continue;

		default:
			*str++ = '%';
			if (*fmt)
				*str++ = *fmt;
			else
				--fmt;
			continue;
		}

    //num --> string
		num = va_arg(ap, unsigned int);
    if(num == 0) {
      if(num_para != 0) { //add bits
        for(i = 0; i < num_para-1; i++) *str++ = '0';
        
      }
      *str++ = '0';
    }
    else {
      for(i = 0; num != 0; i++ ){
        temp[i] = num % base;
        num = num / base;
      }
      len = i;
      
      if(num_para != 0) { //add bits
        for(i = 0; i < num_para-len; i++) *str++ = '0';
      }
      for(i = 0; i < len; i++){
        *str++ = num_data[ temp[len-i-1] ];
      }
    }

	}
	*str = '\0';//最后以'\0'结束
	return str-out;

}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
	int i;

	va_start(args, fmt);
	i=vsprintf(out,fmt,args);
	va_end(args);
	return i;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
