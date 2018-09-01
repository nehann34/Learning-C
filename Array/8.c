#include<stdio.h>
int main()
{
	int n,a[20],b[20],c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i] > a[j])
					c++;
			}
		}
	
	printf("%d ",c );	
	return 0;
}