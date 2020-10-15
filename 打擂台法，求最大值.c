#include <stdio.h>
int main(){
	 int a[10],i,max;
	 for(i=0;i<10;i++)
	 	scanf("%d",&a[i]);
	max = a[0]; //指定擂主 
	for(i=1;i<10;i++)
		if(a[i]>max) //如果大于擂主 
			max = a[i]; //替换擂主 
	printf("max = %d\n",max);
	return 0;
}
