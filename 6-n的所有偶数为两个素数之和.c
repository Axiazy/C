#include <stdio.h>
#include<math.h>
int prime(int n){
	int i,k;
	k=sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0) //若n能被2~根号n 之间的任一整数整除，则n不是素数 
			return 0;
	return 1;
} 
int main(){
	int a,b,n,k;
	while(1){ //输入整数，直至输入的整数大于等于6为止 
		printf("输入一个>=6的数\n");
		scanf("%d",&n);
		if(n>=6)
			break;
	}
	for(k=6;k<=n;k+=2)//依次取6~n之间的所有偶数 
		for(a=3;a<=k/2;a+=2) //将该偶数分解为两个素数之和 ，寻找2个素数 
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
