#include"Linklist.h"

void LKPrintf(LK* phead) {
	LK* cur = phead;
	//通过 移动变换]]]指针
	while (cur !=NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
		//指针迭代查找下一个节点
	}
	printf("NULL\n");
}
LK* LKPush(int x) {

	LK* newnode = (LK*)malloc(sizeof(LK));
	if (newnode == NULL)
	{
		perror(errno);
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = x;
	//将数据域设为需要插入的数据
	return newnode;
}
//当头插尾插时
//调用该函数,直接生成一个新的节点

void LKPushBack(LK** pphead,int x ) {
	LK* newnode = LKPush(x);
	//调用插入函数
	if (*pphead == NULL)
	{
		//如果phead为空,说明此时phead指向的节点为头结点
		//未初始化
		//就不找尾节点
		*pphead = newnode;
	}
	else
	{
		LK* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
//尾插

void LKPushFront(LK** pphead, int x) {
	LK* newnode = LKPush(x);
	if (*pphead == NULL)
	{
		//如果phead为空,说明此时phead指向的节点为头结点
		//未初始化
		//就不找尾节点
		*pphead = newnode;
	}
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
		//将头结点换为新节点
	}

}
//头插

void LKPopBack(LK** pphead) {
	LK* tail = *pphead;
	while (tail->next->next != NULL) {
		tail = tail->next;
	}
	//找到倒数第二个节点尾节点
	free(tail->next);
	//释放尾节点
	tail->next = NULL;
	//将倒数第二个节点的next的地址设为NULL
}
//尾删

void LKPopFront(LK** pphead) {
	LK* head = *pphead;
	*pphead = head->next ;
	free(head);
}
//头删

void LKRever01(LK** pphead) {
	if (*pphead != NULL && (*pphead)->next!=NULL)
	//判断为非空链表 和 单节点链表
	{
		LK* left = NULL;
		LK* tail = *pphead;
		LK* right = tail->next;
		while (right != NULL) {
			tail->next = left;
			left = tail;
			tail = right;
			right = tail->next;
		}
		tail->next = left;
		*pphead = tail;
	}
}
//三指针翻转链表

LK* LKRever02(LK** pphead) {
	//最终返回新的头结点
	static int fl = 0;
	//fl为计数器,标识递归已到最后一层
	if (*pphead == NULL || (*pphead)->next==NULL) {
		return *pphead;
	}
	else
	{
		fl++;
		LK* New_head = LKRever02(&((*pphead)->next));
		//查找最初尾节点
		(*pphead)->next->next = (*pphead);
		(*pphead)->next = NULL;

		//fl--;
		//当fl==0时,标识递归已到最后一层
		//将二级指针指向的一级指针的地址
		//由原来的头节点,换成新的头节点

		if (--fl == 0)
		{
			*pphead = New_head;
			return 0;
		}
		return New_head;
	}
}
//迭代法翻转列表
int LKRever03(LK** pphead) {
	LK* New_head = NULL;
	//新链表头结点
	LK* temp = NULL;
	//中介指针
	if ((*pphead) == NULL||(*pphead)->next == NULL)
	{
		return 0;
	}
	while (*pphead!=NULL) {
		temp = (*pphead)->next;

		(*pphead)->next = New_head;
		New_head = (*pphead);
		//头插法核心

		*pphead = temp;
	}
	*pphead = New_head;
}
//头插逆置法
//本质是头插

int LKRever04(LK** pphead) {
	LK* left = NULL;
	LK* right = NULL;


	if ((*pphead) == NULL || (*pphead)->next == NULL)
	{
		return;
	}

	left = *pphead;
	right = (*pphead)->next;



	while ( right!=NULL ) {
		left->next = right->next;
		right->next = (*pphead);
		*pphead = right;
		right = left->next;
	}
	return 0;

}
//双指针就地头插逆置法
//与头插逆置法类似
//但不新建链表
