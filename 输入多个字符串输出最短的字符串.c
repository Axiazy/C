#include<stdio.h>
int main(){
	 char str[80],min[80];
	 int k,len;
	 printf("输入字符串\n");
	 gets(str);
	 strcpy(min,str);//假定第一个字符串是最短字符串
	 len = strlen(min);//len是最短字符串的长度
	 gets(str);//输入第二个字符串
	 while(str[0]!='\0')
	 {
	 	k = strlen(str); //当前字符串的长度 
	 	if(k<len){
	 		len = k;
	 		strcpy(min,str);//保存最短字符 
	 	}
	 	gets(str);//继续输入其他字符串 
	 	
	 } 
	 printf("len=%d, min=%s\n",len,min);
	return 0;
} 
