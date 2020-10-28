#include<stdio.h>
int main(){
	char s1[20],s2[20],*p1=s1,*p2=s2;
	scanf("%s",s1);
	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	printf("%s\n",s2); 
	return 0;
} 
