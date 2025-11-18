#include<stdio.h>
int main() {
	int arr[10] = {0};
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	int sz = sizeof(arr);
	printf("%d\n", sz);
	return 0;
}