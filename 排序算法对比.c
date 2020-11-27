//排序算法对比

//1.冒泡 重复走过排序元素列，两两元素对比，小的排前，大的排后 
//第一遍，循环1 ~(n-1)-0个数，两两比较，最大的放最后固定不变
//第二遍，循环1~ (n-1)-1个数，两两比较，最大的放倒数第二个位置不变
//第i遍，循环1~ (n-1)-i个数，两两比较，最大的在正数第二个位置，排序完成 

  
void BubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1])
			swap(arr,j+1,j);
		}
	}
} 
void swap(int arr[],int x,int y)
{
	int temp = arr[x];
	arr[x]= arr[y];
	arr[y] = temp;
}
 
 
 //2.选择  每次循环内 找到最小的那个数，放最前面 ,最前面的数就固定不变，（冒泡是最后面的数固定不变） 
 
 void SelectSort(int arr[],int n){
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(arr[i]>arr[j]){
 				swap(arr,i,j);
 			}
 		}
 	}
 }
 
 //3.插入排序 将一个数据插入到已经排好序的有序数据中，从而得到一个新的、个数加一的有序数据
 void InsertSort(int arr[],int n){
 	int tempVal;
 	for(int i=1,j;i<n;i++){
 		tempVal = arr[i];//插入的数
		 for(j=i-1;tempVal<arr[j] &&j>=0;--j) // 插入前，数据往后移动，给插入的数腾位
		 {
		 	arr[j+1] =arr[j];
		 } 
		 arr[j+1] = tempVal;
 	}
 } 
 
 //4.快速排序  通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，
 //然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列
 void Quicksort(int a[],int low,int high){
 	if(low>=high){
	 return;
 	}
 	int first = low;
 	int last = high;
 	int key = a[first];
 	while(first<last){
 		while(first<last && a[last]>key) //从右往左找一个比arr[left]小的数
		 {
		 	--last;
		 } 
		 a[fist]= a[last];
		 while(first<last &&a[first] <=key)//从左往右找一个比arr[left]要小的数
		 {
		 	++first;
		 } 
		 a[last]= a[first];
 	}
 	a[first] = key;
 	Quicksort(a,low,first-1);//排左边
	Quicksort(a,last+1,high);//排右边
	
 } 
