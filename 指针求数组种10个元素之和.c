#include<stdio.h>
//输入时，p值递减，输入是从a[9]开始至a[0]结束，
//累加时，p值递增，累加从a[0]开始至a[9]结束 
int main(){
	int s=0,a[10],*p,*q;
	for(p=a+9,q=a;p>=q;p--)//p=a[9],q=a[0]
		scanf("%d",p);
	q =a+10;//q=a[10]
	p=a;//p=a[0]
	while(p<q){
		s+=*p;
		++p;
	}
	printf("sum=%d\n",s);
	return 0;
} 
