#include<stdio.h>
int main()
{
	int n,d,c=0,temp;
	scanf("%d %d",&n,&d);
	temp=n;
	while(temp>0)
		{
			n=temp%10;
			if(n==d)
				c++;
			temp=temp/10;	
		}
	
	printf("%d",c);
	return 0;
}
