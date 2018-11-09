#include<stdio.h> 
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int ls;
	int ln;
	for(int i=0;i<4;i++)
	{
		ls=0;
		ln=0;	
			for(int j=0;j<3;j++)
		{
			
		//printf("%d ",a[j][i]);
			ls+=a[j][i];
			ln++;
			
		}
		printf("%d\n",ls/ln);
	}
	
}
