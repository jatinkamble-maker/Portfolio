#include<stdio.h>
int main()
{
	int x;
	printf("enter the value:");
	scanf("%d",&x);
	if(x&1)
	printf("odd number");
	else
	printf("even number");
	return 0;
}