#include<stdio.h>
int main()
{
	int a[3][4]={{3,2,1,4},{7,6,5,8},{12,10,11,9}};
	int b[12]; 
 	int n=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
	{
		b[n++]=a[i][j];
	}
	
	}
for(int i=1;i<11;i++)
{
	int flag=0;
	for(int j=0;j<12-i;j++)
	{
		if(b[j]>b[j+1]){
		
		int temp;
		temp=b[j];
		b[j]=b[j+1];
		b[j+1]=temp;
		flag=1;}
	}
	if(flag=0)
	break;
}
 } 
