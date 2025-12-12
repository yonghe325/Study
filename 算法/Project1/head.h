#pragma once
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>
#include <time.h>
#include <stdbool.h>
int Test();
int SelectionSort(int* arr, int arrsize);
//选择排序函数
int InsertionSort(int* arr, int length);
//插入排序函数
void Process(int* arr, int L, int R);
//归并排序调用函数
void QuickSort(int* arr, int L, int R);
//快速排序
int Swap(int* e1, int* e2);
//交换函数
int partition(int* arr, int L, int R);
//快速排序划分调用函数
int HeapSort(int* arr, int length);
//堆排序
void RadixSort(int* arr, int length);
//正整数基数排序
void radixSortWithNegatives(int* arr, int length);
//含偏移量的基数排序




