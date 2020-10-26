#include <stdio.h>
#include <stdlib.h>
long fact(int n){
	long k;
	if(n<0){
		printf("数据出错!\n");
		exit(0);
	}
	else if(n==0||n==1) k=1;//0或1的阶乘是1 
	else 
		k=n*fact(n-1);//若n>1,n!=n*(n-1)! 
	return k;
}
int main(){
	int n;
	long f;
	printf("输入一个正整数!\n");
	scanf("%d",&n);
	f =fact(n);
	printf("%d!=%ld\n",n,f);
 
	return 0;
}
