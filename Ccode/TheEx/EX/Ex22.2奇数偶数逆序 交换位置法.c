#include<stdio.h>
void move_odd_even(int* arr,int sz) {
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0) {
			for (int j = sz - 1; j >= i; j--)
			{
				if (arr[j] % 2 != 0) {
					arr[i] = arr[i] ^ arr[j];
					arr[j] = arr[i] ^ arr[j];
					arr[i] = arr[i] ^ arr[j];
					break;
				}
			}
		}
	}
}
void printarr(int* arr,int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
void inputarr(int* arr, int size) {
	printf("ÇëÊäÈë%d¸öÊı×Ö : \n",size);
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	inputarr(arr, sz);
	move_odd_even(arr,sz);
	printarr(arr,sz);

	//for (int i = 0; i < sz; i++)
	//{
	//	if (arr[i] % 2 == 0) {
	//		for (int j = sz-1 ; j >= i; j--)
	//		{
	//			if (arr[j] % 2 != 0){
	//				arr[i] = arr[i] ^ arr[j];
	//				arr[j] = arr[i] ^ arr[j];
	//				arr[i] = arr[i] ^ arr[j];
	//				break;
	//			}
	//		}
	//	}
	//}

	//
	// 1 2 3 4 5 6 7 8 9 10
	// 1 9 3 4 5 6 7 8 2 10
	// 1 9 3 7 5 6 4 8 2 10
	// 
	// 
	//
	/*for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;*/
}