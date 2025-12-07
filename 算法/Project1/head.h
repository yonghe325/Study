#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>
#include <time.h>
#include <stdbool.h>
int Test();
int SelectionSort(int* arr, int arrsize);
int InsertionSort(int* arr, int length);
void Process(int* arr, int L, int R);
void QuickSort(int* arr, int L, int R);
int Swap(int* e1, int* e2);
int partition(int* arr, int L, int R);



