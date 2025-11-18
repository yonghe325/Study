#include<stdio.h>
//int bubble_sort(int a[], int size) {
//
//	int flag = 0;
//	for (int j = 0; j < size - 1; j++)
//	{
//
//		//j = 0,1,2,3,4,5,6,7,8,9
//		//决定一共 排序几次
//		for (int i = 0; i < size - j - 1; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				a[i] = a[i] ^ a[i + 1];
//				a[i + 1] = a[i] ^ a[i + 1];
//				a[i] = a[i] ^ a[i + 1];
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
int cmp_int(const void* e1, const void* e2) {

	return (*(int*)e1 - *(int*)e2);

}
void Swap(char* buf1, char* buf2, int width) {
	int i = 0;
	for ( i = 0; i < width; i++)
//逐个字节交换,交换width个字节
	{
		char tem = *buf1;
		*buf1 = *buf2;
		*buf2 = tem;
		buf1++;
		buf2++;
	}
}
int bubble_sort_int(void* base, size_t size, size_t width, int (*cmp)(const void*, const void*)) {
	/*if (width % sizeof(int))
	{
		(int*)base;
	}
	else if (width % sizeof(char))
	{
		(char*)base;
	}*/
	//void* base 表示 排序的起始地址
	//size表示有几个元素
	//width表示宽度
	//通过width,即可明确排列的类型

	//通过cmp函数,决定排序方式
	int j = 0;//躺数
	for ( j = 0; j < size - 1; j++) {
		int flag = 1;
	//判断是否有序数组
		for (int i = 0; i < size - j - 1; i++) {
			if ( cmp(   (char*)base + i * width   ,  (char*)base + (i + 1) * width) > 0 )
			{
				Swap( (char*)base + i * width, (char*)base + (i + 1) * width, width);
				//Swap 函数 交换两个元素
			}

		}
		if (flag == 0)
		{
			break;
		}

	}
	return 0;
}

int main() {
	//int arr[] = { 11,51,21,34,87,25,61 };
	//int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort_int(arr, sz, sizeof(arr[0]), cmp_int);
	//排列整形
	//当排列其他类型时,替换cmp_int函数即可

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}