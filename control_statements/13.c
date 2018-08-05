#include<stdio.h>
int main()
{
	int n,t=1,s=0;
	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{
 		s=s+t;
 		t=(t*10)+1;
 	}
 	printf("%d",s);
	return 0;
}
