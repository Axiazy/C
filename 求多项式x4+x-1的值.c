#include<stdio.h>
double f(double z){
	double d;
	d = z*z*z*z +z-1;
	return d; 
} 
int main(){
	int i;
	double r,x, (*y)(double);
	y = f;
	for(i=1;i<=4;i++){
		x =i+0.5;
		r = (*y)(x);
		printf("x=%f,y=%f\n",i+0.5,r);
	}
}
