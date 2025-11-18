#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main() {
	FILE* pf = fopen("test.txt","r");
	//fopen打开文件
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));  
		return 1;
	}
	else
	{

	}
	return 0;
}