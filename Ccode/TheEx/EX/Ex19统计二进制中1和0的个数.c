#include<stdio.h>
#include<math.h>
int Found_0_1_01(unsigned int num)
{
	int sum = 0;
	while (num)
	{
		if ((num % 2) == 1)
		{
			sum++;
		}
		num /= 2;
	}
	return sum;
}
int Found_0_1_02(unsigned int num)
{
	int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			sum++;
		}
	}
	return sum;
}
int Found_0_1_03(unsigned int num)
{
	static int sum = 0;
	if (num != 0)
	{
		num = num & (num - 1);
		sum++;
		Found_0_1_03(num);
	}
	return sum;
//n = 15
//n = n & (n-1)
//1111 n
//1110 n-1
// 
//1110 n
//1101 n-1
//
//1100 n
//1011 n-1
//
//1000 n
//0111 n-1
//
//0000 n
//n里面有几个一,就重复几次

}






int main()
{
	int num = 5590;
	int digit_1_01 = Found_0_1_01(num);
	int digit_1_02 = Found_0_1_02(num);
	int digit_1_03 = Found_0_1_02(num);


	printf("digit_1_01 = %d\n", digit_1_01);
	printf("digit_1_02 = %d\n", digit_1_02);
	printf("digit_1_03 = %d\n", digit_1_03);
	return 0;
}