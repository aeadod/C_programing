#include<stdio.h>
#include<string.h>
int main(){
	char account [30];
	int password;
	double balance;
	
	FILE *fp;
	//fprintf(fp,"%d",a); 
	if((fp=fopen("clientsInfo.dat","w"))==NULL){
		printf("√ª”–"); 
	}else {
		printf("«Î ‰»Î’À∫≈£¨√‹¬Î£¨”‡∂Ó\n"); 
		printf("EOFΩ· ¯");
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
 
