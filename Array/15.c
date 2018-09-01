#include<stdio.h>
int main()
{
	int n,a[5][5],c,d,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	c=0,d=n-1;
	for(int b=0;b<n;b++)
	{
		temp=a[c][b];
		a[c][b]=a[d][b];
		a[d][b]=temp;
		
	}
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}