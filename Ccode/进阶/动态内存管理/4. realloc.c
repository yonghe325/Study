#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#include<string.h>

int main() {
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	//p =  realloc(p, 80);
	//直接用原指针接收很危险
	//realloc可能会返回空指针
	int* ptr = realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	//多加一个空指针判断,在赋值给原指针p
	memset(p + 10, 0,40);
	//将新开辟字节初始化为0
	for (size_t i = 0; i < 20; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}