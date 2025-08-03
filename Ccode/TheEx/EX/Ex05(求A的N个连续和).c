//求A的N个连续和
//S =a+aa+aaa+aaa+...+aaa(N个)
#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0;
	printf("输入A=");
	scanf_s("%d", &a);
	int N = 0;
	printf("输入个数=");
	scanf_s("%d", &N);
	int j = 0;
	int S = 0;
	//int theIndex = 10 - a;
	for (int i = 1; i <= N; i++)
	{
		j = (pow(10, i) - 1) / 9;
		int num = j * a;
		S += num;
	}
	printf("%d\n", S);

}
