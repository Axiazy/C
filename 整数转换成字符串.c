#include <stdio.h>
void to_str(int n){
	char string[10];
	int i=0;
	if(n<0){
		putchar('-');
		n=-n;//����ȡ�� 
	}
	while(n>0){ //������ʮ����..ת���������ַ������ 
		string[i++] = n%10+'0';//��ȡ������������ascii����ַ�'0'ת�����ַ�
		n/=10; //ȡ��һλ 
	}
	while(--i>=0)//������String�����һ��Ԫ�ؿ�ʼ��������ǰ����������Ԫ��
		putchar(string[i]); 
}

int main(){
	to_str(-178);
	return 0;
}
