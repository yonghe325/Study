#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
typedef struct MyStruct
{
	int i;
	int arr[];
}My_arr;

int main() {
	//sizeof(<结构体>)返回的内存大小不包含柔性数组的内存大小
	printf("%u\n", sizeof(My_arr));

	//开辟空间使用
	My_arr* pm = (My_arr*)malloc(sizeof(My_arr) + 40);
	pm->i = 1200;
	for (size_t i = 0; i < 10; i++)
	{
		pm->arr[i] = i;
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", pm->arr[i]);
	}
	printf("\n");
	//动态调整数组
	My_arr* mid =  (My_arr*)realloc(pm, sizeof(My_arr) + sizeof(int) * 20);
	if (mid !=NULL)
	{
		pm = mid;
		mid == NULL;
	}
	for (size_t i = 0; i < 20; i++)
	{
		pm->arr[i] = i;
	}
	for (size_t i = 0; i < 20; i++)
	{
		printf("%d ", pm->arr[i]);
	}

	free(pm);

	return 0;
}