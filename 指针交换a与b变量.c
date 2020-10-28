#include<stdio.h>
void swap(int *qa,int *qb){
 int temp;
 temp = *qa;
 *qa = *qb;
 *qb = temp; 
} 
int main(){
	int a,b,*pa=&a,*pb = &b;
	scanf("%d%d",pa,pb);
	printf("%d,%d\n",a,b);
	swap(pa,pb);
	printf("%d,%d",a,b);
	return 0;
}
