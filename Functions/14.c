#include<stdio.h>
int isvalid(int d,int m ,int y)
{
	int f=1,leap=0;
	
	if((y%100 == 0 && y%400 == 0) || (y%100 !=0 && y%4 ==0))
		leap=1;
	if(d<1 || d>31 || m>12 || m<1)
		f=0;
	if(m==2)
	{
		if(d==30 || d==31 || (d==29 && leap==0))
			f=0;
	}
	if(m==4 || m==6 || m==9||m==11)
	{
		if(d==31)
			f=0;
	}
	if(f==0)
		return 0;
	else
		return 1;

}
int main()
{
	int d,m,y;
	scanf("%d/%d/%d",&d,&m,&y);
	printf("%d\n",isvalid(d,m,y) );
	return 0;
}