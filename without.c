#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i,j=0,l=0,flag=0,choice;
   printf("enter the string");
   scanf("%s",a);
   printf("enter the choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
         for(i=0;a[i]!='\0';i++)
         {
            l++;
         }
            printf("length of the string is %d",l);
            break;
            case 2:
            printf("copied string");
            for(i=0;a[i]!='\0';i++)
            {
               l++;
            }
            for(i=0;i<l;i++)
                  {
                  b[i]=a[i];
                  }
                  printf("\noriginal string is %s",a);
                  printf("\ncopied string is %s",b);
                  break;
                  case 3:
                  printf("the reverse of string is");
                  for(i=0;a[i]!='\0';i++)
                  {
                  i++;
                  }
                  for(i=l;i>=0;i--)
                  {
                  printf("%c",a[i]);
                  }
                  break;
                  case 4:
                  for(i=0;a[i]!='\0';i++)
                  {
                     l++;
                  }
                  for(i=0;i<l;i++)
                  {
                     if(a[j]!=a[l-i-1])
                     {
                        flag=1;
                     }
                     j++;
                  }
                  if(flag==0)
                     printf("palindrome");
                  else
                     printf("not palindrome");
                  break;
                  default:
                  printf("invalid choice");
                  break;
   }
   return 0;
}
