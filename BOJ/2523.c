#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++) printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=n-i+1;j>0;j--) printf("*");
        if(i!=n) printf("\n");
    }
    return 0;
}