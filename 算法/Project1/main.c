#include "head.h"
int Swap(int* arr, int e1, int e2) {
	// 异或交换,前提是e1不等于e2
	// 否则两位置会被洗成0
	if (e1 == e2) {
		return 1;
	}
	arr[e1] = arr[e1] ^ arr[e2];
	arr[e2] = arr[e1] ^ arr[e2];
	arr[e1] = arr[e1] ^ arr[e2];
	return 0;
	//中间变量交换法
		//int tmp = arr[e1];
		//arr[e1] = arr[e2];
		//arr[e2] = tmp;
}
//交换


int main() {
	int arr[] = { 9,8,8,7,6,5,4,3,1,1,-8,2,94951,6564,123,-8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//求出长度
	
	//SelectionSort(arr,len);
	//选择排序
	//O(N^2)
	//InsertionSort(arr,len);
	//插入排序
	//Process(arr,0,len-1);
	//归并排序

	//Print(arr, len);
	Test();
	return 0;
}