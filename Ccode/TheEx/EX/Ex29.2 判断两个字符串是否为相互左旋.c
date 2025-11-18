#include<stdio.h>
#include<string.h>
void rotate(char* left, char* right) {
	int num = right - left + 1;
	for (int i = 0; i < num / 2; i++)
	{
		*(left + i) = *(left + i) ^ *(right - i);
		*(right - i) = *(left + i) ^ *(right - i);
		*(left + i) = *(left + i) ^ *(right - i);
	}
}
char* left_rotate(char* arr, int k) {
	rotate(arr, arr + k - 1);
	rotate(arr + k, arr + strlen(arr) - 1);
	rotate(arr, arr + strlen(arr) - 1);
}
int if_rotate(char* arr1, char* arr2) {
	for (int i = 0; i < strlen(arr1); i++)
	{
		rotate(arr1, arr1 + i - 1);
		rotate(arr1 + i, arr1 + strlen(arr1) - 1);
		rotate(arr1, arr1 + strlen(arr1) - 1);
		if (!strcmp(arr1, arr2))
		{
			return 1;
		}
	}
	return 0;
}
int main() {
	char arr1[] = "0123456789";
	char arr2[] = "4567890113";
	int  ret = if_rotate(arr1,arr2);
	if (ret)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	//printf("%s", arr1);
	return 0;
}
