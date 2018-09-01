#include<stdio.h>
int main()
{
	int n,a[5][5],c=0,d,temp;
	scanf("%d",&n);
	d=n-1;	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	while(c<d)
	{
	for(int b=0;b<n;b++)
	{
		temp=a[b][c];
		a[b][c]=a[b][d];
		a[b][d]=temp;
		
	}	
	c++,d--;
	}
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}