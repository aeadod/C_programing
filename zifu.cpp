#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	memset(a,'\0',sizeof(a));
	printf("������:"); 
	scanf("%s",a);
	printf("\n����ming:"); 
	scanf("%s",b);
	strcat(a,",");
	strcat(a,b);
	printf("%s,������%d",a,strlen(a));
//	for(int i=strlen(a)-1;i>=0;i--)
//	
//	printf("%c",a[i]);
 } 
