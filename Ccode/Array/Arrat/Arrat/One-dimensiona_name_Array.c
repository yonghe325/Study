#include <stdio.h>


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("arr ==  %p\n", arr);
	//arr就是首(0)元素的地址
	printf("arr+1 == %p\n", arr+1);
	//第二个元素的地址
	
	printf("---------------\n");
	printf("&arr[0] == %p\n", &arr[0]);
	//首(0)元素的地址
	printf("&arr[0]+1 == %p\n", &arr[0]+1);
	//第二个元素的地址
	
	printf("---------------\n");
	printf("&arr == %p\n", &arr);
	//数组的地址
	printf("&arr+1 == %p\n", &arr+1);
	//整个数组后的地址

	printf("---------------\n");
	printf("%d\n", sizeof(arr));


	return 0;
}