#include<stdio.h>
int sumtotal(int a[],int low,int high)
{
	int mid;
	if(low == high)
		return a[low];
	else
	{
		mid=(low+high)/2;
		return sumtotal(a,low,mid) + sumtotal(a,mid+1,high);
	}
}
int main()
{
	int n,a[5],sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("%d\n",sumtotal(a,0,n-1) );
	return 0;
}