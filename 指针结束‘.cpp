#include<stdio.h>
int main()
{
	int *a[10];
	int d;
	a[0]=&d;
	char c1[]="how";
	char c2[]="are";
	char *c3="you";
	char *p[3];
	p[0] =c1;
	p[1]=c2;
	p[2]=c3;//÷∏’Îº‰∏≥÷µ 
	for(int i=0;i<3;i++)
	printf("%s ",*(p+i));
	}
