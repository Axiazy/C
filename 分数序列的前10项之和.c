
#include<stdio.h>
//求分数1/2,2/3,3/5,5/8...前10项之和 
#include<math.h> 
int main(){
  	int i;
  	float k,s=0,m=1,n=2;
  	for(i=1;i<=10;i++){
		s+=m/n;  
		k=m+n;//下一项的分母 = 前一项的分子+分母 
		m=n; //上一项的分母赋值给分子 
		n=k; //替换分母 
	}
	printf("s=%f",s);
	return 0;
}
