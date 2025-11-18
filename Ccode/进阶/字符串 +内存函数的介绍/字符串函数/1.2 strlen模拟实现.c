#include<stdio.h>
#include<assert.h>
size_t my_strlen01(const char* arr) {
	assert(arr);
	size_t count = 0;
	while (*arr != '\0') {
		count++;
		arr++;
	}
	return count;
}//计数器方法

size_t my_strlen02(const char* arr) {
	char* arr0 = arr;
	while (*arr != '\0') {
		arr++;
	}
	return arr-arr0 ;
}//指针 - 指针方法


size_t my_strlen03(const char* arr) {
	if (*arr == '\0')
	{
		return 0;
	}
	else
	{
		return (1+my_strlen03(++arr));
	}
}
//递归实现
// #模拟实现
int main() {
	char arr[] = "abcdefg";
	printf("%zu\n", my_strlen03(arr));
	return 0;
}