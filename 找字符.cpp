#include<stdio.h>
#include<string.h>
int main()
{
	char address[100];
	char fc='\0';
	memset(address,'\0',sizeof(address));
	scanf("%s",address);
	scanf("\n%c",&fc);
	int n=0;
	for(int i=0;i<strlen(address);i++)
	{
		if(fc==address[i]){
			n++;
		}
		
	
	}
	if(n==0)
		printf("wu");
		else{
			printf("ур╣╫ак%d",n);
		}	

 } 

