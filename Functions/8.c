#include<stdio.h>
int product(int a,int b)
{
	int t=0;
	for(int i=1;i<=a;i++)
		t=t+b;
	return t;
}
int remaind(int a,int b)
{
	while(a>=b)
		a=a-b;
	return a;
}
int quotient(int a,int b)
{
	int c=0;
	while(a>=b)
	{
		a=a-b;
		c++;
	}
	return c;
}

int main()
{
	int a,b,p,q,r;
	scanf("%d %d",&a,&b);
	p=product(a,b);
	q=quotient(a,b);
	r=remaind(a,b);
	printf("%d\t %d\t %d\t",p,q,r);

	return 0;
}