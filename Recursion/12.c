#include<stdio.h>
int  logbas2(int a)
{
	if(a <2 )
		return 0;
	else
		return (1+logbas2(a/2));
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",logbas2(a) );
	return 0;
}