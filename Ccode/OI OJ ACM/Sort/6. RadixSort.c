#include "head.h"
//实现基数排序
//1. 求最大数数位->收集次数
//2. 实现基数桶,存放该数位个数
//3. 基数桶向前累加,得到该数数位个数
//4. 开辟新数组,遍历存放
int FundMaxDigit(int* arr,int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		max = max > arr[i] ? max : arr[i];
	}
	int count = 0;
	while (max) {
		count += max % 10 >= 0 ? 1 : 0;
		max /= 10;
	}
	return count;
}
//计算最高数位

void InsertCount(int*arr,int length,int digit,int*count) {
	//digit 为当前统计的数位
	//由低到高
	//digit = 1,统计个位
	//digit = 2,统计十位
	int curDigit = (int)pow(10, digit);
	for (size_t i = 0; i < length; i++)
	{
		count[(arr[i] % (curDigit * 10)) / curDigit]++;
		//取到当前数位,将前缀数组对应的下标+1
	}
}
//统计前缀

void SumCount(int* count) {
	for (size_t i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}
}
//统计前缀和

void InsertHelpArr(int* arr,int* help,int length,int digit,int* count) {
	int curDigit = (int)pow(10, digit);
	//当前数位
	for (int i = length-1; i >=0 ; i--)
	{
		help[count[((arr[i] % (curDigit * 10)) / curDigit)] - 1] = arr[i];
		//help[(count[(arr[i] / (int)pow(10, k)) % 10]--) - 1] = arr[i];
		count[((arr[i] % (curDigit * 10)) / curDigit)]--;
	}
}
//排序进入辅助数组

void ClearArr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
}
//清理前缀和+辅助数组

void Copyarr(int* arr, int* help, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = help[i];
	}
}
//转移辅助数组进原数组

void RadixSort_next(int* arr,int length,int digit) {
	int count[10] = {0};
	int* help = (int*)calloc(length, sizeof(int));

	for (int i = 0; i < digit; i++)//有几个数位就循环几次
	{
		InsertCount(arr,length, i, count);
		//统计前缀
		SumCount(count);
		//统计前缀和
		InsertHelpArr(arr,help,length,i,count);
		//排序进入辅助数组
		Copyarr(arr,help,length);
		//转移
		ClearArr(count, 10);
		//清理前缀数组
		ClearArr(help,length);
		//清理辅助数组
	}
}

void RadixSort(int* arr, int length) {
	int max_digit = FundMaxDigit(arr, length);
	//得到最高数位个数
	//进入排序
	RadixSort_next(arr, length, max_digit);

}

