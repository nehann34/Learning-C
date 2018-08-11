#include<stdio.h>
int  rp(int a,int b)
{
	if(a!=0)
	{
		if(a%2 != 0)
		{	
			a=a/2;
			return b+rp(a,2*b);
		}
		else
		{
			a=a/2;
			return rp(a,2*b);
		}
	}
	else
		return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",rp(a,b) );
	return 0;
}