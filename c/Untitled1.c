#include <stdio.h>
#include <math.h>
int main ()
{
	double x,y,result1,result2,total;
	printf("enter the value of x and y:");
	scanf("%lf,%lf",&x,&y);
	result1= pow(x,y); 
    result2=pow(y,x);
	total = result1+result2 ;
	printf("the total value is %lf",total);
	return 0;
}
