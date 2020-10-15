#include <stdio.h>
#define N 5
int main(){
	int a[N] = {1,2,3,4,5},i,j,t;
	for(i=0;i<N/2;i++){
		j=N-i-1;
		t =a[j];
		a[j] = a[i];
		a[i] = t;
	}
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	return 0;
} 
