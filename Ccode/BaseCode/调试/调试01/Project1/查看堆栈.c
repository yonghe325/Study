#include<stdio.h>
int test01()
{
	test02();
}

int test02() 
{
	test03();
}

int test03() 
{
	test04();
}

int test04()
{
	printf("1234");
}
int main03()
{
	test01();
	return 0;
}