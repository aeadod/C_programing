#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
 } 
int main()
{
	int (*pmax)(int a,int b);
	pmax=max;//Pzhixiang max
	int p=pmax(20,45);
	printf("%d",p); 
 } 
//int ma(int a)
//{
//	printf("woshiyizhmao");
//	a=a+999;
//	return a;
//}
//int main()
//{
//	int (*p)(int a);
//	p=ma;
////	p(1);
//	int o=p(1);
//	
//	printf("%d",o);
//}
