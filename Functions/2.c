#include<stdio.h>
int prodDigits(int n)
{
	int r=0,t=1;
	while(n>0)
	{
		r=n%10;
		t=t*r;
		n=n/10;
	}
	return t;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("product of digits is %d",prodDigits(n));
	return 0;
}