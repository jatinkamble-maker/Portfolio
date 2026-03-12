#include<stdio.h>
int main()
{
	int n,r,i,j;
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(i=1;i<=r;i--)
		{
			for(j=1;j<=i;j++)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}