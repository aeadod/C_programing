#include<stdio.h>
#include<string.h>



void ff(int a,int b)
{
int temp=a;
a=b;
b=temp;
printf("%d,%d",a,b);
}
//int ff(int a,int b)
//{
//	return a+b;
//}
//void f(){
//	for(int i=0;i<7;i++)
//{
//	for(int j=0;j<7-i;j++)
//	printf("* ");
//		
//	printf("\n");
//}
//}
int main()
{
//	for(int i=0;i<10;i++)
	ff(3,5);
}
