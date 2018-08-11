#include<stdio.h>
int sum(int n)
{
	if(n<=0)
		return 0;
	return n+sum(n-1);	
}

int main()
{
	int s,n;
	scanf("%d",&n);
	s=sum(n);
	printf("%d\n",s );
}