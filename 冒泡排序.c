#include <stdio.h>
int main()
{
	int a[5] = {8,5,9,2,1};
	int i,j,n,temp;
	 n=5;
	for(i=0;i<n-1;i++) //n个数进行n-1趟排序  即进行了4趟交换 
		for(j=1;j<n-i;j++) //每一趟排序进行n-i-1次两两比较  =>第一趟进行4次交换，第二趟三次，第三趟两次，第四趟1次 
			if(a[j-1]>a[j]) //前一个元素大于后一个元素，则交换 
			{
				temp= a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
	printf("\n排序后\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 
