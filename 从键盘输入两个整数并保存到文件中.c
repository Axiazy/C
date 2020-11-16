#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	int a,b;
	scanf("%d%d",&a,&b);
	if((fp=fopen("d1.txt","w"))==NULL) //只写，并检查是否成功
	{
		printf("file open error.");
		exit(0);
	} 
	printf("%d %d",a,b);
	fprintf(fp,"%d %d",a,b);
	fclose(fp);
} 
