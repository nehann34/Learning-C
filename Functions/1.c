#include<stdio.h>
void multiplication_table(int n)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);

	}
}
int main()
{
	int n;
	scanf("%d",&n);
	multiplication_table(n);
	return 0;

}