#include<stdio.h>
int main()
{
	int a[6]={3,4,33,2,5,1};
	int max2=a[0],max=a[0];
	for(int i=1;i<6;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i] < max && a[i]> max2)
			max2=a[i];
	}
	printf("%d %d\n",max,max2 );
}