#include "head.h"
void Heapify(int* arr, int index, int length) {
	//Swap(&arr[0], &arr[--length]);
	//先交换
	//然后再Heapify
	//递归专用
	int left = index * 2 + 1;
	while (left < length) {
		int largrst = left + 1 < length && arr[left + 1] > arr[left] ? left + 1 : left;
		// 返回左右孩子中值更大的下标
		largrst = arr[index] > arr[largrst] ? index : largrst;
		// 判断左右孩子的值是否比父结点的值大
		// 将值更大的下标赋给largest

		if (largrst == index && largrst < length)
		{
			//如果largrst == index
			//表明父结点比孩子结点的值都大
			//直接跳出
			break;
		}
		Swap(&arr[largrst], &arr[index]);
		// 将父节点的值与比它更大的子节点的值交换
		// 完成一次交换
		index = largrst;
		left = index * 2 + 1;
	}
	//Heapify完毕
}
// 将交换后,不一定满足堆性质的数组,调整为符合堆的结构
// 从父结点向下寻找

int Heapinsert(int* arr, int index) {
	
	while (arr[index] > arr[(index - 1) / 2]) {
		Swap(&arr[index],&arr[(index - 1) / 2]);
		index = (index - 1) / 2;
	}
}
//下面Heapinsert01的优化
//省去了创建中间变量的过程

//int Heapinsert01(int* arr, int size) {
	////新添加的元素始终在数组最后
	////判断是否为堆
	//int index = size - 1;
	////插入元素位置
	//int top = (index - 1) / 2;
	////父元素
	//int largest = 0;
	//while (index) {
	//	largest = arr[index] < arr[top] ? index : top;
	//	if (largest == index)
	//	{
	//		break;
	//	}
	//	Swap(&arr[largest],&arr[index]);
	//	index = top;
	//	top = (index - 1) / 2;
	//}
//}
//递归扩大length实现大根堆

int HeapSort(int* arr, int length) {
	if (arr ==NULL || length<2)
	{
		return -1;
	}


	for (int i = 0; i < length; i++)
	{
		Heapinsert(arr,i);
	}
	//迭代 从后向前插入实现大根堆
	//适用于每一个数单独给出

	//for (int i = length-1; i >=0; i--)
	//{
	//	Heapify(arr, i, length);
	//}
	////从后向前Heapify,适用于直接给出完全二叉树的情况


	

	Swap(&arr[0], &arr[--length]);
	//先实现交换
	while (length>0) {
		Heapify(arr, 0, length);
		Swap(&arr[0], &arr[--length]);
	}
	//迭代实现排序

	return 0;
}
//堆排序







