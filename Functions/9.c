#include<stdio.h>
void isal(char ch)
{
	if((ch >= 'A' && ch <='Z') || (ch>='a' && ch <='z') ||(ch >= '0' && ch <='9'))
		printf("alphanum char");
	else
	printf("not alphanum char");
}
int main()
{
	char ch;
	scanf("%c",&ch);
	isal(ch);
	return 0;
}