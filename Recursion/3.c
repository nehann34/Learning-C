#include<stdio.h>
int cnt(int a, int b)
{
	if(a<=b)
	{
		if(a==2 || a==3)
			return (1+cnt(a+1,b));
		else
		{
			for (int i = 2; i <= a/2;i++ )
			{
				if(a%i==0)
					return cnt(a+1,b);		
				else if(a%i !=0 && i<a/2)
					continue;
				else
					return 1+cnt(a+1,b);
						

			}
		}
	}
	else
		return 0;
}

int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	printf("%d\n",cnt(a,b) );
	return 0;
}