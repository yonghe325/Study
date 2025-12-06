#include<stdio.h>
int main() {
	int a[100];
	for (size_t i = 0; i < 100; i++)
	{
		a[i] =2 + i * 2;
		printf("%d\n", a[i]);
	}
	printf("\n");
	char c[26];
	for (size_t i = 0; i < 26; i++)
	{
		c[i] = 65 + i;
		printf("%c\n", c[i]);
	}
	return 0;
}