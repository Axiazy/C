//�����㷨�Ա�

//1.ð�� �ظ��߹�����Ԫ���У�����Ԫ�ضԱȣ�С����ǰ������ź� 
//��һ�飬ѭ��1 ~(n-1)-0�����������Ƚϣ����ķ����̶�����
//�ڶ��飬ѭ��1~ (n-1)-1�����������Ƚϣ����ķŵ����ڶ���λ�ò���
//��i�飬ѭ��1~ (n-1)-i�����������Ƚϣ������������ڶ���λ�ã�������� 

  
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
 
 
 //2.ѡ��  ÿ��ѭ���� �ҵ���С���Ǹ���������ǰ�� ,��ǰ������͹̶����䣬��ð�������������̶����䣩 
 
 void SelectSort(int arr[],int n){
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(arr[i]>arr[j]){
 				swap(arr,i,j);
 			}
 		}
 	}
 }
 
 //3.�������� ��һ�����ݲ��뵽�Ѿ��ź�������������У��Ӷ��õ�һ���µġ�������һ����������
 void InsertSort(int arr[],int n){
 	int tempVal;
 	for(int i=1,j;i<n;i++){
 		tempVal = arr[i];//�������
		 for(j=i-1;tempVal<arr[j] &&j>=0;--j) // ����ǰ�����������ƶ��������������λ
		 {
		 	arr[j+1] =arr[j];
		 } 
		 arr[j+1] = tempVal;
 	}
 } 
 
 //4.��������  ͨ��һ������Ҫ��������ݷָ�ɶ����������֣�����һ���ֵ��������ݶ�������һ���ֵ��������ݶ�ҪС��
 //Ȼ���ٰ��˷����������������ݷֱ���п�����������������̿��Եݹ���У��Դ˴ﵽ�������ݱ����������
 void Quicksort(int a[],int low,int high){
 	if(low>=high){
	 return;
 	}
 	int first = low;
 	int last = high;
 	int key = a[first];
 	while(first<last){
 		while(first<last && a[last]>key) //����������һ����arr[left]С����
		 {
		 	--last;
		 } 
		 a[fist]= a[last];
		 while(first<last &&a[first] <=key)//����������һ����arr[left]ҪС����
		 {
		 	++first;
		 } 
		 a[last]= a[first];
 	}
 	a[first] = key;
 	Quicksort(a,low,first-1);//�����
	Quicksort(a,last+1,high);//���ұ�
	
 } 
