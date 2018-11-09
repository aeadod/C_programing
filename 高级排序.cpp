#include<stdio.h>
int main()
{
	int a[10]={2,3,9,8,7,5,1,4,6,0}; 
	for(int i=1;i<10;i++)
	{
		int f=0;
		for(int k=0;k<10;k++){
			if(a[k]>a[k+1])
		{
			int temp=a[k];
			a[k]=a[k+1];
			a[k+1]=temp;
			f=1;
		}
	}
	if(f==0)break;
	}
	int o[10];
	int j[10];
	int p1=0,p2=0;
	for(int i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			o[p1++]=a[i];
		}
		else
		j[p2++]=a[i];
	}
	int n[10];
	for(int i=0;i<p1;i++)
	n[i]=o[i];
	for(int i=0;i<p2;i++)
	n[p1+i]=j[i];
	
for(int i=0;i<10;i++)
printf("%d",n[i]);
		
}
