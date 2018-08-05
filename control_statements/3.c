#include<stdio.h>
int main()
{
	int n;
	printf("enter numbers bw range 1-50 ");
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
			printf("=");
	}
	return 0;
}