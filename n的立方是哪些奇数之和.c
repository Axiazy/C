//n������ == n����������֮�� 
#include<stdio.h>
int add(int n){
	int i,sum=0;
	for(i=0;i<=n;i++)
		sum+=i;
	return sum;
}

int maxodd(int n){
	int m,d;
	m=add(n); //1.����1+2+3+...+n���ۼӺ� 
	d=2*m-1;//2.����������� 
	return d;
}

int main(){
	int i,n,d;
	int flag=0;
	printf("����һ����\n");
	scanf("%d",&n);
	d = maxodd(n);//���������� 
	for(i=0;i<n;i++){
		printf("%5d",d);
		d-=2; //�����������ʼ������������� 
		
		flag++; //�ñ�����������ÿһ������ʾ�ĸ��� 
		if(flag==5){ //ÿ��ֻ��ʾ4��������4���ͻ��� 
			printf("\n");
			flag=0;
		}
	}
	return 0;
} 
