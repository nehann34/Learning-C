#include<stdio.h>
int main()
{
	int x,n,t,s=0,sign;
	scanf("%d %d",&x,&n);
 	for(int i=1;i<=n;i++)
 	{	
 		t=1;
 		if(i%2==0)
 			sign=-1;
 		else
 			sign = 1;
 		for(int j=1;j<=i;j++)
 			t=t*x;
 		t=sign * t;
 		s=(s+t);
 		}
 	printf("%d",s);
	return 0;
}
