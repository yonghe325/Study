#include <stdio.h>
#include <math.h>

int digit_sum(unsigned int num)
{
	if (num < 10) { return num; }
	return num % 10 + digit_sum(num / 10);
}

int main()
{
	unsigned int number = 0;
	printf("����һ����,�����ĸ���λ֮��:>");
	scanf_s("%u",&number);
	printf("sum = %d\n", digit_sum(number));
	return 0;
}












