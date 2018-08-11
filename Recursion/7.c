#include<stdio.h>
void words(int n)
{
	int i;
	
	if(n!=0)
	{
		i=n%10;
		n=n/10;
		switch(i)
		{
		case 1:
			{
			printf("1");
			break;
	        }
	    case 2:
			{
			printf("2");
			break;
	        }
	    case 3:
			{
			printf("3");
			break;
	        }
	    case 4:
			{
			printf("4");
			break;
	        }
	    case 5:
			{
			printf("5");
			break;
	        }
	    case 6:
			{
			printf("6");
			break;
	        }
	    case 7:
			{
			printf("7");
			break;
	        }
	    case 8:
			{
			printf("8");
			break;
	        }
	    case 9:
			{
			printf("9");
			break;
	        }
	    default:
			printf("0");
	        
	}
	words(n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	words(n);

	return 0;
}