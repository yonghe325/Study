#include "head.h"
//插入排序
// O(N^2) O(1)


int InsertionSort(int *arr,int length) {
	if (!arr || length < 2) {
		return 1;
	}

	for (size_t i = 1; i < length; i++)
	{
		for(int j = i ; j >0 ; j--)
		{
			if (arr[j] < arr[j-1])
			{
				Swap(arr[j],arr[j - 1] );
			}
			else if (arr[j] >= arr[j - 1]) {
				break;
			}
		}
	}
	return 0;
}
