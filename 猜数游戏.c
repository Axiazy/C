#include <stdlib.h>
#include<stdio.h>
int main(){
	int magic; //��������롯���� 
	int guess;//���� 
	magic = rand(); 
	printf("please guess a magic number:\n");
	scanf("%d",&guess);
	if(guess>magic)
		printf("wrong! too high!\n");
	else if(guess<magic)
		printf("wrong! too low!\n");
	else{
		printf("right!\n");
		printf("the number is :%d\n",magic);
	}
	return 0;
}
