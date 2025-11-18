#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main3() {
	int a = 10;
	int* p = &a;
	free(p);
	//p不是动态开辟的的内存
	return 0;
}