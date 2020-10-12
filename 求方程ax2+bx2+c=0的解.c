#include <stdio.h>
#include <Math.h>
int main(){
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	disc = b*b - 4*a*c;
	if(fabs(disc)<=1e-6)//1e-6乘以10的负6次方。 Math.abs(x)<1e-6其实相当于x==0
		printf("has two equal roots:%8.4lf\n",-b/(2*a));//输出总宽度至少8位，不足时，前面补空格；固定输出4位小数，小数不足4位时后面补0，超过4位时四舍五入。
	else if(disc>1e-6)
	{
		x1 = (-b+sqrt(disc))/(2*a);
		x2 = (-b-sqrt(disc))/(2*a); 
		printf("has distrinct real roots:%8.4lf and %8.4lf\n",x1,x2);
	}
	else
	{
		realpart = -b/(2*a);
		imagpart = sqrt(-disc)/(2*a);
		printf("has complex roots:\n");
		printf("%8.4lf + %8.4lf i \n",realpart,imagpart); 
		printf("%8.4lf - %8.4lf i \n",realpart,imagpart);
	}
	return 0;
	
	/*1e-6(也就是0.000001)叫做baiepslon，用来抵消浮点运算中因du为误差造成zhi的相等无法判断的情况。它通常是一个非常小的数字（具体多小要看你的运算误差）

比如说因为精度误差，用十进制举例，我们要算1/3+1/3+1/3==1（从数学上说，肯定相等），但是因为精度问题，等号左边算出来是0.3333333+0.3333333+0.3333333=0.9999999，

存在了误差，右边是1.0000000，那么如果直接用==，返回false，我们希望它被视作相等。那么就要两数相减取绝对值小于epslon的办法。*/
	
	
} 
