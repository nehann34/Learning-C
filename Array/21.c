#include<stdio.h>
int revrse(int a[],int n)
{
	
	if(n==0 || n==1)
		return 1;
	if(a[n-1]<=a[n-2])
		return 0;
	return revrse(a,n-1); 
	
	
}
int main()
{
	int n,a[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(revrse(a,n))
		printf("Strictly ascending\n");
	else
		printf("not Strictly ascending\n");
	return 0;
}