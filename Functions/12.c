#include<stdio.h>
void twin(int a[],int count)
{
	for(int i=0;i<count-1;i++)
	{
		if(a[i+1]-a[i]==2)
			printf("%d,%d\n",a[i],a[i+1]);
	}
}
int main()
{
	int a[500]={0},c=0,l=3,h=999,f;
	while(l<h)
	{
		f=0;
		if(l==3)
			a[c++]=l;
		else
		{
			for(int i=2;i<=l/2;i++)
			{
				if(l%i == 0)
					{
						f=1;
						break;
					}
			}
			if(f==0)
				a[c++]=l;
		}
		l=l+2;
	}
	for(int k=0;k<c;k++)
		printf("%d\n",a[k] );
	twin(a,c);

	return 0;
}