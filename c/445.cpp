//Write a C program to find whether the given number is pure odd or not(every number in the given digit is odd)
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0)
	printf("pure odd");
	else
	printf("not pure odd");
	return 0;
}