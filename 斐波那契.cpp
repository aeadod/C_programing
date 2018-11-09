#include<stdio.h>
#include<string.h>
int fb(int n)

{
	if(n==1||n==2){
	
	return 1;}
	return fb(n-1)+fb(n-2);
}

int main()
{
	int a=fb(6);
	printf("%d",a);
	
}
