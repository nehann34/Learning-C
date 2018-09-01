#include<stdio.h>
int main()
{
	int n,a[20][20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
	{
		a[i][n]=0;
		for(int j=0;j<n;j++)
		{

			a[i][n]+=a[i][j];
		}
	}
	for(int i=0;i<=n;i++)
	{
		a[n][i]=0;
		for(int j=0;j<n;j++)
		{

			a[n][i]+=a[j][i];
		}
	}
	for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
				printf("%d ",a[i][j] );
			printf("\n");
		}
	return 0;
}