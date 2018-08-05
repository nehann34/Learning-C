#include<stdio.h>
int main()
{
	int n,max=0;
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&n);
		if(n>max)
			max=n;
	}
	printf("maximum is : %d",max);
	return 0;
}