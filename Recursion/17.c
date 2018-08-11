#include<stdio.h>
void pat2(int n)
{
	if(n<1)
		return;
	else
	{
		
		for(int i=1;i<=n;i++)
			printf("%d",i);
		printf("\n");
		pat2(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pat2(n);
	return 0;
}