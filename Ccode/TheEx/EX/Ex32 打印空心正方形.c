//在一行中输入一个大于零的数
//作为正方形的边长
//* * * * *
//*       *
//*       *
//*       *
//* * * * *
#include<stdio.h>
int main() {
	int a;
	printf("输入边长 : ");
	scanf_s("%d", &a);
	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < a; j++)
		{
			if (i == 0 || i == a-1 || j == 0 || j == a - 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			//printf("* ");
		}
		printf("\n");
	}
	return 0;
}