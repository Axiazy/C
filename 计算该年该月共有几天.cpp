#include <stdio.h>
int main(){
	int year,month,days=0,flag=1;
	printf("input year and month:\n");
	scanf("%d,%d",&year,&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:days =31;break;
		case 4:
		case 6:
		case 9:
		case 11:days=30;break;
		case 2:
			if(0==year%4 && 0!=year%100|| 0==year%400)//�ж��Ƿ�������,�ܱ�4���������ܱ�100���������ܱ�400���� 
				days=29;
			else 
				days=28;
			break; 
		default:
			printf("DATA ERROR!");flag=0;
	}
	if(flag){
		printf("%d�� %d����%d�졣\n",year,month,days);
			}
	else
		printf("�������룡");
	

	return 0;
}
