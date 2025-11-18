#include<stdio.h>
#include<string.h>
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//
// }

int main() {
	//char arr[] = "hellw bit";
	////memset(arr, 'x', 5);
	//memset(arr+6, 'x', 3);
	//printf("%s\n", arr);

	int arr[10] = { 0 };
	//把arr初始化为1
	memset(arr, 11, 40);
	//会将每个字节设置为11
	for (int i = 0; i < 40; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}