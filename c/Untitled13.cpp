//#At an ATM, a customer can withdraw money only if they have sufficient balance. Accept account balance and withdrawal amount.

//a.     If withdrawal amount = balance, deduct and display new balance.

//b.    Else, display “Insufficient Balance.”
#include<stdio.h>
int main()
{
	float withdraw,balance,newbalance;
	scanf("%f %f",&withdraw,&balance);
	newbalance=balance-withdraw;
	if(withdraw<=balance){
		printf("%.2f\nnewbalance",newbalance);
	} else{
		printf("insufficient",newbalance);
	}
	return 0;

	
}