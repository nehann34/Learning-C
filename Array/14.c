#include<stdio.h>
int srch(int a[5][5],int size,int item)
{
		int i=0,j=size-1;
		while(i<size && j>=0)
		{
			if(a[i][j] < item)
				i++;
			if(a[i][j] > item)
				j--;
			if(a[i][j] == item)
				return 1;
		}
		return -1;

}


int main()
{
	int n,a[5][5],x;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	scanf("%d",&x);
	printf("%d\n",srch(a,n,x) );

	return 0;
}