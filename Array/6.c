#include<stdio.h>
int main()
{
	int n,a[20],b[20],c=0,f;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		{
			f=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					f=1;
					break;
				}
				
			}	
			if(f==0)
			{
				b[c]=a[i];
				c++;
				continue;
			}
			
			
		}
	for(int i=0;i<c;i++)
		printf("%d ",b[i] );	
	return 0;
}