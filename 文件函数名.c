#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	if((fp=fopen("d1.txt","w"))==NULL){
		printf("1-只写打开失败");
		exit(0);
	}
	fprintf(fp,"1-以只写方式打开文件");
	fclose(fp);

//----------------------------------------------
	FILE *fp2;
	char str[120];
	if((fp2=fopen("d2.txt","r"))==NULL){
		printf("2-只读打开失败");
		exit(0); 
	}
	fprintf(fp2,"2-以只读方式打开文件");
	if(fgets(str,121,fp2)!=NULL) //从文件读入字符串 
	{
		puts(str);//输出到屏幕上 
	}
	fclose(fp2);
	return 0;
//----------------------------------------------	
 
//----------------------------------------------
	/*
	FILE *fp1,*fp2;
	int a,b;
	
	if((fp1==fopen("file1.c","r"))==NULL) //只读
	{
		printf("只读打开失败\n");
		exit(0);
	} 
	if((fp2==fopen("file2.c","w"))==NULL) {
		printf("打开错误\n");
		exit(0);
	}*/
}
