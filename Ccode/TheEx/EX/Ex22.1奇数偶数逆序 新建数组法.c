#include<stdio.h>

int* change_(int* a,int size){
	static int arr2[10];
	// 1 2 3 4 5   6 7 8 9 10
	// 
	// 0 1 2 3 4   5 6 7 8 9 

	// 0 0 0 0 0   0 0 0 0 0 
	int left = 0;
	int right = 0;
	for (int k = 0; k < size; k++)
	{
		// 每查找一次原数组, left right 必有一个++
		//查到偶数放到 新数组left
		//查到奇数放到 新数组right
		if (a[k] % 2 ==0 )//偶数
		{
			arr2[size-right-1] = a[k];
			right++;
		}
		else//奇数
		{
			arr2[left] = a[k];
			left++;
		}
	}
	return &arr2;
}

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	//输入
	int sz = sizeof(arr) / sizeof(arr[0]);
	//for ( i = 0; i < sz; i++)
	//{
	//	//scanf_s("%d",arr+i ); 
	//	scanf_s("%d", &arr[i]);
	//}
	//调整
	//int* p1 = &arr;
	int *arr1 = change_(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", arr1[i]);
	}


	return 0;
}