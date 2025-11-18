#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
typedef struct st_type {
	int n;
	int* arr; // 柔性数组成员
}My_arr;

int main() {
	My_arr* p = (My_arr*)malloc(sizeof(My_arr));
	if (p == NULL)
	{
		return 1;
	}
	p->n = 100;

	p->arr = (int*)malloc(sizeof(int) * 10);
	if (p->arr ==NULL)
	{
		return 1;
	}
	for (size_t i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}

	int* ptr = (int*)realloc(p->arr , sizeof(int) * 20);
	if (ptr == NULL)
	{
		return 1;
	}
	p->arr = ptr;
	ptr = NULL;
	for (size_t i = 0; i < 20; i++)
	{
		p->arr[i] = i;
	}
	for (size_t i = 0; i < 20; i++)
	{
		printf("%d ", p->arr[i]);
	}

	return 0;
}