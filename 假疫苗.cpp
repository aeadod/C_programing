#include<stdio.h> 
int main()
{
	int a,b,c;
	scanf("%d:%d:%d",&a,&b,&c);
	if((a>=0&&a<24)&&(b>=0&&b<=59)&&(c>=0&&c<=59))
	{
		if(c!=59) 
		
		printf("%d:%d:%d",a,b,c+1);
		
		else if((a!=23)&&(b!=59)&&(c==59)) 
		
		printf("%.2d:%.2d:00",a,b+1);
		
		else if((a==23)&&(b==59)&&(c==59))
		
		printf("00:00:00");
		
		
		else if((a!=23)&&(b==59)&&(c==59))
		
		printf("%.2d:00:00",a+1);
		
		else if((a==23)&&(b==59)&&(c==59))
		
		printf("00:00:00");
		else if((a==24)&&(b==00)&&(c==00))
		printf("00:00:01");
}
	
	else
	printf("请输入正确数据");
}
