#include <stdio.h>
 //交换3x4二维整型数组的i,j两行 
void exchange(int b[][4],int i,int j){
	int k,t;
	for(k=0;k<4;k++){
		t = b[i][k];
		b[i][k] = b[j][k];
		b[j][k] = t;
	}
}
int main(){
	 int i,j,a[3][4] ={
	 {1,1,1,1},{3,3,3,3},{2,2,2,2} 
	 };
	 exchange(a,1,2);//交换1，2行的元素
	 for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%d,",a[i][j]);
		printf("\n"); 	
	}
	 
	return 0;
} 
