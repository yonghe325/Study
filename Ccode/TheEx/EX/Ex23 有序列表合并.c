#include<stdio.h>
int main() {
	//分别输入两个有序数列的元素个数
	printf("输入两个有序数列 : ");
	int n = 0;
	int m = 0;
	scanf_s("%d %d", &n, &m);
	//分别输入两个有序数列
	printf("分别输入两个有序数列 : \n");
	int arr1[1000];
	int arr2[1000];
	printf("第一个数列 : ");
	for (size_t i = 0; i < n; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("第二个数列 : ");
	for (size_t i = 0; i < m; i++)
	{
		scanf_s("%d", &arr2[i]);
	}

	//合并打印两个有序数列
	//分别比较相同下标时
	//arr1 和 arr2 数组那个元素大
	// 当将一个数组打印完时
	// 直接打印另一个数组的剩余元素
	//
	int a1 = n;
	int a2 = m;
	//将a1,a2 赋值为 n,m
	//当打印剩余元素时
	//不用在计算还有多少元素还未打印
	printf("合并有序数列为 : ");
	for (size_t i = 0; i < n+m; i++)
	{
		if (a1 >0 && a2>0)
		{
			if (arr1[n - a1] < arr2[m - a2])
			{
				printf("%d ", arr1[n - a1]);
				// 4 3 2 1 0
				// 0 1 2 3
				a1--;

			}
			else if (arr1[n - a1] > arr2[m - a2])
			{
				printf("%d ", arr2[m - a2]);
				a2--;
			}
		}
		else if (a1==0)
		{
			for(; a2 > 0; a2--)
			{
				printf("%d ", arr2[m - a2]);
			}
		}
		else if (a2==0)
		{
			for (; a1 > 0; a1--)
			{
				printf("%d ", arr1[n - a1]);
			}
		}
		
	}


	/*printf("n : ");
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\nm : ");
	for (size_t i = 0; i < m; i++)
	{
		printf("%d ", arr2[i]);
	}*/

	return 0;
}