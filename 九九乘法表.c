#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<9;i++){
		for(j=1;;j++){
			if(j>i) break;
				printf("%dx%d=%-4d",i,j,j*i);
		}
		printf("\n");
	}
	return 0;
} 
/*
printf("%4d", 12);
�����
  12
������������ո������12��

�������printf("%4d", 12345);
����12345ռ��λ��������4�����ƣ����Ի��������ֵ12345��û���κοո����
*/
