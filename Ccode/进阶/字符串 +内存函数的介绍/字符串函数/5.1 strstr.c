#define _CRT_SECURE_NO_WARNINGS
//忽略安全警告
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main() {
	char arr1[] = "abcdefg";
	char arr2[] = "efg";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("子串不存在");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}