#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//typedef int TypeSK;

typedef struct SK
{
	int* a;
	//栈的位置
	int top;
	//当前栈顶的位置
	int capaccity;
	//栈的当前总容量
}SK;

void InitStack(SK* ps);
//初始化栈
SK* StackExp(SK* ps);
//扩容栈
void StackDestory(SK* ps);
//销毁栈
void StackPrint(SK* ps);
//打印栈
int StackTop(SK* ps);
//取出栈顶数据,不出栈
int StackSize(SK* ps);
//统计栈内元素个数
bool StackEmpty(SK* ps);
//判断栈是否为空
void StackPush(SK* ps, int x);
//入栈
void StackPop(SK* ps);
//出栈
