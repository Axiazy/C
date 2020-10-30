#include <stdio.h>
#define N 4
int main(){
	int a[N][N], i,j,sum=0,*p[N];
	for(i=0;i<N;i++)
		p[i]=a[i];
	for(i=0;i<N;i++ )
		for(j=0;j<N;j++)
			scanf("%d",p[i]+j);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(i+j==N-1)
				sum+=p[i][j];
	printf("sum=%d",sum);
	return 0;
	
}
