//�����ַ�ת����ʮ���� 
#include<stdio.h>
int main(){
	 char a[20],ch;
	 int i,n=0,f=1;
	 unsigned int x=0;
	 while((ch=getchar())!='\n') //�������з�ֹͣѭ��
	 	a[n++]=ch; //n�����ֵĸ���
	for(i=n-1;i>=0;i--){
		printf("i�Ƕ���%d\n",i);
		x += (a[i]-48)*f; //a[i]-48 ��a[i]ת������ֵ >�ַ� a ��Ӧ����97��97-48=49��ֱ�Ӷ�Ӧ������ֵ1�����Լ�48�𵽵���һ�ֽ�ԭ��ĸ�����һ�ֹ���
		printf("x�Ƕ���%d\n",x);
		f*=10;
		printf("f�Ƕ���%d\n",f);
	} 
	printf("%u",x);
	return 0;
} 
