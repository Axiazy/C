//ÌÝÐÎ·¨ 
#include<stdio.h>
#include<math.h> 
int main(){
 	int i,n;
 	double a,b,h,s;
 	printf("Input a,b:");
 	scanf("%lf%lf",&a,&b);
 	n=100;
 	h=(b-a)/n;
 	s=0.5*(sin(a)+sin(b));
 	for(i=1;i<=n-1;i++)
 		s+=sin(a+i*h);
 	s*=h;
 	printf("s=%.4lf\n",s);
	return 0;
}
