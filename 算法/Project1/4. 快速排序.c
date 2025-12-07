#include "head.h"


int partition(int* arr, int L, int R) {
	//选取基准元素
	int left = L;
	//0
	int right = R;
	//8
	int pivot= arr[left];
	// pivot = 5 

	//5,8,7,4,9,6,1,2,3
	while (left<right) {
		while (arr[right] >= pivot && left < right) right--;
		//
		if (left<right)
		{
			arr[left++] = arr[right];
		}
		//3,8,7,4,9,6,1,2,3
		//1 8
		while (arr[left] <= pivot && left < right) left++;
		if (left<right)
		{
			arr[right--] = arr[left];
		}
		//3,8,7,4,9,6,1,2,8

	}
	arr[left] = pivot;
	return left;
}
void QuickSort(int* arr, int L, int R) {
	if (L < R)
	{
		int k = L + rand() % (R- L+ 1);
		Swap(&arr[k], &arr[R]);
		int mid = partition(arr, L, R);
		QuickSort(arr, L, mid);
		QuickSort(arr, mid + 1, R);
	}
}
//int main() {
//	int arr[] = { 5,8,7,9,4,6,1,2,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	QuickSort(arr, 0, len - 1);
//	for (size_t i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


