//��ӡ��������
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
			//�ո�
			for (int k = 0; k < 2*i-1; k++)
			{
			printf("*");
			}
			//�ϰಿ������
			printf("\n");
		}
		else
		{
			for (int j = a - i; j < a/2  ; j++)
			{
				printf(" ");
			}
			//�ո�
			for (int k = 0; k < 2*((a+1) - i)-1; k++)
			{
				printf("*");
			}
			//�°벿������
			printf("\n");
		}
	}
	return 0;
}
			



		

	
	
	
