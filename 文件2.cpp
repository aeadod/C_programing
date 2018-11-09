#include<stdio.h>
#include<string.h>
int main(){
	char account[30];
	int password;
	double balance;
	FILE *fp;
	if((fp=fopen("clientsInfo.dat","r"))==NULL){
		printf("Ê§°Ü");
		 
	}else{
		while(1)
		{
			int a=fscanf(fp,"%s %d %lf\n",account ,&password,&balance);
			if(a!=3)
				break;
			printf("account:%s,password:%d,balance:%lf\n",account,password,balance);
			
		
		
		}
			fclose(fp);
	}
	return 0;
}
