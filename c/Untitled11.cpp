#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if ((isalpha(ch)) && (ch=tolower(ch)))
	printf("%c in uppercase is %c",ch,ch-32);
	else
	printf(" Not a valid Albhate");
	return 0;
}