#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num) {
//类似于memcpy
	assert(dest && src);
	void* dest0 = &dest;
	if (dest>src)
	{
		for (int i = num; i >= 0; i--)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
		return (void*)dest0;
	}
	else
	{
		for (size_t i = 0; i < num; i++, ++(char*)dest, ++(char*)src)
		{
			*(char*)dest = *(char*)src;
		}
		return (void*)dest0;
	}

}

int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");

	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[10] = { 0 };

	size_t sz = sizeof(arr2) / sizeof(arr2[0]);

	my_memmove(arr3, arr2, sizeof(arr2));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}