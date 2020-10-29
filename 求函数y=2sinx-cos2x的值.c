#include<stdio.h>
#include<math.h>
double cpe(double (*p1)(double),double (*p2)(double),double q){
	return (2*(*p1)(q)-(*p2)(2*q));
}

int main(){
	double x;
	x = 3.1415926 /180;
	printf("x=15,y=%10.6f\n",cpe(sin,cos,15*x));
	return 0;
}
