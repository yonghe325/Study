//折半查找,二分查找
//有序数列

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int found_number = 2;//被查找数
	int sz = sizeof(arr) / sizeof(arr[0]);//查找长度
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		//求两个数的平均值
		//当数组元素个数过大时,(left+right)可能溢出

		int mid = (right - left) / 2 + left;
		//求两个数的平均值
		//不会有溢出风险,不会超出int类型的范围
		if (arr[mid] < found_number)
		{
			left = mid + 1;
		}
		else if (arr[mid] >found_number)
		{
			right = mid - 1;
		}
		else 
		{
			printf("找到了");
			printf_s("%d %d\n", mid, arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf_s("找不到");
	}
	return 0;
}


	
		


			

		


		

	

	

