#include <stdio.h>
int main()
{
	int a = 1;
	int arr[] = { a,a + 1,a + 2,a + 3 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if ((i!=j) && (j!=k) && (i!=k))
				{
					printf("%d%d%d\t",arr[i], arr[j], arr[k]);
				}
			}
		}
		printf("\n");


	}






	return 0;
}