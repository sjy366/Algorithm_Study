#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--) printf(" ");
		for(j=1;j<2*i;j++) printf("*");
	    if(i!=n) printf("\n");
	}
	return 0;
}