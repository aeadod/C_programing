#include<stdio.h>
int main()
{
	int i=1;
	int a;
	int k=0;
	while(1)
	{
		k++;
	printf("请输入密码:");
	scanf("%d",&a);
	if(a==123456)
	{
	printf("duile");
	break;
	}
	else
	printf("cuole,你的剩余次数还有%d次\n",5-k);
	if(5-k==0)
	return 0;
	} 
	
	}
