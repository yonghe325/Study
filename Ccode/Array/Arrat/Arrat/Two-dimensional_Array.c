#include <stdio.h>
int main(void )
{
	int arr1[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//printf("arr1[%d][%d] = %d\t ",i,j,arr1[i][j]);
			printf("&arr1[%d][%d] = %p\t ",i,j,&arr1[i][j]);

			printf("\n");
		}
		printf("\n");

	}

	return 0;
}