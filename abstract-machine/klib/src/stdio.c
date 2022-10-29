#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {

  char temp[64];
  int i,len;
  const char *s;
	unsigned int num;
  int base;

	char * str;
  
    
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
    if(num == 0) *str++ = '0';
    else {
      for(i = 0; num != 0; i++ ){
        temp[i] = num % base;
        num = num / base;
      }
      len = i;
      for(i = 0; i < len; i++){
        *str++ = temp[len-i-1];
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
