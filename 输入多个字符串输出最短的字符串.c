#include<stdio.h>
int main(){
	 char str[80],min[80];
	 int k,len;
	 printf("�����ַ���\n");
	 gets(str);
	 strcpy(min,str);//�ٶ���һ���ַ���������ַ���
	 len = strlen(min);//len������ַ����ĳ���
	 gets(str);//����ڶ����ַ���
	 while(str[0]!='\0')
	 {
	 	k = strlen(str); //��ǰ�ַ����ĳ��� 
	 	if(k<len){
	 		len = k;
	 		strcpy(min,str);//��������ַ� 
	 	}
	 	gets(str);//�������������ַ��� 
	 	
	 } 
	 printf("len=%d, min=%s\n",len,min);
	return 0;
} 
