#include<stdio.h>
int main(){
	char a[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%c",&a[i]);
	}
	for(i=0;i<5;i++)
		if(a[i]>='A'&&a[i]<='Z')
			a[i]+=32;
	for(i=0;i<5;i++)
		printf("%c",a[i]);
	printf("\n"); 
	return 0;
} 
