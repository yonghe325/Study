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

void LKPrintf(LK* pphead);
//打印
LK* LKPush(int x);
//插入数据
void LKPushBack(LK** pphead,int x);
//尾插节点
void LKPushFront(LK** pphead, int x);
//头插
void LKInsertBack(LK** pphead, int find, int x);
//中间插入
void LKPopBack(LK** pphead);
//尾删
void LKPopFront(LK** pphead);
//头删
void LKRever01(LK** pphead);
LK* LKRever02(LK** pphead);
int LKRever03(LK** pphead);
int LKRever04(LK** pphead);
//翻转链表
void LKFind(LK** pphead, int find);
//查找数据
void LKInsertMid(LK** pphead, int find, int x);
