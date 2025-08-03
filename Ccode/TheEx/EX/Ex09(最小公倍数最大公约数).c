//最小公倍数
//接收两个正整数,计算输出两个数的最小公倍数LCM
//程序定义两个函数
// 一个用于计算最大公约数GCD
// 一个用于计算最小公倍数LCM
#include <stdio.h>
int GCD = 0;
int LCM = 0;
int t = 0;
int GCDtest(int a,int b)
{
	if (b == 0)
	{
		return a;
	}
		
		//a=50
		//b=20
		//t = a % b ;//10
		//a = b;
		//b = t;
	/*printf_s("a= %d\n", a);
	printf_s("b= %d\n", b);*/
	//printf_s("t= %d\n",t);

	return GCDtest(b, a % b);
}
//求最大公约数

int LCMtest(int a, int b)
{
	int sum = a * b;
	LCM = sum / GCD;
}
//最小公倍数LCM与最大公约数GCD的乘积等于这两个数的乘积

int main()
{
	int num01 = 0;
	printf_s("第一个数");
	scanf_s("%d", &num01);
	int num02 = 0;
	printf_s("第二个数");
	scanf_s("%d", &num02);
	
	if (num01 > num02)
	{
		GCD = GCDtest(num01, num02);
		LCM = LCMtest(num01, num02);
	}
	else
	{
		GCD = GCDtest(num02, num01);
		LCM = LCMtest(num01, num02);
	}
	printf_s("GCD= %d\n", GCD);
	printf_s("LCM= %d\n", LCM);
	//判断谁更大,求最大公因数
	
	return 0;
}