#include<stdio.h>
int main()
{
	int n,a[20],b[20],c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
				continue;
			b[c]=a[i];
			c++;
		}
	for(int i=0;i<c;i++)
		printf("%d ",b[i] );	
	return 0;
}