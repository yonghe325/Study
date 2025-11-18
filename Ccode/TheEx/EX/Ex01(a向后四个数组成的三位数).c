#include <stdio.h>
//a向后四个数组成的三位数
int main()
{
	int a = 0;
	printf("输入一个数");
	scanf_s("%d", &a);
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		arr[i] = a + i;
	}
	
	int num = 0;
	
	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if ( !((i == j ) || ( j == k ) || (  i== k )))
				{
					
					num++;
					printf("%d%d%d", arr[i], arr[j], arr[k]);
										
					if (num % 6 == 0)
					{
						printf("\n");
					}
					else
					{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}
						




				
				




