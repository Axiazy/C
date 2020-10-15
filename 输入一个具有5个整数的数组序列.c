//输入一个具有5个整数的数组序列，
//数据依次后移一个位置，并将第五个数据放在第一个数据的位置上
#include <stdio.h>

int main(){
	int a[5],i,t;
	printf("输入原始数据序列: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	t =a[4];
	for(i=4;i>0;i--){
		a[i] = a[i-1];
	}
	a[0]=t;
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	return 0;
} 
