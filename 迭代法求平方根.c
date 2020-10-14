#include<stdio.h>
#include<math.h> 
int main(){
 	float a,x0,x1;
 	scanf("%f",&a);
 	x1 =a/2;
 	do{
 		x0=x1;
 		x1 = (x0+a/x0)/2;
 	}while(fabs(x1-x0)>1e-5); //迭代结束条件取反
	printf("sqrt(%.2f)=%f \n",a,x1); 
	return 0;
}
