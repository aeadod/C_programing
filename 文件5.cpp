#include<stdio.h>
int main(){
	int ch;
	char s[1024];
	FILE *fp,*sp;
	if((sp=fopen("clientsInfo.dat","r"))==NULL){
		printf("ʧ��"); 
	}else {
		if((fp=fopen("bak.dat","w"))==NULL){
			printf("ʧ"); 
		}else {
			//while((ch=fgetc(sp))!=EOF)
			while(fgets(s,1024,fp)!=NULL)
			{
				//fputc(ch,fp);
				fputs(s,fp);
			}
			fclose(fp);
		}
		fclose(sp);
	}
	return 0;
}
