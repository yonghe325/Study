#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	//%p为取地址格式符,将以地址的格式输出
	int* p = &a;
	//int* 代表int类型的指针变量
	//char* 代表char类型的指针变量
	//p就是指针变量,int*是他的类型
	//*说明p是指针变量,int说明指向的对象是int类型 

	*p = 20;
	//通过p中存放的地址,找到p指向的对象
	//a就被赋值20
	
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch );

	printf("sizeof(short*)= %zu\n", sizeof(short*));//8
	printf("sizeof(char*)= %zu\n", sizeof(char*));//8
	printf("sizeof(int*)= %zu\n", sizeof(int*));//8
	printf("sizeof(float*)= %zu\n", sizeof(float*));//8
	printf("sizeof(double*)= %zu\n", sizeof(double*));//8

	int* p1, p2, p3;//只有p1是指针变量,p2,p3是int类型变量
	int* p4, * p5, * p6;//此时p4,p5,p6都为指针变量

	
	return 0;
}