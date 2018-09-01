#include<stdio.h>
int main()
{
	int m,n,a[5][5],t[5][5];
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			t[j][i]=a[i][j];
	for(int i=0;i<m;i++)
	{	
		for(int j=0;j<n;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
	return 0;
}