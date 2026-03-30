#include<stdio.h>
int main501()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", a);
	//pa是指针变量,即一级指针变量
	int** p_pa = &pa;
	//p_pa是也是指针变量,为二级指针变量

	return 0;
}