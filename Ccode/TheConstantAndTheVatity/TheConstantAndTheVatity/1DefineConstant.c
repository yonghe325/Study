#include <stdio.h>
#define MAX 101
#define STR "abc"
//define常量,无法修改
int main() {
	const int num = 15;
	printf("%d\n", num);

	const int n = 15;
	//n本质上是变量,但具有常属性
	//无法修改
	int arr[10] = { 0 };//报错
	//定义一个元素个数为n的一维数组
	//n只能为常量
	printf("STR=%s\n", STR);
	return 0;
}