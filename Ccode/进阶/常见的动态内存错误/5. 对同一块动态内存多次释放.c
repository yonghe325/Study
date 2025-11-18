#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main() {
	int* p = (int*)malloc(100);
	//..
	free(p);
	//..
	free(p);//多次释放
	return 0;
}