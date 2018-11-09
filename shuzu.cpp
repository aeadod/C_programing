#include<stdio.h>
int main()
{
	int a[10]={2,4,7,9,6,0,1,3,8,5};
	for(int i=1;i<10;i++)
	{
		for(int k=0;k<9;k++)
		{
			int temp;
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			
		}
	
		
	}
for(int i=0;i<10;i++)
printf("%d",a[i]);
		
 } 
