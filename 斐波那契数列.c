#include <stdio.h>
int main(){
	int f[20] = {1,1},i;
	for(i=2;i<20;i++)
		f[i] = f[i-1]+f[i-2];//���ݵ��Ƽ���
	for(i=0;i<20;i++){
		printf("%6d",f[i]);
		if((i+1)%5==0)
			printf("\n");
	} 
	return 0;
}
