#include<stdio.h>
int  fact(int a)
{
	if(a==1 || a==0)
		return 1;
	else
		return a*fact(a-1);
}

int main()
{
	int x,n,t,sign=1,sum=0;
	scanf("%d %d",&x,&n);
	for(int i=1;i<=n;i++)
	{
		t=1;
		for(int j=1;j<=(2*i-1);j++)
			t=t*x;
		if(i%2==0)
			sign=-1;
		sum+=((sign)*(t/fact(2*i-1)));
	}
	printf("%d\n", sum);
	return 0;
}