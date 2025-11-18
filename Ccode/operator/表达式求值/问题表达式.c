#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	int sum = a * b + c * d + e * f;
	//			1	3	2	5	4
	//			1	4	2	5	3
	printf("sum = %d\n", sum);

	c = 2;
		c = c + --c;
	//		2 + 1
	//		1 + 1 
	printf("c = %d\n", c);
	//Êä³ö2

	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);

	return 0;
}