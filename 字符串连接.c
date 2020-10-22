#include<stdio.h>
int main(){
	char str1[50],str2[20];
	int i=0,j=0;
	printf("输入第一个字符串: \n");
	gets(str1);
	printf("输入第二个字符串：\n");
	gets(str2);
	while(str1[i]!='\0')
		i++; //定位到第一个字符串空字符的位置 
	printf("i=%d",i);
	while((str1[i++] = str2[j++]) !='\0');//复制第二个字符串到第一个字符串的后面 do{ str1[i]=str2[j]; i++; j++; }while( str1[i] != '\0' )
	printf("连接后的字符串:\n");
	puts(str1);
	return 0;
} 
