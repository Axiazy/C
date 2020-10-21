#include<stdio.h>
int main(){
	char a[3][5];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2*i+1;j++)
			a[i][j]='*'; //每一行后面的星号 
		for(j=2*i+1;j<5;j++)
			a[i][j]=' ';//每一行后面的空格 
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("%c",a[i][j]);
		printf("\n");
	} 
	return 0;
}
