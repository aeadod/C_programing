#include<stdio.h>
int main()
{
	double sal[5]={1500,2000.43,1202.78,8000.32,5000};
	for(int i=0;i<5;i++)
	{
	if(i<4)
	printf("%lf,",sal[i]);
	else
	printf("%lf\n",sal[i]);
	}
	printf("%p\n",&sal[0]);
	printf("%p\n",sal);
	printf("%p\n",&sal[4]);
	printf("%p\n",(sal+4));
	double * head=&sal[0];
	double * tall=&sal[4];
	printf("%lf\n",*head);
	printf("%lf\n",*tall);
	printf("%p\n",head);
	printf("%p\n",tall);
	printf("%d\n",tall-head);
	head=head+2;
	printf("hahaha%lf\n",*head);
	head=&sal[0];
	for(int i=0;i<5;i++)
	printf("%lf\n",*(head+i));
	for(int i=0;i<5;i++)
	printf("hehehe%lf\n",*(tall-i));
}
