#include <stdio.h>
#include <stdlib.h>
long fact(int n){
	long k;
	if(n<0){
		printf("���ݳ���!\n");
		exit(0);
	}
	else if(n==0||n==1) k=1;//0��1�Ľ׳���1 
	else 
		k=n*fact(n-1);//��n>1,n!=n*(n-1)! 
	return k;
}
int main(){
	int n;
	long f;
	printf("����һ��������!\n");
	scanf("%d",&n);
	f =fact(n);
	printf("%d!=%ld\n",n,f);
 
	return 0;
}
