#include<stdio.h>
int main()
{
	int n,temp,reverse=0;
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		n=temp%10;
		reverse=reverse * 10 +n;
		temp=temp/10;
	}
	printf("Reverse : %d,double of reverse : %d",reverse,2*reverse);
	return 0;

}