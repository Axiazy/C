#include<stdio.h>
int main(){
	int x,y,size=3;
	for(y=-size;y<=size;y++){
		for(x=-size;x<=size;x++){
			if(abs(x)+abs(y)<=size)
				putchar('*');
			else 
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
