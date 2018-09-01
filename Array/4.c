//reverse first n elements
#include<stdio.h>
int main()
{

	int temp,n,a[6]={3,4,33,2,5,1};
	scanf("%d",&n);
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1];
		a[n-1]=temp;
		n=n-1;
		
	}
	for(int i=0;i<6;i++)
	printf("%d ",a[i] );
}