#include <stdio.h>
#include <math.h> 
int main(){
 	float a,b,result;
 	int flag=1;
 	char operator;
 	scanf("%f%c%f",&a,&operator,&b);
 	if(operator=='+')
 		result = a+b;
 	else if(operator=='-')
 		result=a-b;
 	else if(operator=='*')
 		result = a*b;
 	else if(operator=='/')
 		if(fabs(b)<1e-6)
 		{	
 			printf("can not be devided by zero\n");
 			flag =0;
 		}
 		else
 			result =a/b;
 		else
 		{
 			printf("input error!");
 			flag=0;
 		}
 		if(flag==1)
 			printf("%.2f%c%.2f=%.2f\n",a,operator,b,result);
	return 0;
}
