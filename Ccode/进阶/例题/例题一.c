#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
void GetMemeory(char* p) {
	p = (char*)malloc(100);
}
void Test(void) {
	char* str = NULL;
	GetMemeory(&str);
	strcpy(str, "hello,world"); 
	printf("%s", str);
}

int main()
{
	Test();
	return 0;
}