#include <stdio.h>
int main(){
	int a,b,c,n=0;
	for(c=3;c<=20;c++)
		for(b=1;b<c;b++)
			for(a=1;a<=b;a++)
				if(a*a+b*b==c*c){
					printf("(%2d,%2d,%2d)",a,b,c); 
					n++;
					if(n%3==0)//输出三组后换行
						printf("\n"); 
				}
	return 0;
}
