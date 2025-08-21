#include<stdio.h>
int main02() 
{
	//char* pc = NULL;
	//short* ps = NULL;
	//int* pi = NULL;
	//double* pd = NULL;
	//long* pl = NULL;
	////sizeof返回无符号整形,即%zu
	//printf("%zu\n",sizeof(pc));
	//printf("%zu\n",sizeof(ps));
	//printf("%zu\n",sizeof(pi));
	//printf("%zu\n",sizeof(pd));
	//printf("%zu\n",sizeof(pl));

	//int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;

	//a = 0x11223344;
	//char* pac = &a;
	////从int* 到 char* 类型不兼容
	//*pac = 0;
	////char* 只会改变一个字节

	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("pa = %p\n",pa);
	printf("pa+1 = %p\n",pa+1);
	printf("pc = %p\n",pc);
	printf("pc+1 = %p\n",pc+1);


	return 0;
}