#include <stdio.h>
/*������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�á�
�ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��
�ظ��ڶ�����ֱ������Ԫ�ؾ�������ϡ�*/
void sort(int array[],int n){
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
			if(array[j]<array[k])
				k=j;//����������滻��С������� 
		if(k!=i){
			t=array[k];
			array[k]=array[i];
			array[i]=t;
		}
	}
} 
int main(){
	int a[10],i;
	printf("��������\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
	printf("����������:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
