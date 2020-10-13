//素数，除了1和本身不再有其他因数，
#include <stdio.h>
#include <math.h>
int main(){
	int n,i=1;
	double k;
	scanf("%d",&n);
	k=sqrt(n);
	//输入的数用2,3,4..根号n依次试除n，能被整除就不是素数 
	while(++i<=k){
		if(n%i==0){
			printf("%d is not prime\n",n);
			break;
		}
	}
	if(i>k)
		printf("%d is a prime\n",n);
	return 0;
}
