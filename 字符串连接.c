#include<stdio.h>
int main(){
	char str1[50],str2[20];
	int i=0,j=0;
	printf("�����һ���ַ���: \n");
	gets(str1);
	printf("����ڶ����ַ�����\n");
	gets(str2);
	while(str1[i]!='\0')
		i++; //��λ����һ���ַ������ַ���λ�� 
	printf("i=%d",i);
	while((str1[i++] = str2[j++]) !='\0');//���Ƶڶ����ַ�������һ���ַ����ĺ��� do{ str1[i]=str2[j]; i++; j++; }while( str1[i] != '\0' )
	printf("���Ӻ���ַ���:\n");
	puts(str1);
	return 0;
} 
