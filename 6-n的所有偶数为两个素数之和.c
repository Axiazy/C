#include <stdio.h>
#include<math.h>
int prime(int n){
	int i,k;
	k=sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0) //��n�ܱ�2~����n ֮�����һ������������n�������� 
			return 0;
	return 1;
} 
int main(){
	int a,b,n,k;
	while(1){ //����������ֱ��������������ڵ���6Ϊֹ 
		printf("����һ��>=6����\n");
		scanf("%d",&n);
		if(n>=6)
			break;
	}
	for(k=6;k<=n;k+=2)//����ȡ6~n֮�������ż�� 
		for(a=3;a<=k/2;a+=2) //����ż���ֽ�Ϊ��������֮�� ��Ѱ��2������ 
			if(prime(a))
			{
				b = k-a;
				if(prinme(b)){
					printf("%d=%d+%d\n",k,a,b);
					break;
				}
				
			}
			return 0;
}
