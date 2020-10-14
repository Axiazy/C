//双重循环法 
#include<stdio.h>
#include<math.h> 
int main(){
 	 int i,j;
 	 double sum=0,flag=1;
 	 double x,t,a;
 	 printf("输入角度\n");
 	 scanf("%lf",&a);
 	 x = a*3.1415926/180; //将输入的角度化为弧度
	 for(i=1;i<=100;i++){
	 	t=1;
	 	for(j=1;j<=2*i-1;j++)
	 		t = t*j;
	 	sum = sum+flag*pow(x,2*i-1)/t;
	 	flag=-flag;
	 } 
	 printf("sin(%.2f)=%f\n",a,sum);
	return 0;
}
