#include <stdio.h>
#include <string.h>
int main() {
	//char 字符类型
	//c语言无字符串类型
	//"abcdef"
	////由""引起的字符类型称为字符串字面值
	//char ch = 'w';
	char arr1[] = "abcdef";//结束标志\0占用一个元素
	//0~6
	char arr2[] = { 'a','b','c','d','e','f','\0' };//无\0
	char arr3[] = { 'a','b','c','d','e','f'};//无\0
	//0~5
	//字符数组,不给空间则自动匹配空间
	
	int size = sizeof("abc");
	//sizeof求长度包含\0
	int len = strlen("abc");
	//strlen为库函数,需要头文件strlen.h
	//strlen返回整形int
	//strlen求长度不包含\0
	printf("%d\n", len);//3
	printf("%d\n", size);//4
	
	
	printf("arr1= %s\n", arr1);
	printf("arr2= %s\n", arr2);
	printf("arr1lenth= %zd\n", strlen(arr1));
	printf("arr2lenth= %zd\n", strlen(arr2));
	printf("arr3lenth= %zd\n", strlen(arr3));
	//arr3无\0终止符,会继续计算长度,直到在内存中找到\0
	//sizeof同理以\0为终止符

	return 0;
}