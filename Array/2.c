#include<stdio.h>
int main()
{
	int a[6]={3,4,33,2,5,1};
	int min=a[0],max=a[0];
	for(int i=1;i<6;i++)
	{
		if(a[i] < min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	printf("%d %d\n",min,max );
}