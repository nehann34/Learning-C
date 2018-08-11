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
	int n,mp=0;
	scanf("%d",&n);
	while(n/10 !=0)
	{
		mp++;
		n=prodDigits(n);
	}
	printf("%d %d",mp,n);
	return 0;
}