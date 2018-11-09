#include<stdio.h>
#include<string.h>
int fb(int n)

{
	if(1==n||2==n){
	
	return 1;}
	return fb(n-1)+fb(n-2);
}

int main()
{
	int arr[5]={1,2,3,4,5};
	change(arr);
printf("%d",arr[0]);
	
}
