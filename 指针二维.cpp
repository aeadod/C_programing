#include<stdio.h>
int main()
{
//	int a[2][3]={1,3,3,4,5,9};
//	int (*aa)[2][3]=&a;
//	//printf("%d",*(p[0]+1));
//	printf("%p\n",aa);
//	printf("%p\n",aa[0][0][0]+1);
	int a=5;
	int *p=&a;
	int ** p1=&p;
	printf("%d %p %p\n",a,p,p1);
	printf("%d %p %d",*p,*p1,**p1);
}
