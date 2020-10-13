#include <stdio.h>
int main(){
	int i,num=0;
	char c;
	for(i=1;i<=10;i++){
		c = getchar();
		if(c<'0'||c>'9')
			continue;
		++num;
	}
	printf("num=%d",num);
	return 0;
} 
