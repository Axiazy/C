#include <stdio.h>
/*首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置。
再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
重复第二步，直到所有元素均排序完毕。*/
void sort(int array[],int n){
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
			if(array[j]<array[k])
				k=j;//大数的序号替换成小数的序号 
		if(k!=i){
			t=array[k];
			array[k]=array[i];
			array[i]=t;
		}
	}
} 
int main(){
	int a[10],i;
	printf("输入数组\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
	printf("排序后的数组:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
