#include<stdio.h>
int cmpdate(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if(y1>y2)
		return 1;
	if(y1<y2)
		return -1;
	if(y1==y2)
	{
		if(m1>m2)
			return 1;
		if(m1<m2)
			return -1;
		if(m1==m2)
		{
			if(d1>d2)
				return 1;
			if(d1< d2 )
			    return -1;
			if(d1==d2)
				return 0;
		}
	}
}
int main()
{
	int d1,d2,m1,m2,y1,y2;
	scanf("%d %d %d %d %d %d",&d1,&m1,&y1,&d2,&m2,&y2);
	printf("%d\n",cmpdate(d1,m1,y1,d2,m2,y2) );
	return 0;
}