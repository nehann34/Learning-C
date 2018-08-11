#include<stdio.h>
int  logbasb(int a)
{
	if(a <b )
		return 0;
	else
		return (1+logbasb(a/b));
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",logbasb(a) );
	return 0;
}