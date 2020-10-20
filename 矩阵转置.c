#include <stdio.h>
int main()
{
	int a[2][3]  ={{1,2,3},{3,2,1}};// {1,2,3,3,2,1} 也对 
	 int b[3][2],i,j;

	printf("Array a:\n"); //输出原始矩阵 
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
			printf("%5d", a[i][j]);
		printf("\n"); 
	}
	
 
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			b[j][i] = a[i][j];
 
	printf("Array b:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
			printf("%5d",b[i][j]);
		printf("\n");
	}
		
			 
	return 0;
}
