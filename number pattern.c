#include <stdio.h>

int main() {
    int n,i,j,s;
    printf("enter rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=(n-i+1);j<=3;j++)
        {
            printf("%d",j);
        }
        printf("0");
        for(j=3;j>=(n-i+1);j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    

    return 0;
}
