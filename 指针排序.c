#include <stdio.h>
/*将a0与其他9个数据逐一比较，将10个数据中的最小值放入a0中，
然后再将a1与其余8个数据逐一比较，将9个数据中的最小值放入a1中，
以此类推，至最后一个数据，则不进行比较 
*/
int *min(int *b,int n){
	int *p,*r;
	p= b+1;
	r= b+n;
	for(;p<r;p++)
		if(*p<*b)
			b=p;
	return b;
}

void sort(int *a,int n){
	int *p,x;
	for(;n>1;n--,a++)
	{
		p=min(a,n);
		x=*a;
		*a=*p;
		*p=x;
	}
}
int main(){
	int i=0,k[]={32,24,15,63,85,70,41,96,51,10};
	sort(k,10);
	while(i<10){
		printf("%3d",k[i]);
		i++;
	}
	return 0;
}
