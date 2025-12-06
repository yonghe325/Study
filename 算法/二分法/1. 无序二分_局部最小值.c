#include "head.h"
//给予一个无序, 长度为N的int数组
//定义 :
//+若arr[0]<arr[1], 则称arr[0]为局部最小值
//	+ 若arr[N - 1]<arr[N - 2], 则称arr[N - 1]为局部最小值
//	+ 若有arr[i], 且arr[i - 1]>arr[i], 且arr[i + 1]>arr[i]
//	  则称arr[i]为局部最小值

int fn(int *arr,int length) {
	int L_index = 0;
	int R_index = length-1;
	//寻找中点
	while (R_index != L_index) {
		int mid_index = L_index + ((R_index - L_index) >> 1);
		if (arr[mid_index]>arr[mid_index+1])
		{
			L_index = mid_index;
		}
		else if(arr[mid_index] > arr[mid_index - 1])
		{
			R_index = mid_index;
		}
		else
		{
			return mid_index;
		}
	}
}