//杨辉三角
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
//

//二维数组法
#include<stdio.h>
int main() {
	int arr[100][100] = { 0 };
	////初始化一二行
	//arr[0][0] = 1;
	//arr[1][0] = 1;
	//arr[1][1] = 1;
	int num = 0;
	printf("输入打印几行 : ");
	scanf_s("%d", &num);
	//计算
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j == 0 || i ==j )
			//动态初始化
			{
				arr[i][j] = 1;
			}
			else if (i >= 2 && j>=1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	//打印
	for (int i = 0; i < num; i++)
	{
		for (int j= 0; j < num ; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("%d\t", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}