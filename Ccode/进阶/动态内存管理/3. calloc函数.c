#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
int main() {
	int* pi = (int*)calloc(10, sizeof(int));
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", *(pi + i));
	}
	//calloc函数会对内存空间初始化为0
	printf("\n");
	for (size_t j = 0; j < 10; j++)
	{
		pi[j] = j;
	}
	//重新赋值
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", pi[i]);
	}
	return 0;
}