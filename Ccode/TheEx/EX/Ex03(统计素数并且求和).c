//ͳ�������������
//ͳ�ƶ�����M��N��������������������
#include <stdio.h>
#include <math.h>

int main()
{
	int M = 0;
	printf("��ʼֵM=");
	scanf_s("%d", &M);
	printf("����ֵN=");
	int N = 0;
	scanf_s("%d", &N);
	int sum = 0;
	int num = 0;
	
	for (;M < N ; M++)
	{
		for (int i = 2; i < M; i++)
		{
			if ( M % i == 0 )//==0��������
			//�ж�M�Ƿ�Ϊ����
			{
				break;
			}
			else if(i == M-1)
			{
				sum = sum + M;
				num++;
			//printf("M%i=%d\n", M % i);
			//printf("M/i=%d\n", M / i);
			}
		}
	}
	printf("num=%d\n", num);
	printf("sum=%d\n", sum);


}