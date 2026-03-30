#include <stdio.h>
int main()
{
	int a01 = 7;
	int a02 = a01 << 1;
	printf("%d >> 1 >>%d\n",a01,a02);
	
	int b01 = -7;
	int b02 = b01 << 1;
	printf("%d >> 1 >>%d\n", b01, b02);

	return 0 ;
}