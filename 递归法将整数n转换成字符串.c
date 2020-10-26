#include <stdio.h>
void tranvers(int n){
	if(n/10!=0)//若n不是一位整数，则用n整除10的结果座位实参调用函数自身 
		tranvers(n/10);
	printf("%c",n%10+'0'); //将n的个位数转换成数字字符并以字符格式输出 
} 
int main(){
	int n;
	printf("输入一个整数\n");
	scanf("%d",&n);
	printf("字符串是:\n");
	if(n<0){
		printf("-");
		n= -1*n;
	}
	tranvers(n);
	return 0;
}
