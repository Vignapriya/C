#include<stdio.h>
int main()
{
   int a[10],n,i,k,t=0;
   printf("enter the number");
scanf("%d",&n);
printf("enter the elements one by one");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
   printf("enter the element to be searched");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if(a[i]==k)
      {
         t=1;
break;
      }
   }
   if(t==1)
      printf("the given number is present in array");
   else
      printf("the given number is not present in array");
   return 0;
}
