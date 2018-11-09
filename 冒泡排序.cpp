#include<stdio.h>
int main()
{
	int a[10]={2,4,7,9,6,0,1,8,3,5};
	for(int i=1;i<10;i++)
	{
		int f=0;
		for(int k=0;k<10-i;k++)//转换9次 
		{
			
			if(a[k]>a[k+1])
			{
				int temp;
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
				f=1;
			}
			
			
		}
		if(f==0)
		break;
		printf("第%d次排序是：",i);
for(int i=0;i<10;i++)
printf("%d",a[i]);
		
	}
//for(int i=0;i<10;i++)
//printf("%d",a[i]);
//		
 } 
