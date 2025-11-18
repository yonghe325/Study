// 输入5
//          *
//        * *
//      * * *
//    * * * *
//  * * * * *
//
#include<stdio.h>
int main() {
	int num = 0;
	printf("输入打印行数 : ");
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num-i; j++)
		{
			printf("  ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}printf("\n");

	}
	return 0;
}