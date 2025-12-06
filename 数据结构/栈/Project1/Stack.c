#include"Stack.h"
void InitStack(SK* ps) {
	ps->a = (int*)calloc(5,sizeof(int));
	ps->top = 0;
	//初始化栈顶的下标为0
	ps->capaccity = 5;
	//初始化栈的总容量为5
}
//初始化栈
SK* StackExp(SK* ps) {
	int* new = (int*)realloc(ps->a,sizeof(int) * (ps->capaccity + 5));
	//每次扩容5个位置
	if (new !=NULL)
	{
		ps->capaccity += 5;
		ps->a = new;
	}
	else
	{
		perror(errno);
		exit(-1);
	}
}
//扩容栈

void StackDestory(SK* ps) {
	free(ps->a);
	ps->capaccity = 0;
	ps->top = 0;
}
//销毁栈

void StackPrint(SK* ps) {
	printf("bottom->");
	for (size_t i = 0; i < ps->top; i++)
	{	
		printf("%d->", ps->a[i]);
	}
	printf("top\n");
	printf("top = %d\n", ps->top);
	printf("capaccity = %d\n\n", ps->capaccity);
}
//打印栈

int StackTop(SK* ps) {
	return ps->a[ps->top-1];
}
//取出栈顶数据,不出栈

int StackSize(SK* ps) {
	return (ps->top - 1);
}
//统计站内数据的个数

bool StackEmpty(SK* ps) {
	if (!ps->top)
	{
		return false;
	}
	return true;
}
//判断栈是否为空

void StackPush(SK* ps, int x) {
	if (ps->top == ps->capaccity) {
		ps = StackExp(ps);
	}
	//先检测是否扩容
	ps->a[ps->top] = x;
	ps->top++;
}
//入栈

void StackPop(SK* ps) {
	ps->top--;
	//return ps->a[ps->top+1];
}
//出栈