#include<stdio.h>
#include<string.h>


void findnum(char s[])
{
	char a[100]={};
	int j=0;
	for(int i=0;i<strlen(s);i++)
	{	
		if(s[i]>='0'&&s[i]<='9')
			{
				
				a[j]=s[i];
				j++;
				if(!(s[i+1]>='0'&&s[i+1]<='9'))
				{
					a[j]='\0';j++;
				}
			}
	
	}
	
	int b[100]={};
	int temp=0;
	for(int q=0;q<100;q++)
	{
		if(a[q+1]!='\0')
		{
		}
	}
	
	
	
	for(int k=0;k<100;k++)
	{
		printf("%c",b[k]);
	}
}



int main()

{
	char s[100]={};
	gets(s);
	findnum(s);
	return 0;		
 } 
