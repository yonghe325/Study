#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#include<search.h>
typedef struct LklistNode
{
	int data;
	struct LklistNode* next;
}LK ;

void LKPrintf(LK* phead);
//打印
void LKPushBack(LK* phead,int x);
//尾插节点