
#include<stdio.h>
//�����1/2,2/3,3/5,5/8...ǰ10��֮�� 
#include<math.h> 
int main(){
  	int i;
  	float k,s=0,m=1,n=2;
  	for(i=1;i<=10;i++){
		s+=m/n;  
		k=m+n;//��һ��ķ�ĸ = ǰһ��ķ���+��ĸ 
		m=n; //��һ��ķ�ĸ��ֵ������ 
		n=k; //�滻��ĸ 
	}
	printf("s=%f",s);
	return 0;
}
