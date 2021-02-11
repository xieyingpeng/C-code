/*下列给定程序中，函数fun的功能是：把形参a所指数组中的最小值放在元素a[0]中，接着把a所指数组中的最大值放在a[1]元素中；再把a所指数组元素中的次小值放在a[2]中，把a所指数组元素中的次大值放在a[3]，以此类推。

例如，若a所指数组中的数据最初排列为：9、1、4、2、3、6、5、8、7；则按规则移动后，数据排列为：1、9、2、8、3、7、4、6、5。形参n中存放a所指数组中数据的个数。

规定fun函数中的max存放当前所找的最大值，px存放当前所找最大值的下标。*/

# include    <stdio.h>
#define    N    9
void fun(int  a[], int  n)
{  int  i,j, max, min, px, pn, t;
   for (i=0; i<n-1; i+=2)
   {

      max = min = a[i];
      px = pn = i;
      for (j=i+1; j<n; j++) {

         if (max<a[j])
         {   max = a[j]; px = j;  }

         if (min>a[j])
         {   min = a[j]; pn = j;  }
      }
      if (pn != i)
      {  t = a[i]; a[i] = min; a[pn] = t;
         if (px == i) px =pn;
      }
      if (px != i+1)
      {  t = a[i+1]; a[i+1] = max; a[px] = t; }
   }
}
main()
{  int  b[N]={9,1,4,2,3,6,5,8,7}, i;
   printf("\nThe original data  :\n");
   for (i=0; i<N; i++)  printf("%4d ", b[i]);
   printf("\n");
   fun(b, N);
   printf("\nThe data after moving  :\n");
   for (i=0; i<N; i++)  printf("%4d ", b[i]);
   printf("\n");
}

