#include<stdio.h>
int bubble_sort(int a[], int size) {
	// size = 10
	//冒牌排序 : 两两相邻的进行比较,通过比较大小调换位置
	// 9 8 7 6 5 4 3 2 1 0
	// 8 9 7 6 5 4 3 2 1 0
	// 8 7 9 6 5 4 3 2 1 0
	// 
	// 0,1,2,3,4,5,6,7,8,9
	int flag = 0;
	for (int j = 0; j < size-1; j++)
	{
		
		//j = 0,1,2,3,4,5,6,7,8,9
		//决定一共 排序几次
		for (int i = 0; i < size-j-1 ; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i] = a[i] ^ a[i + 1];
				a[i + 1] = a[i] ^ a[i + 1];
				a[i] = a[i] ^ a[i + 1];
				flag = 1;
			}
		}

		if (flag == 0)
		{
			return 1 ;
		}
	}
	return 0;
}

int main() {
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 11,51,21,34,87,25,61};

	//int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//把数组排成升序
	int ret =  bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n交换前是否为有序数组 %d", ret);

	return 0;
}