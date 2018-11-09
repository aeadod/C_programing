#include<stdio.h>
int main()
{
	char ch='a';
	int a=3;
	float f=5.3;
	double d=5.23;
	void *pa=&a;
	void *pch=&ch;
	float *pf=&f;
	double *pd=&d;
	printf("%d\n",*pa);
	printf("%c\n",*pch);
	printf("%f\n",*pf);
	printf("%lf\n",*pd);
	*pa=979;
	*pf=56.56;
	*pd=59.5959;
	*pch='A';
	printf("%d\n",*pa);
	printf("%c\n",*pch);
	printf("%.2f\n",*pf);
	printf("%.4lf\n",*pd);
	

//	printf("%d",sizeof(*p));
 } 
