#include<stdio.h>
int main(){
	char a[3][5];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2*i+1;j++)
			a[i][j]='*'; //ÿһ�к�����Ǻ� 
		for(j=2*i+1;j<5;j++)
			a[i][j]=' ';//ÿһ�к���Ŀո� 
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("%c",a[i][j]);
		printf("\n");
	} 
	return 0;
}
