#include<stdio.h>
#include<string.h>
int main(){
	char account[30];
	int password;
	double balance;
	FILE *fp;
	//��ĩβ��ӣ����ı�ԭ���ġ� 
	if((fp=fopen("clientsInfo.dat","a+"))==NULL){
		printf("shibai");
		
	}else{
		printf("qingshuru:\n");
		while(1){
			scanf("%s%d%lf",account,&password,&balance);
			if(strcmp(account,"EOF")==0)
	
		break;
	fprintf(fp,"%s %d %lf\n",account,password,balance);
		
		}
		fclose(fp);
	}
	return 0;
}
