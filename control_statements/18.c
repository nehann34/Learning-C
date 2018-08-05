#include<stdio.h>
int main()
{
	for(int i=1;i<=7;i++)
 	{	
 		if(i ==1 || i==7)
 		{
 			for(int j= 1 ;j<=7;j++)
	 			printf("*");
 			printf("\n");
 		 	
 		}
 		else
 		{
 		 printf("*");
 		 for (int j=2 ;j<=6;j++)
 		 	printf(" ");
 		 printf("*");
 		 printf("\n");			
 		}
 		
 }
	return 0;
}
