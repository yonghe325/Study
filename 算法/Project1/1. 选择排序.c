#include "head.h"

int SelectionSort(int* arr,int arrsize ) {
	if (!arr || arrsize < 2) {
		return 1;
	}
	int min_Index;
	for (size_t i = 0; i < arrsize-1; i++)
	{
		min_Index = i;
		for (size_t j = i+1; j < arrsize; j++)
		{
			min_Index = arr[min_Index] < arr[j] ? min_Index : j;
		}
		Swap(&arr[min_Index],&arr[i]);
	}
	return 0;
}