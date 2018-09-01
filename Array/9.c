#include<stdio.h>
int main()
{
	int n,a[20],b[20],c=1,num,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
		{

			if(a[i]==a[i+1])
				{
					c++;
					if(max < c)
						{
							max=c;
							num=a[i];
						}
				}
			else
			{
				c=1;
				continue;
			}

		}
	
	printf("%d---->%d",num,max);	
	return 0;
}