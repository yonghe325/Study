#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest,const void* src,size_t num) {
	assert(dest && src);
	void* dest0 = &dest;
	for (size_t i = 0; i < num; i++,++(char*)dest,++(char*)src)
	{
		*(char*)dest = *(char*)src;
	}
	return (void*)dest0;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	size_t sz = sizeof(arr2) / sizeof(arr2[0]);
	my_memcpy(arr2, arr1, sizeof(arr1));

	for (size_t i = 0; i < sz; i++)
	{
		printf("%d", arr2[i]);
	}

	printf("\n");

	float arr3[5] = { 1.0,2.0,3.0,4.0,5.0 };
	float arr4[10] = { 0.0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	sz = sizeof(arr3) / sizeof(arr3[0]);
	for (size_t i = 0; i < sz; i++)
	{
		printf("%.2lf ", arr3[i]);
	}
	return 0;
}