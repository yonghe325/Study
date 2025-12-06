#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<errno.h>
//数据类型
#define ElemType int
//队列的最大空间
#define MAXSIZE 8
//其中一个空间不存放数据
///用来判断空 满

//队列的管理结构
typedef struct Queue
{


	ElemType* base; //指向队列空间的基址
	int       front; //头指针
	int       rear; //尾指针
}Queue;
