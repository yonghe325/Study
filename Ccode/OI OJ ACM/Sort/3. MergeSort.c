#include "head.h"
//O(NlogN) 
void MergeSort(int* arr, int L, int mid, int R) {
	int* help = calloc(R - L + 1, sizeof(int));
	if (!help)
	{
		return -1;
	}
	int index = 0;
	//开辟辅助数组
	int p1 = L;
	int p2 = mid + 1;
	while (p1 <= mid && p2 <= R) {
		help[index++] = ((arr[p1] <= arr[p2]) ? arr[p1++] : arr[p2++]);
		//先判断,在迭代
		//小的放到辅助数组
		//谁的小, 谁的index++
	}
	while (p1 <= mid) {
		help[index++] = arr[p1++];
	}
	while (p2 <= R) {
		help[index++] = arr[p2++];
	}
	for (size_t i = 0; i < R - L + 1; i++)
	{
		arr[L + i] = help[i];
		//L为初始偏移量
	}
	free(help);
	// 释放当前辅助空间
}
//Merge排序函数
void Process(int* arr,int L,int R) {
	if (L == R) {
		return;
	}
	int mid = L + ((R - L) >> 1);
	Process(arr, L, mid);
	Process(arr, mid + 1, R);
	MergeSort(arr,L,mid,R);
}
//Merge调用函数
//归并排序
