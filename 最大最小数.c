#include<stdio.h>
int max,min;
void search(int a[],int n){
	int i;
	max =min =a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
			max = a[i];
		if(a[i]<min)
			min =a[i];
	}
}
int main(){
	int array[10],i;
	for(i=0;i<10;i++)	
		scanf("%d",&array[i]);
	search(array,10);
	printf("max=%d, min=%d\n",max,min);
}
