#include <stdio.h>
double count(int n){
	int i;
	double sum=0;
	if(n<=0){
		printf("Data error\n");
		return 0;
	}
	for(i=1;i<=n;i++)
		sum+=1.0/i; //����д��1.0/i,�������������� 
	return sum; 
}
int main(){
	int n;
	double s;
	printf("����һ��ֵ:\n");
	scanf("%d",&n);
	s = count(n);
	printf("s=%6.2f\n",s);
	return 0;
} 
