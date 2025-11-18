#include<stdio.h>
int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[3] = { arr1,arr2,arr3 };
	//模拟出二维数组
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for ( j = 0; j < 5; j++)
		{
			//各自数组的数组名
			//各自数组的s首元素地址
			//printf("%d ", *(parr[i] + j));
			//*(p+i) 等价于 p[i]
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	
	}
	return 0;
}