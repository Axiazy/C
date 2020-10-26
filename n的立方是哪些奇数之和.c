//n的立方 == n个相邻奇数之和 
#include<stdio.h>
int add(int n){
	int i,sum=0;
	for(i=0;i<=n;i++)
		sum+=i;
	return sum;
}

int maxodd(int n){
	int m,d;
	m=add(n); //1.计算1+2+3+...+n的累加和 
	d=2*m-1;//2.计算最大奇数 
	return d;
}

int main(){
	int i,n,d;
	int flag=0;
	printf("输入一个数\n");
	scanf("%d",&n);
	d = maxodd(n);//获得最大奇数 
	for(i=0;i<n;i++){
		printf("%5d",d);
		d-=2; //从最大奇数开始减，逐渐输出奇数 
		
		flag++; //该变量用来控制每一行上显示的个数 
		if(flag==5){ //每行只显示4个，大于4个就换行 
			printf("\n");
			flag=0;
		}
	}
	return 0;
} 
