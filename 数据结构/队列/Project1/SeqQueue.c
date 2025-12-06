#include"SeqQueue.h"

//队列初始化
void InitQueue(Queue* Q)
{
	//为队列分配存储空间
	Q->base = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
	assert(Q->base != NULL);
	//初始时队列为空，头指针和尾指针都指向0位置
	Q->front = Q->rear = 0;
}

//入队操作
void EnQueue(Queue* Q, ElemType x)
{
	//判断循环队列是否已满
	if (((Q->rear + 1) % MAXSIZE) == Q->front)
		return;
//通过取模操作,实现front 与 rear 的循环
	//队列未满，将数据入队
	Q->base[Q->rear] = x;
	//更改尾指针的指向
	Q->rear = (Q->rear + 1) % MAXSIZE;
}

//打印循环队列中的数据
void ShowQueue(Queue* Q)
{
	//遍历循环队列中的元素，并将数据打印
	for (int i = Q->front; i != Q->rear;)
	{
		printf("%d ", Q->base[i]);
		//此操作是为了实现循环遍历
		i = (i + 1) % MAXSIZE;
	}
	printf("\n");
}

//出队操作
void DeQueue(Queue* Q)
{
	//判断循环队列是否为空
//初始front 与 rear相同,都是0
//存放一个数据后 二者必然不可能再相遇
//除非循环出队,直到rear 与 front 在相等
	if (Q->front == Q->rear)
		return;
	//如果非空，实现可循环出队
	Q->front = (Q->front + 1) % MAXSIZE;
}

//获取队头元素
void GetHdad(Queue* Q, ElemType* v)
{
	//判断循环队列是否为空
	if (Q->front == Q->rear)
		return;
	//如果队列不为空，获取队头元素
	*v = Q->base[Q->front];
}

//获取队列长度（元素个数）
int Length(Queue* Q)
{
	//计算尾指针位置与头指针位置的差距
	int len = Q->rear - Q->front;
	//如果为正数，那么len就是队列的长度；如果为负数，那么MAX
}