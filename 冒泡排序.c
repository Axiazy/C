#include <stdio.h>
int main()
{
	int a[5] = {8,5,9,2,1};
	int i,j,n,temp;
	 n=5;
	for(i=0;i<n-1;i++) //n��������n-1������  ��������4�˽��� 
		for(j=1;j<n-i;j++) //ÿһ���������n-i-1�������Ƚ�  =>��һ�˽���4�ν������ڶ������Σ����������Σ�������1�� 
			if(a[j-1]>a[j]) //ǰһ��Ԫ�ش��ں�һ��Ԫ�أ��򽻻� 
			{
				temp= a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
	printf("\n�����\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 
