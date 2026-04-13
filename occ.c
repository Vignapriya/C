#include<stdio.h>
int main()
{
   int a[10],n,i,k,t=0;
   printf("enter the number of elements");
   scanf("%d",&n);
   printf("enter the elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
      printf("enter the elements to be counted");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(a[i]==k)
       {
          t++;
       }
    }
    printf("the element %d is occurring %d times",k,t);
}
