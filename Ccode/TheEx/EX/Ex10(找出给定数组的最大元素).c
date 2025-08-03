//找出给定数组的最大元素
#include <stdio.h>
#include <string.h>
int main()
{
	int max = 0;
	int lenth = 0;

	int arr[] = { 15,65,84,32,56,78 };
	lenth = sizeof(arr) / 4;

	for (int i = 0; i < lenth ; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	
	printf_s("%d\n", max);
	printf_s("%d\n", lenth);

}
