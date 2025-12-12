#include "head.h"
// 通过添加偏移量,实现负数的排序
int* foundMaxOrMaxDigit(int*arr,int length) {
	int max = 0;
	int min = 0;
	//因为不知道正负数哪个数位大
	//分别求正负数位
	//两数绝对值相加后(负数为偏移量)
	//才是正确数位
	for (int i = 0; i < length; i++)
	{
		max = max > arr[i] ? max : arr[i];
		min = min < arr[i] ? min : arr[i];
	}
	int count = 0;
	int* ret = calloc(2, sizeof(int));
	assert(ret);
	if (min < 0)
	{
		max += -(min);
		while (max) {
			count += max % 10 >= 0 ? 1 : 0;
			max /= 10;
		}
		ret[0] = count;
		ret[1] = -min;
		//最小值小于0时
		//返回min(整数)偏移量
	}
	else
	{
		while (max) {
			count += max % 10 >= 0 ? 1 : 0;
			max /= 10;
		}
		ret[0] = count;
		ret[1] = 0;
		//最小值大于0时
		//返回0偏移量
	}
	return ret;
}
void Negatives(int*arr,int length,int Negatives) {
	for (int i = 0; i < length; i++)
	{
		arr[i] += Negatives;
	}
}
//添加,减少偏移量
void radixSortWithNegatives(int*arr,int length) {
	int* ret =  foundMaxOrMaxDigit(arr, length);
	if (ret[1]==0)//偏移量为0,进入无偏移量的排序
	{
		RadixSort_next(arr, length, ret[0]);
	}
	else{
		Negatives(arr,length,ret[1]);
		//添加偏移量
		RadixSort_next(arr, length, ret[0]);
		//进入排序
		Negatives(arr, length, -ret[1]);
		//减小便宜量
	}
}
//int main() {
//	int arr[] = {-10,-5,-7,1,5,9,10,11};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	radixSortWithNegatives(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}