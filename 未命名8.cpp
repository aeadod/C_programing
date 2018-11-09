#include<stdio.h>
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int sum=0;
	int number=0;
	int ls;
	int ln;
	for(int i=0;i<3;i++)
	{
		ls=0;
		ln=0;
		for(int j=0;j<4;j++){
		
		sum+=a[i][j];
		number++;
		ls+=a[i][j];
		ln++;}
		printf("第i行的平均：%.2f",ls/(float)ln);
	}
	printf("%d",sum/number);
}
