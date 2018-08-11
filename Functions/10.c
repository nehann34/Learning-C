#include<stdio.h>
void upp(char ch)
{
	if(ch>='a' && ch <='z')
	{
		ch=ch-32;
		printf("%c",ch);
	}
	else
	printf("%c",ch);
}
int main()
{
	char ch;
	scanf("%c",&ch);
	upp(ch);
	return 0;
}