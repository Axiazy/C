#include <stdio.h>
int main()
{
	int i,j,k,n;
	for(n=100;n<=999;n++){
		i=n/100;
		j=n/10%10;
		k=n%10;
		if(n==(i*i*i+j*j*j+k*k*k))
			printf("%d\n",n);
	}
	return 0;
} 

//½â·¨2
/*
int main
{
	int i,j,k,n;
	for(i=1;i<=9;i++)
		for(j=0;j<=9;j++)
			for(k=0;k<=9;k++)
			{
				n=i*100+j*10+k;
				if(n==(i*i*i+j*j*j+k*k*k))
				printf("%d\n",n);
			}
			return 0;
} */
