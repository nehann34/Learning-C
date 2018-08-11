#include<stdio.h>
double series(int n)
{
	double s=0;
	double sq;
	for	(int i=1;i<=n;i++)
	{
		sq=i*i;
		s+=1/sq ;
	}
	return s;
}

int main()
{
	int n;
	double t;
	scanf("%d",&n);
	t=series(n);
	printf("%lf\n",t );
	return 0;
}