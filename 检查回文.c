//判断字符串Str是否为回文，若是返回1，否则返回0
//回文：正反序相同的字符串 
//第0个字符和第n-1个字符比较，不相等不是回文，相等继续进行下面的操作
//第1个字符和第n-2个字符比较，不相等不是回文，相等继续进行下面的操作
//第n/2 -1个字符和第n-1-(n/2 -1)个字符比较，不相等不是回文，相等则是回文 
#include <stdio.h>
int fun(char str[]){
	int n,k,flag=1;
	for(n=0;str[n]!='\0';n++);//计算字符串长度
	for(k=0;k<n/2;k++)  //判断字符串是否为回文
		if(str[k]!=str[n-k-1]) //判断字符串是否为回文 
		{
			flag=0;
			break;
		}
	return flag;
}

int main(){
 	char s[80];
 	printf("输入字符串\n");
 	gets(s);
 	if(fun(s)==1)
 		printf("是回文\n");
 	else
 		printf("不是回文");
	return 0;
} 
