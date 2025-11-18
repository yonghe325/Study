#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main() {
	int arr[10] = { 0 };


	int* pi = (int*)malloc(40);
	//int* pi = (int*)malloc(LLONG_MAX);//开辟失败
	//申请40个字节空间
	if (pi ==NULL) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	//空间开辟成功
	//使用内存
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(pi + i) = i;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *(pi + i));
	}

	return 0;
}