#include<stdio.h>
int age(int n){
	if(n==1)//���г�ʼֵ 
	return 1;
	else
	return age(n-1)+1;//���ƹ�ϵ 
}
int main()
{
	//���� ��ÿ��ѧ�����Ⱥ�ߴ�һ��
	 int i=age(3);
	 printf("%d",i);
 } 
