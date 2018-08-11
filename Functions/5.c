#include<stdio.h>
void perfect(int lower,int upper)
{
	
	for(int i=lower;i<=upper;i++)
	{
		int s=0;
		{
			for(int j=1;j<=i/2;j++)
			{
				if(i%j==0)
				s=s+j;
			}
			if(s==i)
				printf("%d ",i);
		}
		
	}
}
int main()
{
	int l,u;
	scanf("%d %d",&l,&u);
	perfect(l,u);
	return 0;
}