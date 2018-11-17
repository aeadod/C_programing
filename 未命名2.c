#include<stdio.h>
#include<string.h>
int main()
{
	int m,n;
	char a[100]={};
	int b[100]={};
	freopen ("number.txt", "r", stdin);
	while(scanf("%s",a)!=EOF)
	{
	int i=0,j=0,k,len=strlen(a);
	while(i<len) 
	{
	if (a[i]>='0'||a[i]<='9') 
	{
    	i++;
	}
	else{
		while(i<len)
				{
				b[j]=b[j]*10+( a[i]-'0' );
                i++;
                }
        j++;
        }
	}
for(i=0;i<j;i++)
{
	for(k=0;k<j;k++)
	{
		if(b[i]>b[k])
		{
       		int temp;
			temp=b[i];
			b[i]=b[k];
			b[k]=temp;
		}
	}
}
for(i=0;i<j;i++)
{
	printf("%d ",b[i]);
} 
return 0;
}}
