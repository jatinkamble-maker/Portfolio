//Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N%4==0){
		N++;
		printf("increment value");
	} else{
		printf("decrement value");
	}
	return 0;
}