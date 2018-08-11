#include<stdio.h>
int  binomial(int a,int b)
{
	if(b==0 || b==a)
		return 1;
	else
		return (binomial(a-1,b-1)+binomial(a-1,b));
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",binomial(a,b));
	return 0;
}