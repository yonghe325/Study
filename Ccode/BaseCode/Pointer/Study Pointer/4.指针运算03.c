#include<stdio.h>
int main()
{
	/*unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n",*pulPtr,*(pulPtr+3));*/


	int arr[] = { 1,2,3,4,5,5,5,5,5 };
	int se = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (int i = 0; i < se; i++)
	{
		printf("%d\n", *(p + i));
	}


	return 0;
}