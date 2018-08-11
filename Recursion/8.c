#include<stdio.h>
void rem(int a,int b)
{
	if(a>=b)
	{
		a=a-b;
		rem(a,b);
	}
	else
		printf("%d\n",a );
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	rem(a,b);
	return 0;
}