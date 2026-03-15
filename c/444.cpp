#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n,&i);
	while(i<=n)
	{
		if(i%2==0)
		printf(" %d",i);
		i++;
	}
}