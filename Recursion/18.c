#include<stdio.h>
void pat4(int n,int b)
{
	if(n<0)
		return;
	else
	{
		pat4(n-1,b+1);
		for(int j=1;j<=b;j++)
			printf(" ");
		for(int k=1;k<=n;k++)
			printf("* ");
		printf("\n");
	}
		
}
int main()
{
	int n;
	scanf("%d",&n);
	pat4(n,0);
	return 0;
}