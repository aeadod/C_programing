#include<stdio.h>
#include<string.h>
int main(){
//	int ch;
//	FILE *fp;
//	if((fp=fopen("clientsInfo.dat","r"))==NULL){
//		printf("Ê§°Ü");
//		 
//	}else {
//		while((ch=fgetc(fp))!=EOF)
//		printf("%c",ch);
//		fclose(fp);
//	}
	char s[2014];
	FILE *p;
	if((p=fopen("clientsInfo.dat","r"))==NULL){
		printf("Ê§°Ü");
	} else{
		while(fgets(s,2014,p)!=NULL){
			printf("%s",s);
		}
		fclose(p);
	}
	return 0;
}
