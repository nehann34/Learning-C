#include<stdio.h>
int pwr(int n,int b)
{
	if(b==0)
		return 1;
	else
		return n*pwr(n,b-1);
}
int main()
{
	int n,b;
	scanf("%d %d",&n,&b);
	printf("%d\n",pwr(n,b) );
	return 0;
}