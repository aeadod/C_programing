#include<stdio.h>
int main()
{
	int a,b,c;
	
	scanf("%d:%d:%d",&a,&b,&c);
	if((a>=0&&a<=24)&&(b>=0&&b<=59)&&(c>=0&&c<=59)){
	
	if(c==59);
	{
		b++;c=00;
	}
	if(b==59)
	{a++;
	b=00;}
	
	
	else
	printf("%d:%d:%d",a+1,b+1,c+1);
	
	
	
	
	
}
else
printf("请输入正确数据"); 
}
