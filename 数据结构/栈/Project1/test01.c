#include "Stack.h"
void TestStack() {
	SK ps;
	InitStack(&ps);
	StackPrint(&ps);

	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	StackPush(&ps, 5);
	StackPush(&ps, 6);
	StackPush(&ps, 7);
	StackPush(&ps, 8);
	StackPush(&ps, 9);
	StackPush(&ps, 10);
	StackPush(&ps, 11);

	StackPrint(&ps);

	StackPop(&ps);

	StackPrint(&ps);

	printf("top = %d\n", StackTop(&ps));
	//printf("top = %d\n", StackTop(&ps));
	//printf("top = %d\n", StackTop(&ps));

	//StackDestory(&ps);

	//StackPrint(&ps);



}

int main() {
	TestStack();
	return 0;
}