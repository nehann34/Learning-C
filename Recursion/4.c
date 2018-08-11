#include<stdio.h>
int proper(int n,int b)
{
	if(b!=0)
	{
		if(n%b ==0)
			{
				printf("%d\t",b);
				return b+proper(n,b-1);
			}	
		else
			return proper(n,b-1);
	
	}	
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",proper(n,n/2) );
	return 0;
}