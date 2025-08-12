#include <stdio.h>


int main()
{
	int arr[3][4] = {0,2,3,4,5,6,7,8,9,10,11};
	int byte_sizeall = sizeof(arr);
	//总元素的字节
	printf("byte_sizeall = %d\n", byte_sizeall);
	
	int size_One_number = sizeof(arr) / sizeof(arr[0]);
	//一维数组的元素个数
	// 总元素的字节 / 二维数组的总字节 = 一维数组的元素个数
	printf("size_One_number = %d\n", size_One_number);
	
	int size_Two_number = sizeof(arr[0]) / sizeof(arr[0][0]);
	//二维数组的元素个数
	//二维数组的总字节 / 二维数组每个元素的字节 = 二维数组的元素个数
	printf("size_Two_number = %d\n", size_Two_number);
	
	
	printf("arr ==  %p\n", arr);
	printf("arr+1 ==  %p\n", arr+1);
	//arr[0] = {0,1,2,3};
	//arr代表"0"这个元素的地址
	//arr[1] = {4,5,6,7}
	// arr+1代表"4"这个元素的地址
	//arr[2] = {8,9,10,11};
	//arr+2代表"8"这个元素的地址

	//printf("&arr[0] == %p\n", &arr[0]);
	////首(0)元素的地址
	//printf("&arr[0]+1 == %p\n", &arr[0] + 1);
	
	
	
	
	printf("%d\n", sizeof(arr));
	
	
	
	
	
	
	
	
	//printf("arr ==  %p\n", arr);
	////arr就是首(0)元素的地址
	//printf("arr+1 == %p\n", arr + 1);
	////第二个元素的地址
	//printf("---------------\n");
	//printf("&arr[0] == %p\n", &arr[0]);
	////首(0)元素的地址
	//printf("&arr[0]+1 == %p\n", &arr[0] + 1);
	////第二个元素的地址
	//printf("---------------\n");
	//printf("&arr == %p\n", &arr);
	////数组的地址
	//printf("&arr+1 == %p\n", &arr + 1);
	////整个数组后的地址
	//printf("---------------\n");
	//printf("%d\n", sizeof(arr));




	return 0;
}