#include<stdio.h>
#include<string.h>
int main()
{
	int m,d;
	
scanf("%d",&m);
scanf("%d",&d);
printf("�������ʱ%d��%d��",m,d);
if((m==3&&d>=21)||(m==4&&d<20))
	
	printf("baiyang");

else if((m==4&&d>=21)||(m==5&&d<20))

printf("jinniu");
else if((m==5&&d>=21)||(m==6&&d<20))

printf("˫��");
else if((m==6&&d>=21)||(m==7&&d<22))

printf("��з");
else if((m==7&&d>=23)||(m==8&&d<22))

printf("ʨ��");
else if((m==8&&d>=23)||(m==9&&d<22))

printf("��Ů");
else if((m==9&&d>=23)||(m==10&&d<22))

printf("���");
else if((m==10&&d>=23)||(m==11&&d<22))

printf("����д");
else if((m==11&&d>=23)||(m==12&&d<22))

printf("����");
else if((m==12&&d>=23)||(m==1&&d<20))

printf("Ħ��");
else if((m==1&&d>=21)||(m==2&&d<20))

printf("��ƿ");
else if((m==2&&d>=21)||(m==3&&d<20))

printf("˫��");
else
printf("gun") ;
}

