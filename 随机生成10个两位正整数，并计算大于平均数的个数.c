 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 10
int main(){
 	int a[N],i,n=0,sum=0;
 	double avr;
 	printf("%d\n",(unsigned)time(NULL));
 	srand((unsigned)time(NULL)); //用当前时间部署一颗种子
	for(i=0;i<N;i++){
		printf("---%d---\n",rand()%90 );
		a[i] = rand()%90 +10; //生成两位数 
		//10-100共有90个数字
        //x=rand()%90+10;
        //rand()%90产生10-99的随机数字
	} 
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
		sum+=a[i];//求和 
	}
	avr = (double)sum/N; //求平均值，类型转换 
	for(i=0;i<N;i++)
		if(a[i]>avr)
			n++; //求大于平均值的个数
	printf("average=%lf\n",avr);
	printf("count=%d\n",n); 
	return 0;
} 

/*
计算机并不能产生真正的随机数，而是已经编写好的一些无规则排列的数字存储在
电脑里，把这些数字划分为若干相等的N份，并为每份加上一个编号用srand()函数获
取这个编号，然后rand()就按顺序获取这些数字，当srand()的参数值固定的时候，
rand()获得的数也是固定的，所以一般srand的参数用time(NULL)，因为系统的时间
一直在变，所以rand()获得的数，也就一直在变，相当于是随机数了。
只要用户或第三方不设置随机种子，那么在默认情况下随机种子来自系统时钟。
如果想在一个程序中生成随机数序列，需要至多在生成随机数之前设置一次随机种子。
 即：只需在主程序开始处调用srand((unsigned)time(NULL)); 
 后面直接用rand就可以了。不要在for等循环放置srand((unsigned)time(NULL));
*/
