#include "head.h"

//实现对数器


//生成随机序列
int* generateRandomArray(int maxsize,int maxnum) {
	srand((unsigned)time(NULL));
	//填入种子
	int* arr = (int*)calloc(maxsize, sizeof(int));
	//生成数组
	if (!arr) {
		printf("填入随机数错误\n");
		exit(-1);
	}

	for (size_t i = 0; i < maxsize; i++)
	{
		arr[i] = rand() % (maxnum + 1) - rand() % (maxnum + 1);
		//限定最大数,最小数
	}
	return arr;
}

//拷贝两份序列
int* copyArray(int* arr1, int length) {
    if (arr1 == NULL) {
        printf("输入的 arr1 为 NULL。\n");
        exit(-1);
    }
    int* arr2 = (int*)calloc(length, sizeof(int));
    if (arr2 == NULL)
    {
        printf("内存分配失败，arr2 为 NULL。\n");
        exit(-1);
    }
    for (size_t i = 0; i < length; i++)
    {
        arr2[i] = arr1[i];
    }
    return arr2;
}

//分别排序
void sortFirst(int *arr,int length) {
	SelectionSort(arr, length);
//使用选择排序
}
void sortSecond(int* arr, int length) {
	Process(arr, 0, length-1);
	//使用测试排序
}

//比较
bool isEquals(int* arr1, int* arr2, int length) {
	for (size_t i = 0; i < length; i++)
	{
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}

//打印
void printArray(int *arr,int length) {
	for (size_t i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int Test() {
	int maxsize = 0;
	printf("输入长度:");
	scanf_s("%d", &maxsize);

	int maxnum = 0;
	printf("输入最大值的绝对值:");
	scanf_s("%d", &maxnum);

	int* arr_First = generateRandomArray(maxsize, maxnum);
	//随机数列
	printf("初始序列:\n");
	printArray(arr_First, maxsize);
	int* arr_Second = copyArray(arr_First, maxsize);
	//赋值序列
	sortFirst(arr_First,maxsize);
	sortSecond(arr_Second,maxsize);
	//分别排序
	if (isEquals(arr_First, arr_Second,maxsize))
	{
		printf("排序正确\n");
		printArray(arr_First, maxsize);
		printArray(arr_Second, maxsize);
		return 1;
	}
	else {
		printf("排序错误\n");
		printArray(arr_First, maxsize);
		printArray(arr_Second, maxsize);
		return 0;
	}
	printf("比较完成\n");
}