//给出一个数组
//如果一个数右边有比他小的数
// 则称这个数与右侧的数为一个逆序对
// 求一个数组中,逆序对的个数
//
//归并算法
#include "head.h"
int mergeRever(int* arr, int L, int mid, int R) {
	int* help = calloc(R - L + 1, sizeof(int));
	if (help == NULL)
	{
		printf("开辟失败\n");
		exit(-1);
	}
	int p1 = L;
	int p2 = mid + 1;
	int index = 0;
	int count = 0;
	while (p1 <= mid && p2 <= R) {
		count += arr[p1] < arr[p2] ? (p2-mid)*(mid-p1+1) : 0;
		//当左侧更小,则计算右侧到中间一共有多少个数
		// 并乘上左侧数到中间的元素个数,这些数一定比右侧的更大
		//这些数一定比左侧数小
		help[index++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
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
		//printf("%d ", help[i]);
	}
	//printf("\n");
	free(help);
	return count;

}
//归并排序时,同时计算右侧比左侧大的数
int ProcessReverse(int* arr, int L, int R) {
	if (L == R)
	{
		return 0;
	}
	int mid = L + ((R - L) >> 1);
	ProcessReverse(arr, L, mid);
	ProcessReverse(arr, mid + 1, R);
	mergeRever(arr, L, mid, R);

}