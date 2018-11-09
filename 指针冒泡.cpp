#include <stdio.h>
#include <string.h>
void f(char *a){
	int nl=strlen(a);
	for(int i=1;i<nl;i++)
	{
		int f=0;
		for(int j=0;j<nl-i;j++){
		
		if(a[j]>a[j+1])
		{
			
			char temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			
			f=1;
		}
		
	}
	if(f==0)
	break;
	
}
}
int main()
{
	char a[]="edacf";
	char *str=a;
	f(str);
	printf("%s",str);
}
