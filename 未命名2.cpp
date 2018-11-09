#include<stdio.h>
#include<string.h>
int main()
{
	int m,d;
	
scanf("%d",&m);
scanf("%d",&d);
printf("您输入的时%d月%d日",m,d);
if((m==3&&d>=21)||(m==4&&d<20))
	
	printf("baiyang");

else if((m==4&&d>=21)||(m==5&&d<20))

printf("jinniu");
else if((m==5&&d>=21)||(m==6&&d<20))

printf("双子");
else if((m==6&&d>=21)||(m==7&&d<22))

printf("巨蟹");
else if((m==7&&d>=23)||(m==8&&d<22))

printf("狮子");
else if((m==8&&d>=23)||(m==9&&d<22))

printf("处女");
else if((m==9&&d>=23)||(m==10&&d<22))

printf("天秤");
else if((m==10&&d>=23)||(m==11&&d<22))

printf("处填写");
else if((m==11&&d>=23)||(m==12&&d<22))

printf("射手");
else if((m==12&&d>=23)||(m==1&&d<20))

printf("摩羯");
else if((m==1&&d>=21)||(m==2&&d<20))

printf("宝瓶");
else if((m==2&&d>=21)||(m==3&&d<20))

printf("双鱼");
else
printf("gun") ;
}

