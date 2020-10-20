#include <stdio.h>
int main(){
 /*首先遍历二维数组每一行的元素，找到行中最大元素； 
 然后判断该元素所在的列中是否是最小
 如果发现该列还有比其小的元素，立刻终止对该行的处理，此元素一定不是鞍点
 鞍点是指在行中数值最大而在列中数值最小的元素，鞍点可能有很多个，
 假设每一行只有一个最大值。 
 */
 int i,j,k,max,jmax,flag=0,a[3][4]={{1,9,7,6},{4,6,0,5},{8,7,8,2}};
 for(i=0;i<3;i++){
 	max = a[i][0];//将max的初值设为第i行首元素 
 	jmax=0;//将max的列下标jamx的初值设为0 
 	for(j=0;j<4;j++)
 		if(a[i][j] >max){ //将第i行的第j元素和max比较 
 			max=a[i][j]; //比max大的数放入max 
 			jmax =j; //jmax记录大数所在列号 
 		}
 	for(k=0;k<3;k++)
 		if(a[k][jmax] <max) //找jmax列上最小的元素 
 			break;
 	if(k>=3)
	 {
	 	printf("鞍点位置为: %d, %d,鞍点值为: %d\n",i,jmax,a[i][jmax]);
	 	flag=1;
	 }
}
	 if(!flag)
	 	printf(" 无鞍点！\n"); 
 
	return 0; 
} 
