#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#include<search.h>
#define exp 2
typedef struct Seqlist0
{
	int* a;
	int size;
	int max;
}SL;

void SLinit(SL* ps);
void SLPushback(SL* ps, int x);
void SLPushfront(SL* ps, int x);
void SLPopback(SL* ps);
void SLPopfront(SL* ps);
void SLSort(SL* ps);
void SLPrintf(SL* ps);

