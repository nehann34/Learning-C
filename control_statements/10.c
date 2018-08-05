#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d ",&n);
	for(int i=1;i<=n;i++)
	{
		if((i*i*i) % 3 != 0 )
			continue;
		sum=sum+i*i*i ;
	}
	printf("%d",sum);
	return 0;
}
