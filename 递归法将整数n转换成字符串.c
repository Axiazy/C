#include <stdio.h>
void tranvers(int n){
	if(n/10!=0)//��n����һλ����������n����10�Ľ����λʵ�ε��ú������� 
		tranvers(n/10);
	printf("%c",n%10+'0'); //��n�ĸ�λ��ת���������ַ������ַ���ʽ��� 
} 
int main(){
	int n;
	printf("����һ������\n");
	scanf("%d",&n);
	printf("�ַ�����:\n");
	if(n<0){
		printf("-");
		n= -1*n;
	}
	tranvers(n);
	return 0;
}
