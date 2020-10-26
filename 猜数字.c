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
	srand(time(NULL)); //��ʼ���������
	do{
		number = MakeNumber();//�����������ֺ���
		GuessNumber(number); //���ò����ֺ��� 
		printf("Continue?(Y/N):");
		count = getchar();
		while(getchar()!='\n') //���ػس�������֮ǰ�����������ַ� 
		{
			;
		} 
	}while(count!='N'&&count!='n');
	return 0;
}
int MakeNumber(void){
	int number;
	number = (rand()%(MAX_NUMBER - MIN_NUMBER+1)) +MIN_NUMBER;
	assert(number >= MIN_NUMBER && number <= MAX_NUMBER); //�����㷨����ȷ��
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
	}while(guess!=number && times<MAX_TIMES); //�������ݲ�����number�����ٶ������ݣ�ֱ��������Ȼ������������MAX_TIMES��
	
	if(guess==number){
		printf("Congratulations! you are right!\n");
	} 
	else{
		printf("Mission failed after %d attempts.\n",MAX_TIMES);
	}
}
