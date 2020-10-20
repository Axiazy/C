#include <stdio.h>
int main(){
	int a[3][2] , b[3][2],c[3][2],i,j;
	printf("Array a:\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	printf("Array b:\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			c[i][j] =a[i][j]+b[i][j];
	printf("Array c:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
		
			 
	return 0;
}
