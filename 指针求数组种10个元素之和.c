#include<stdio.h>
//����ʱ��pֵ�ݼ��������Ǵ�a[9]��ʼ��a[0]������
//�ۼ�ʱ��pֵ�������ۼӴ�a[0]��ʼ��a[9]���� 
int main(){
	int s=0,a[10],*p,*q;
	for(p=a+9,q=a;p>=q;p--)//p=a[9],q=a[0]
		scanf("%d",p);
	q =a+10;//q=a[10]
	p=a;//p=a[0]
	while(p<q){
		s+=*p;
		++p;
	}
	printf("sum=%d\n",s);
	return 0;
} 
