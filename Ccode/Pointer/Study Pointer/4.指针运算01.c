#include<stdio.h>
int main401()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
	//数组下标初始化
	for (int i = 0; i < 10; i++)
	{
		printf("0arr = %d\n", arr[i]);
	}
	printf("\n");
	
	int* p1 = arr;
	//p1 = &arr[0]
	for (int i = 0; i < sz; i++)
	{
		*p1 = 1;
		p1++;
	}
	//指针变量解引用初始化1
	for (int i = 0; i < 10; i++)
	{
		printf("1arr = %d\n", arr[i]);
	}
	printf("\n");

	/*int* p3*/;
	for (int* p3 = &arr[0]; p3 < &arr[10]; )
	{
		*p3++ = 2;
	}
	//指针变量解引用初始化2
	for (int i = 0; i < 10; i++)
	{
		printf("2arr = %d\n", arr[i]);
	}
	printf("\n");

	
	int* p2 = arr;
	for (int i = 0; i < sz; i++)
	{
		*(p2 + i) = 3;
	}
	//间接参数解引用初始化
	for (int i = 0; i < 10; i++)
	{
		printf("3arr = %d\n", arr[i]);
	}
	printf("\n");
	return 0;
}