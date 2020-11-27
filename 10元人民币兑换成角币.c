#include<stdio.h>
int main(){
	int i,j,k,m=0;
	for(i=0;i<=20;i++)
		for(k=0;(k<=100-5*i)/2;j++)
			for(k=0;k<=100-5*i-2*j;k++)
				if(i*5+j*2+k==100)
						m++;
	printf("m=%d",m);
	return 0;
} 
