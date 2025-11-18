#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main2() {
	int i = 0;
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		exit(EXIT_FAILURE);
	}
	for ( i = 0; i <= 10; i++)//当p是10的时候,越界访问
	{
		*(p + 1) = i;
	}
	free(p);
	return 0;
}