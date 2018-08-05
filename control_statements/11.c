#include<stdio.h>
int main()
{
	int x,y,ans=1;
	scanf("%d %d",&x,&y);
	for(int i=1;i<=y;i++)
	{
		ans*=x;
	}
	printf("%d",ans);
	return 0;
}
