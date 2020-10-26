#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<assert.h>
#define MAX_NUMBER 100
#define MIN_NUMBER 1
#define MAX_TIMES 7
int MakeNumber(void);
void GuessNumber(int number);
int main(){
	int number;
	int count;
	srand(time(NULL)); //初始化随机种子
	do{
		number = MakeNumber();//调用生成数字函数
		GuessNumber(number); //调用猜数字函数 
		printf("Continue?(Y/N):");
		count = getchar();
		while(getchar()!='\n') //读回回车符及其之前的所有无用字符 
		{
			;
		} 
	}while(count!='N'&&count!='n');
	return 0;
}
int MakeNumber(void){
	int number;
	number = (rand()%(MAX_NUMBER - MIN_NUMBER+1)) +MIN_NUMBER;
	assert(number >= MIN_NUMBER && number <= MAX_NUMBER); //测试算法的正确法
	return number; 
}

void GuessNumber(int number){
	int guess;
	int times=0;
	assert(number >=MIN_NUMBER && number<= MAX_NUMBER);
	do{
		times++;
		printf("Round %d: ",times);
		scanf("%d",&guess);
		if(guess>number){
			printf("wrong! too high.\n");
		}
		else if(guess <number){
			printf("wrong! too low.\n");
		}
	}while(guess!=number && times<MAX_TIMES); //读入数据不等于number，则再读入数据，直至二者相等或读数次数超过MAX_TIMES次
	
	if(guess==number){
		printf("Congratulations! you are right!\n");
	} 
	else{
		printf("Mission failed after %d attempts.\n",MAX_TIMES);
	}
}
