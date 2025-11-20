#include"Linklist.h"

void LKPrintf(LK* phead) {
	LK* cur = phead;
	//通过 移动变换]]]指针
	while (cur !=NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
		//指针迭代查找下一个节点
	}
}
void LKPushBack(LK* phead,int x ) {

	LK* newnode = (LK*)malloc(sizeof(LK));
	if (newnode == NULL)
	{
		perror(errno);
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = x;
	//将数据域设为需要插入的数据

	if (phead == NULL)
	{
		//如果phead为空,说明此时phead指向的节点为头结点
		//未初始化
		//就不找尾节点
		phead = newnode;
	}

	LK* tail = phead;
	//二级指针实现查找
	
	//为节点的标志是next为NULL
	while (tail->next != NULL) {
		tail = tail->next;
	}
	//找到尾节点
	//此时尾节点next为NULL
	//通过malloc开辟新节点



	//将尾节点的指针域设为空指针
	
}
