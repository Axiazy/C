#include <stdio.h>
int main(){
	int c[3][4] ={{2,1,4,5},{3,2,1,2},{0,1,2,1}},i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%d ",c[i][j]); //输出原始矩阵 
		printf("\n");
	}
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(i==0||i==2||j==0||j==3) //判断是否是外围元素
				sum+=c[i][j];
	printf("sum=%d\n",sum);
	return 0; 
} 
