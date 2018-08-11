#include<stdio.h>
int sumproper(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			s=s+i;
	}
	return s;
}
int main()
{
	int n,t;
	scanf("%d",&n);
	t=sumproper(n);
	print("%d",t);
	return 0;
}