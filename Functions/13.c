#include<stdio.h>
int isleap(int year)
{
	if(year %100 == 0)
		{
		if(year %400 == 0)
			return 1;
		else
			return 0;
		}
	else
	{
		if(year %4 == 0)
			return 1;
		else
			return 0;
	}

}
int main()
{
	int y;
	scanf("%d",&y);
	printf("%d\n",isleap(y) );
	return 0;
}