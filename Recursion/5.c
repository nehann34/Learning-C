#include<stdio.h>
int perfect(int n,int b)
{
	if(b!=0)
	{
		if(n%b ==0)
			return b+perfect(n,b-1);
		else
			return perfect(n,b-1);
	
	}	
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==perfect(n,n/2))
		printf("Perfect\n");
	else
		printf("Not Perfect\n");

	return 0;
}