#include<stdio.h>

//void name(void (*ah)(void))
//{
//	printf("内容由制定者输入："); 
//	ah();
//}
//void mm(){
//	printf("天不下雨"); 
//}
//void hh(){
//	printf("jin tian he bian yue bu");
//}
int myf(int a,int b){
	if(a<b)
	return 1;
	else
	return -1;
}
void sort(int a[],int n,int (*dx)(int a,int b))
{
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			if(dx(a[j],a[j+1])>0)
			
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	
	}
}
void p(int a[],int b)
{
	for(int i=0;i<b;i++)
	printf("%d\n",a[i]);
}
int main()
{
	int ar[10]={5,4,3,5,6,2,1,10,0,2};
	sort(ar,10,myf);
	p(ar,10);
//	name(hh);
 } 
