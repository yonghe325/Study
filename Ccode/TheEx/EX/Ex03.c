//统计素数并且求和
//统计定整数M和N区间的素数个数并且求和
#include <stdio.h>
#include <math.h>

int main()
{
	int M = 0;
	printf("起始值M=");
	scanf_s("%d", &M);
	printf("结束值N=");
	int N = 0;
	scanf_s("%d", &N);
	int sum = 0;
	int num = 0;
	
	for (;M < N ; M++)
	{
		for (int i = 2; i < M; i++)
		{
			if ( M % i == 0 )//==0则不是素数
			//判断M是否为素数
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