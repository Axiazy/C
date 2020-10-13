#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<9;i++){
		for(j=1;;j++){
			if(j>i) break;
				printf("%dx%d=%-4d",i,j,j*i);
		}
		printf("\n");
	}
	return 0;
} 
/*
printf("%4d", 12);
会输出
  12
即先输出两个空格，再输出12。

而如果是printf("%4d", 12345);
由于12345占五位，超过了4的限制，所以会输出本身值12345，没有任何空格填补。
*/
