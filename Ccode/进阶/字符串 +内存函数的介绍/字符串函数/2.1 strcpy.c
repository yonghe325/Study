#define _CRT_SECURE_NO_WARNINGS
//忽略安全警告
#include<stdio.h>
#include<string.h>
int main() {
	char name[20] = { 0 };
	//将 "张三" 放入name里
	strcpy(name ,"zhangsan");
	printf("%s\n", name);
	return 0;
}