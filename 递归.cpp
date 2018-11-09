#include<stdio.h>
int age(int n){
	if(n==1)//必有初始值 
	return 1;
	else
	return age(n-1)+1;//递推关系 
}
int main()
{
	//年龄 ，每个学生都比后边大一岁
	 int i=age(3);
	 printf("%d",i);
 } 
