#include<stdio.h>
int sumeven(int a[],int n,int i)
{
	if(i<n)
	{
		if(a[i]%2==0)
			return a[i]+sumeven(a,n,i+1);
		else
			return sumeven(a,n,i+1);

	}
	return 0;
}
int main()
{
	int n,a[5],sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("%d\n",sumeven(a,n,0) );
	return 0;
}