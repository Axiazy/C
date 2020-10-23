#include <stdio.h>
double count(int n){
	int i;
	double sum=0;
	if(n<=0){
		printf("Data error\n");
		return 0;
	}
	for(i=1;i<=n;i++)
		sum+=1.0/i; //必须写出1.0/i,否则是整数运算 
	return sum; 
}
int main(){
	int n;
	double s;
	printf("输入一个值:\n");
	scanf("%d",&n);
	s = count(n);
	printf("s=%6.2f\n",s);
	return 0;
} 
