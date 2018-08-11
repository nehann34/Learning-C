#include<stdio.h>
void words(int n)
{
	int i;
	
	if(n!=0)
	{
		i=n%10;
		n=n/10;
		words(n);
		switch(i)
		{
		case 1:
			{
			printf("one ");
			break;
	        }
	    case 2:
			{
			printf("two ");
			break;
	        }
	    case 3:
			{
			printf("three ");
			break;
	        }
	    case 4:
			{
			printf("four ");
			break;
	        }
	    case 5:
			{
			printf("five ");
			break;
	        }
	    case 6:
			{
			printf("six ");
			break;
	        }
	    case 7:
			{
			printf("seven ");
			break;
	        }
	    case 8:
			{
			printf("eight ");
			break;
	        }
	    case 9:
			{
			printf("nine ");
			break;
	        }
	    default:
			printf("zero ");
	        
	}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	words(n);

	return 0;
}