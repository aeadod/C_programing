#include <stdio.h>
void f(int *a,int b){
	for(int i=0;i<b;i++)
	printf("%d",10*(*(a+i)));
}

int main()
{
	char a[10]={'a','c','d','h'};
	f(a,10);
	}
