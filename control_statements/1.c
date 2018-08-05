#include<stdio.h>
int main()
{
	for(int i=1;i<=80;i++)
	{
		if(i % 8 == 0)
		{
			printf("%d\n",i);
			continue;
		}
		printf("%d\t",i);

	}
	return 0;

}
