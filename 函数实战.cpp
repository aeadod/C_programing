#include<stdio.h>
#include<string.h>

void donut(int num)
	{
		
		int a=num/1000;
		int b=(num/100)%10;
		int c=(num%100)/10;
		int d=num%10;
		printf("%d%d %d%d",a,b,c,d);
	}
int main()
{int a;
	printf("请输入四位数字：");
	scanf("%d",&a);
	if(a>999&&a<10000)
	donut(a);
	else 
	printf("chongxin");
}





