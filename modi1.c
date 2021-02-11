/*
功能是将p 所指的字符串中的所有字符复制到b中，要求每复制三个字符之后插入一个空格 
例如 若给a输入字符串：ABCDEFG 调用后  字符数组b中的内容为：ABC  DEF  G


*/

#include <stdio.h>
void  fun(char  *p, char  *b)
{  int   i, k=0;
   while(*p)
   {  i=1;
      while( i<=3 && *p ) {
/**********found**********/
          b[k]=*p;
          k++; p++; i++;
      }
      if(*p)
     {
/**********found**********/
         b[k]=' ';
		 k++;
      }
    }
    b[k]='\0';
}
main()
{  char  a[80],b[80];
   printf("Enter a string:      ");  gets(a);
   printf("The original string: ");  puts(a);
   fun(a,b);
   printf("\nThe string after insert space:   ");  puts(b); printf("\n\n");
}

