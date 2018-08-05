#include<stdio.h>
int main()
{
	int n,temp1,temp,reverse=0;
	scanf("%d",&n);
	temp=n,temp1=n;
	while(temp>0)
	{
		n=temp%10;
		reverse=reverse * 10 +n;
		temp=temp/10;
	}
	if(reverse==temp1)
		printf("Palindrome\n");
	else
	printf("Not Palindrome\n");
	return 0;

}