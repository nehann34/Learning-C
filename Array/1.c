#include<stdio.h>
int main()
{
	int a[10],b[10];
	int n,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}