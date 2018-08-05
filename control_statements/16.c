#include<stdio.h>
int main()
{
	int n=2,r,p,c,m,s,count=0,max;
 	for(int i=1;i<=n;i++)
 	{	
 		s=0;
  		scanf("%d",&r);
 		while(r <1000 || r>9999)
 			 scanf("%d",&r);
 		scanf("%d %d %d ",&p,&c,&m);
 		if(p>=40 && c>=40 && m>=40)
 			{
 				s=p+c+m;
 				if(s>200 )
 				{
 					count++;
 					if(s>max)
 						max=r;
 				}
 			}

 	}
 	printf("%d",max);
	return 0;
}
