#include<stdio.h>
int properdiv(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	{
		
		if(n%i==0)
			s=s+i;	
	}
	return s;
}
int main()
{
	int l,u,t;
	scanf("%d %d",&l,&u);
	for(int i=l;i<=u;i++)
	{	
		t=properdiv(i);
		if(t >= l && t <= u && t!=i && t > i )
		{
			if(i==properdiv(t) && t==properdiv(i))
		 		printf("%d,%d\n",i,t);
		}
	}
	return 0;
}