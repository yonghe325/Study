#include <stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a= %d\t", a);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//		//调用test函数
//		//变量a只在test函数内存活
//	}
//	return 0;
//}
void test()
{
	static int b = 1;
	//将b存入静态区
	b++;
	printf("b= %d\t", b);
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		test();
		//调用test2函数
		//每次使用test函数,保留其在暂存区变量的值
		//供下一次使用,除了作用域不销毁
		//本质上Static修饰局部变量的时候,改变了其在内存中的存储位置(地址)
		
	}
	return 0;
}