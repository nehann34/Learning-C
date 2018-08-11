#include<stdio.h>
int quo(int a,int b)
{
	if(a>=b)
	{
		a=a-b;
		return 1+quo(a,b);
	}
	else
		return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",quo(a,b));
	return 0;
}