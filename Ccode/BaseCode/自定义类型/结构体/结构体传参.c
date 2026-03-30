#include<stdio.h>
struct S
{
	int data[100];
	int num;
};
void print1(struct S ss) {
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("\nnum = %d\n", ss.num);
}
//传结构体类型
void print2(struct S* ss) {
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", ss->data[i]);
	}
	printf("\nnum = %d\n", ss->num);
}
//传结构体指针


int main() {
	struct S s = { {1,2,3,4,5,6,7,8,9},100 };
	print1(s);
	print2(&s);
	return 0;
}