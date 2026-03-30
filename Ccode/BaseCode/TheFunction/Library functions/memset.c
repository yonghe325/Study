#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);
	//将str的前6个值设置为-
	puts(str);
	//打印str

	char arr1[] = "12345678901234567890";
	memset(arr1+9, '#', 5);
	printf("arr1= %s\n",arr1);
	
	char arr2[] = "哈哈哈哈哈哈哈哈哈哈";
	//一个中文字符两个字节
	memset(arr2, '1', 2);
	//将前2个字节换为1
	printf("arr2= %s\n",arr2);
	//第一个哈被换为2个1
	
	
	return 0;
}