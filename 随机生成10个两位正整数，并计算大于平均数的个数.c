 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 10
int main(){
 	int a[N],i,n=0,sum=0;
 	double avr;
 	printf("%d\n",(unsigned)time(NULL));
 	srand((unsigned)time(NULL)); //�õ�ǰʱ�䲿��һ������
	for(i=0;i<N;i++){
		printf("---%d---\n",rand()%90 );
		a[i] = rand()%90 +10; //������λ�� 
		//10-100����90������
        //x=rand()%90+10;
        //rand()%90����10-99���������
	} 
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
		sum+=a[i];//��� 
	}
	avr = (double)sum/N; //��ƽ��ֵ������ת�� 
	for(i=0;i<N;i++)
		if(a[i]>avr)
			n++; //�����ƽ��ֵ�ĸ���
	printf("average=%lf\n",avr);
	printf("count=%d\n",n); 
	return 0;
} 

/*
����������ܲ���������������������Ѿ���д�õ�һЩ�޹������е����ִ洢��
���������Щ���ֻ���Ϊ������ȵ�N�ݣ���Ϊÿ�ݼ���һ�������srand()������
ȡ�����ţ�Ȼ��rand()�Ͱ�˳���ȡ��Щ���֣���srand()�Ĳ���ֵ�̶���ʱ��
rand()��õ���Ҳ�ǹ̶��ģ�����һ��srand�Ĳ�����time(NULL)����Ϊϵͳ��ʱ��
һֱ�ڱ䣬����rand()��õ�����Ҳ��һֱ�ڱ䣬�൱����������ˡ�
ֻҪ�û��������������������ӣ���ô��Ĭ������������������ϵͳʱ�ӡ�
�������һ��������������������У���Ҫ���������������֮ǰ����һ��������ӡ�
 ����ֻ����������ʼ������srand((unsigned)time(NULL)); 
 ����ֱ����rand�Ϳ����ˡ���Ҫ��for��ѭ������srand((unsigned)time(NULL));
*/
