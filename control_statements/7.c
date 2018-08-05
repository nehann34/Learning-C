#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	if(n==0)
		c=1;
	else
	{
		while(n>0)
		{
			n=n/10;
			c++;
	
		}
	}
	printf("%d",c);
	return 0;

}