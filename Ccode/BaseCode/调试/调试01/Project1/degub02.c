#include<stdio.h>
void fn01()
{
	int a = 0;
	int arr[10] = { 10 };
	//定义

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//赋值
		for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	//打印
	return 0;
}
int ADD(int a,int b)
{
	return a + b;

}
int main02()
{
	int a = 10;
	int b = 5;
	int sum = ADD(a, b);
	printf("%d\n", sum);
	fn01();
	return 0;
}