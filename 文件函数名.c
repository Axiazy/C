#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	if((fp=fopen("d1.txt","w"))==NULL){
		printf("1-ֻд��ʧ��");
		exit(0);
	}
	fprintf(fp,"1-��ֻд��ʽ���ļ�");
	fclose(fp);

//----------------------------------------------
	FILE *fp2;
	char str[120];
	if((fp2=fopen("d2.txt","r"))==NULL){
		printf("2-ֻ����ʧ��");
		exit(0); 
	}
	fprintf(fp2,"2-��ֻ����ʽ���ļ�");
	if(fgets(str,121,fp2)!=NULL) //���ļ������ַ��� 
	{
		puts(str);//�������Ļ�� 
	}
	fclose(fp2);
	return 0;
//----------------------------------------------	
 
//----------------------------------------------
	/*
	FILE *fp1,*fp2;
	int a,b;
	
	if((fp1==fopen("file1.c","r"))==NULL) //ֻ��
	{
		printf("ֻ����ʧ��\n");
		exit(0);
	} 
	if((fp2==fopen("file2.c","w"))==NULL) {
		printf("�򿪴���\n");
		exit(0);
	}*/
}
