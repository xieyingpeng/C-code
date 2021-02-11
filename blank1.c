/*
功能是将数字转换成字符 若形参ch 中是数字0-9  则将0转换成9 1转换成8 依次内推

*/
#include    <stdio.h>
/**********found**********/
char fun(char  ch)
{
/**********found**********/
   if (ch>='0' && ch <= '9')
/**********found**********/
      return  '9'- (ch-'0');
   return  ch ;
}
main()
{  char  c1, c2;
   printf("\nThe result  :\n");
   c1='2';   c2 = fun(c1);
   printf("c1=%c    c2=%c\n", c1, c2);
   c1='8';   c2 = fun(c1);
   printf("c1=%c    c2=%c\n", c1, c2);
   c1='a';   c2 = fun(c1);
   printf("c1=%c    c2=%c\n", c1, c2);
}

