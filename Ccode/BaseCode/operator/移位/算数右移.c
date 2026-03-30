#include <stdio.h>
int main()
{
	int a01 = 7;
	int b01 = a01 >> 1;
	printf("b01 = %d\n", b01);

	int a02 = -7;
	int b02 = a02 >> 1;
	printf("b02 = %d\n", b02);

	int a03 = -7;
	int b03 = a03 >> 1;
	printf("b03 = %d\n", b03);
	return 0;
}