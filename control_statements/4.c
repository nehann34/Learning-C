#include<stdio.h>
int main()
{
	int low =2,c=0;
	int high = 99;
	while(low < high)
	{
		c=0;
		// if(low==2 || low==3)
		// 	printf("%d\t",low);
		for(int i=2;i<=low/2;i++)
		{
			if(low%i==0)
			{
				c++;
				break;			
			}
		}
		if(c==0)
			printf("%d\t",low);
		low++;

	}
	return 0;
}