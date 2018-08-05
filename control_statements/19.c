#include<stdio.h>
int main()
{
	char a[10][10];
	for(int i=0;i<7;i++)
		{
			for(int j=0;j<7;j++)
				a[i][j]='*';
		}
	for(int i=0;i<7;i++)
		for(int j=0;j<7;j++)
		{
			if(i == j)
				a[i][j]= '\\';
			if(i+j==6)
				a[i][j]='/';
		}
	for(int i=0;i<7;i++)
		{
			for(int j=0;j<7;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
	return 0;
}
