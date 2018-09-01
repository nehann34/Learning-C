#include<stdio.h>
void revrse(int a[],int n,int i)
{
	if(i<n)
	{
		revrse(a,n,i+1);
		printf("%d ",a[i]);
	}
	
}
int main()
{
	int n,a[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	revrse(a,n,0);
	return 0;
}