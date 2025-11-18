#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main4() {
	int* p = (int*)malloc(100);
	if (NULL == p)
	{
		return 1;
	}
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*p = i; 
		p++;
	}
	free(p);//p不在指向动态内存的起始位置
	p = NULL;
	return 0;
}