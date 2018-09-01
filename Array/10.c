#include<stdio.h>
int main()
{
	int n,a[20],f;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		f=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				continue;
			else
			{
				f=0;
				break;
			}
		}
		if(f==1)
			printf("%d\t" ,a[i]);
	}
	return 0;
}