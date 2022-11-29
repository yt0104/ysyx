#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {

  assert(s);

  size_t len = 0;
  
  while(*s++ != '\0') len ++;

  return len;

}

char *strcpy(char *dst, const char *src) {

    assert(dst != NULL && src != NULL);    
 
    char *ret = dst; 
 
    while ((*dst++=*src++)!='\0') ; 
 
    return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {

  assert(dst != NULL && src != NULL);   

	char* start=dst;
	while (n && (*dst++=*src++))  n--;
	if(n)
		while (--n) *dst++='\0';

	return(start);
}

char *strcat(char *dst, const char *src) {

	assert((dst != NULL) && (src != NULL));

  char *p = dst;

	while (*dst != '\0')  dst++;

	while ((*dst++ = *src++) != '\0') ;

	return p;

}

int strcmp(const char *s1, const char *s2) {

  assert((s1 != NULL) && (s2 != NULL));

  while ((*s1) && (*s1 == *s2))
	  {
		  s1++;
		  s2++;
	  }
  
  return (*(unsigned char*)s1 - *(unsigned char*)s2);
 
}

int strncmp(const char *s1, const char *s2, size_t n) {

  assert((s1 != NULL) && (s2 != NULL));
 
  if(!n)  return 0;
 
  while(--n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
  
  return (*(unsigned char*)s1 - *(unsigned char*)s2);

}

void *memset(void *s, int c, size_t n) {
	assert(s!=NULL);
	char *pdest = (char *)s;

	while (n--) *pdest++ = (char)c;

	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
    assert(NULL !=src && NULL !=dst);
    char* tmpdst = (char*)dst;
    char* tmpsrc = (char*)src;
	
    if (tmpdst <= tmpsrc || tmpdst >= tmpsrc + n)
    {
        while(n--)  *tmpdst++ = *tmpsrc++;  //从前往后复制
    }
    else
    {
        tmpdst = tmpdst + n - 1;
        tmpsrc = tmpsrc + n - 1;
        while(n--)  *tmpdst-- = *tmpsrc--;  //从后往前复制，则不会出现覆盖src中没有复制的内容
    }
 
    return dst; 

}

void *memcpy(void *out, const void *in, size_t n) {
  assert(out != NULL && in != NULL);
	char* temFrom = (char*)in;
	char* temTo = (char*)out;
	while(n-- > 0)
		*temTo++ = *temFrom++;
	return out;

}

int memcmp(const void *s1, const void *s2, size_t n) {

  assert((s1 != NULL) && (s2 != NULL));

  char *s1_func = (char *)s1;
  char *s2_func = (char *)s2;

  while( *(s1_func) == *(s2_func)){
      s1_func++;
      s2_func++;   
      n--;   
      if(n==0) return 0; 
  }

  return (*(unsigned char*)s1_func - *(unsigned char*)s2_func);

}

#endif
