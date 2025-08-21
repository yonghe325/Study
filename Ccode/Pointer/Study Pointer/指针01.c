#include<stdio.h>
int main01()
{
	int a = 10;
	//a为int类型,在内存中占4字节
	//a的地址是所在内存中的首地址
	int* pa = &a;
	//pa为a的指针变量,用来存放a的地址
	//通过这个地址,就可以找到a所在的内存单元

	return 0;
}