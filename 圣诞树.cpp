#include<stdio.h>
int main()
{
 	for(int i=0;i<3;i++)
 	{
 		
 		for(int j=0;j<3-1-i;j++)
		{
		
		 printf(" ");
		
	
 		}
 		for(int k=0;k<2*i+1;k++)
 		printf("*");
	printf("\n");
	}
 }
	
 
