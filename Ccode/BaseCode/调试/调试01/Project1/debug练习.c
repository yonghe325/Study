#include<stdio.h>
//1! + 2! + 3! + ... + n!
int main04()
{
	int n = 10;
	int sum = 0;
	int mid_sum = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			mid_sum *= j;
		}
		printf("%d\t", mid_sum);
		sum += mid_sum;
		mid_sum = 1;
	}
		printf("\n");
	printf("%d\n", sum);

	return 0;
}