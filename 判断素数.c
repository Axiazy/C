//����������1�ͱ�����������������
#include <stdio.h>
#include <math.h>
int main(){
	int n,i=1;
	double k;
	scanf("%d",&n);
	k=sqrt(n);
	//���������2,3,4..����n�����Գ�n���ܱ������Ͳ������� 
	while(++i<=k){
		if(n%i==0){
			printf("%d is not prime\n",n);
			break;
		}
	}
	if(i>k)
		printf("%d is a prime\n",n);
	return 0;
}
