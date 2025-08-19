#include<stdio.h>
int main()
{
	int a = 3;
	int b = -5;
	int c01 = a & b;
	int c02 = a | b;
	int c03 = a ^ b;
	printf("c01 = %d\n",c01);
	printf("c02 = %d\n",c02);
	printf("c03 = %d\n",c03);
	return 0;
}