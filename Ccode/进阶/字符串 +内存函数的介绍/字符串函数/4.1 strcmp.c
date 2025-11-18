#define _CRT_SECURE_NO_WARNINGS
//忽略安全警告
#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = "zhangsan";
	char arr2[] = "zhangsanfeng";
	//比较两个字符串是否相等
	if (arr1 == arr2)
	{
		printf("==\n");
	}
	else {
		printf("!=\n");
	}
	//错误
	// arr1,arr2比较的是"zhangsan"与"zhangsanfeng"
	//首个元素的地址

	//两个字符串比较
	//应使用strcmp函数
	int ret = strcmp(arr1, arr2);
	if (ret<0)
	{
		printf("<\0");
	}
	else if (ret >0)
	{
		printf(">\0");
	}
	else
	{
		printf("=\0");
	}
	return 0;
}