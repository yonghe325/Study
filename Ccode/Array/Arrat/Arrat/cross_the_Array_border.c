#include <stdio.h>
int main(void)
{
	//int arr1[] = {0,1,2,3,4,5,6,7};
	//int num = 0;
	//num = sizeof(arr1) / sizeof(arr1[0]);
	////╥ют╫╫Г
	//for (int i = 0; i < num; i++)
	//{
	//	printf("arr1[%d] = %d\n",i, arr1[i]);

	//}

	int arr2[][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
		printf("arr2[%d][%d] = %d\n", i,j,arr2[i][j]);

		}
		printf("\n");

	}
	

	return 0;
}