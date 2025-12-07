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
		count += arr[p1] > arr[p2] ? (mid - p1 + 1) : 0;
		//当左侧数更大时,说明左侧数到中间的所有数都比右侧大
		//直接+左侧到中间数的个数
		printf("p1 = %d mid = %d p2 = %d count = %d\n", p1,mid, p2,count);

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
		printf("%d ", help[i]);
	}
	printf("\ncount = %d\n" ,count);
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
	int ret1 = ProcessReverse(arr, L, mid);
	int ret2 =ProcessReverse(arr, mid + 1, R);
	int ret3 = mergeRever(arr, L, mid, R);
	int ret = ret1 + ret2 + ret3;
	//printf("%d %d %d %d %d\n\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%d\n\n", ret);
	return ret;
}
int main() {
	int arr[] = { 6,1,3,4,2,5};
	//5 0 1 1
	//8
	int length = sizeof(arr) / sizeof(arr[0]);

	int ret = ProcessReverse(arr, 0, length - 1);
	printf("%d", ret);
	return 0;
}