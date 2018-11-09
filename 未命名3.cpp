#include<stdio.h>
int main()
{
	int a;
	int i=0;
	while(1)
	{
		i++;
	if(i==1)
	printf("请输入密码：");
	else
	{
	
	printf("请再次输入：,您剩余次数还有%d次",4-i);}
	
	scanf("%d",&a);
	
	if(a==123456)
	{
	printf("zhengque");
	break;
	}
	if(i==3)
	{
	printf("账号被冻结");
	return 0;}
	
	}}
