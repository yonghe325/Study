#include <stdio.h>
int main3() {
	//char 字符类型
	//c语言无字符串类型
	//"abcdef"
	////由""引起的字符类型称为字符串字面值
	//char ch = 'w';
	char arr1[] = "abcdef";//结束标志\0占用一个元素
	//0~6
	char arr2[] = { 'a','b','c','d','e','f','\0' };//无\0
	//0~5
	//字符数组,不给空间则自动匹配空间
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	int len = strlen("abc");
	printf("%d", len);

	return 0;
}