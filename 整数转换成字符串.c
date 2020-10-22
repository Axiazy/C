#include <stdio.h>
void to_str(int n){
	char string[10];
	int i=0;
	if(n<0){
		putchar('-');
		n=-n;//负数取正 
	}
	while(n>0){ //按个、十、百..转换成数字字符并存放 
		string[i++] = n%10+'0';//将取出的整数加上ascii码的字符'0'转换成字符
		n/=10; //取下一位 
	}
	while(--i>=0)//从数组String的最后一个元素开始，依次向前逐个输出数组元素
		putchar(string[i]); 
}

int main(){
	to_str(-178);
	return 0;
}
