#include<stdio.h>
int main()
{
   int x=5,y=1;
   printf("initial value of x=%d\n",x);
   printf("initial value of y=%d\n",y);
   y=++x;
   printf("after incrementing by 1,x=%d\n",x);
   printf("value of y=%d\n",y);
   y=--x;
   printf("after decrementing by 1,x=%d\n",x);
   printf("value of y=%d",y);
   return 0;
}
