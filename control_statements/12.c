#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	if(n==0 || n==1)
		printf("number is fibonacci\n");
	else
	{
		a=0,b=1,c=a+b;
		while(c<n)
			a=b,b=c,c=a+b;
		if(c==n)
			printf("fibonacci");
		else
			printf("not fibonacci");

	}
	return 0;
}
