#include<stdio.h>
int main()
{
	int n,a[5][5],temp;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			for(int k=0;k<n-1-j;k++)
			{
				if(a[i][k]>a[i][k+1])
				{
					temp=a[i][k];
					a[i][k]=a[i][k+1];
					a[i][k+1]=temp;

				}
			}
		}
	}
	for(int i = 0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}

	return 0;
}