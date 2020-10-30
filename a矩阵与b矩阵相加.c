#include <stdio.h>
int i,j;
void matrix(int *x,int *y,int *z){
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			*(z+i*4+j) = *(x+i*4+j) +*(y+i*4+j);
} 

int main(){
	int *p,a[3][4],b[3][4],c[3][4];
	printf("ÊäÈë¾ØÕóa\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) 
			scanf("%d",a[i]+j);
	printf("ÊäÈë¾ØÕób\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) 
			scanf("%d",*(b+i)+j);
	matrix(*a,b[0],&c[0][0]);
	printf("c¾ØÕóÎª:\n");
	for(i=0,p=c[0];p<c[0]+12;p++,i++){
		if(i%4==0)
			printf("\n");
		printf("%-4d",*p);
	}
	return 0;
			
}
