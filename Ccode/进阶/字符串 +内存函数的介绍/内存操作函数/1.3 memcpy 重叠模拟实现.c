#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy02(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* dest0 = &dest;
	for (int i = num; i >= 0; i--)
	{
		*((char*)dest + i) = *((char*)src+i);
	}
	return (void*)dest0;
}
//只解决了前向后覆盖
//没用通用性
//只需要判断两个地址的大小

int main() {
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	size_t sz = sizeof(arr1) / sizeof(arr1[0]);
	my_memcpy02(&arr1[2], arr1, sizeof(arr1[0])*5);

	for (size_t i = 0; i < sz; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}