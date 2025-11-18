#define _CRT_SECUARE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//中间值法
//void left_rotate01(char* arr, int k) {
//	char mid = *arr;
//	for (int i=0; i < strlen(arr)-1; i++)
//		*(arr + i) = *(arr + i + 1);
//	*(arr + strlen(arr) - 1) = mid;
//	if (--k)
//		left_rotate(arr, k);
//}
//分割法逆序法
// abcdef
// 逆序两个字符
// 1. 分割
//		ab cdef
// 2. 逆序
//		ba fedc
// 3. 合并
//		bafedc
// 4. 整体逆序
//		cdefab
//
void left_rotate02(char* arr, int k) {
	//k=2
	int len = strlen(arr);
	//第一段逆序
	for (int i = 0; i < k/2; i++)
	{
		*(arr + i) = *(arr+i) ^ *(arr + k -1 - i );
		*(arr + k - 1 - i) = *(arr + i) ^ *(arr + k -1 - i);
		*(arr + i) = *(arr + k - 1 - i) ^ *(arr + i);
	}
	//第二段逆序
	for (int i = 0; i < (len - k)/2; i++)
	{
		*(arr + i + k) = *(arr + len - 1 - i) ^ *(arr + i + k);
		*(arr + len - 1 - i) = *(arr + i + k) ^ *(arr + len - 1 - i);
		*(arr + i + k) = *(arr + i + k) ^ *(arr + len - 1 - i);
	}
	//整体逆序
	for (int i = 0; i < len/2; i++)
	{
		*(arr + i) = *(arr + i) ^ *(arr + len - 1 - i);
		*(arr + len - 1 - i) = *(arr + i) ^ *(arr + len - 1 - i);
		*(arr + i) = *(arr + i) ^ *(arr + len - 1 - i);
	}
}

//分割法逆序 函数调用法
void rotate(char* left, char* right) {
	int num = right - left + 1;
	for (int i = 0; i < num/2; i++)
	{
		*(left + i) = *(left + i) ^ *(right - i);
		*(right - i) = *(left + i) ^ *(right - i);
		*(left + i) = *(left + i) ^ *(right - i);
	}
}
void left_rotate03(char* arr, int k) {
	rotate(arr, arr + k-1);
	rotate(arr + k, arr + strlen(arr)-1);
	rotate(arr, arr + strlen(arr) - 1);
}

int main() {
	char arr1[] = "0123456789";
	//cdef ab
	int k = 3;
	printf("%s\n",arr1);
	printf("输入左旋几个字符 : ");
	scanf_s("%d", &k);
	//left_rotate01(arr,k);
	//left_rotate02(arr1, k);
	left_rotate03(arr1, k);

	printf("%s", arr1);
	return 0;
}
