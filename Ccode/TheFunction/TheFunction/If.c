#include <stdio.h>
int main() 
{
	int num = 3;
	if (5 == num)//���if (num == 5),������һ�� =
		printf("num= %d\n", 5);
	else
		printf_s("num= %d\n", 3);
	return 0;
}

	