//给予一个无需数组,通过冒泡排序,整理成有序数列
#include <stdio.h>
void printarr(int arr[],int size)//传首元素的地址
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//打印数组函数

int bubble_sort(int* arr,int size)//传首元素的地址
{
	
	if (size == 1)  return 0 ;
	
	for (int i = 0; i < size-1; i++)
	{
		if ( arr[i]>arr[i+1])//+1代表下一个元素
		{
			arr[i] = arr[i] ^ arr[i + 1];
			arr[i + 1] = arr[i] ^ arr[i + 1];
			arr[i] = arr[i] ^ arr[i + 1];
		}
	}
	bubble_sort(arr, --size);
	//排好一个元素
	//就少排一次		
}
//




		
int main() 
{
	int arr[] = {11,10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	printarr(arr, sz);

	return 0;
}
	


	

