//数字字符转换成十进制 
#include<stdio.h>
int main(){
	 char a[20],ch;
	 int i,n=0,f=1;
	 unsigned int x=0;
	 while((ch=getchar())!='\n') //读到换行符停止循环
	 	a[n++]=ch; //n是数字的个数
	for(i=n-1;i>=0;i--){
		printf("i是多少%d\n",i);
		x += (a[i]-48)*f; //a[i]-48 将a[i]转换成数值 >字符 a 对应的是97，97-48=49，直接对应的是数值1，所以减48起到的是一种将原字母编码的一种过程
		printf("x是多少%d\n",x);
		f*=10;
		printf("f是多少%d\n",f);
	} 
	printf("%u",x);
	return 0;
} 
