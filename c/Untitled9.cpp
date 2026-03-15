#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if((x%400==0)||(x%4==0) &&(x%100!=0))
	printf("%d is leap year",x);
	else
	printf("%d is not a leap year",x);
	return 0;
}