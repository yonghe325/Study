//打印星星菱形
#include <stdio.h>
int main()
{
	int a = 0;
	printf("a= ");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (i <= (a+1)/2)
		{
			for (int  j = 1; j <= (a+1)/2 - i; j++)
			{
				printf(" ");
			}
			//空格
			for (int k = 0; k < 2*i-1; k++)
			{
			printf("*");
			}
			//上班部分星星
			printf("\n");
		}
		else
		{
			for (int j = a - i; j < a/2  ; j++)
			{
				printf(" ");
			}
			//空格
			for (int k = 0; k < 2*((a+1) - i)-1; k++)
			{
				printf("*");
			}
			//下半部分星星
			printf("\n");
		}
	}
	return 0;
}
			



		

	
	
	
