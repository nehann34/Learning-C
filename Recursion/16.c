#include<stdio.h>
void pat1(int n)
{
	if(n<1)
		return;
	else
	{
		pat1(n-1);
		for(int i=1;i<=n;i++)
			printf("%d",i);
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pat1(n);
	return 0;
}