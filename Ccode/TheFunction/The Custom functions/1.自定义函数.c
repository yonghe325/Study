#include<stdio.h>
//编写一个求两个整数总最大值的函数
int Get_max(int x,int y)
{
	return (x > y ? x : y);

}
//写一个交换两个整形变量的函数

void Change_int01(int x,int y)
{
	
	int z = 0;
	z = x;
	x = y;
	y = x;
}
//Change_int01只传了参,没有传值,应该改成取地址
//x,y与a,b是不同的变量

void Change_int02(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	//异或交换变量
}
//Change_int02改成了取地址,改变了所在地址的值
	

void menu()
{
	printf_s("***** 0.交换      *****\n");
	printf_s("***** 1.取最大值  *****\n");

}

int main()
{
	do
	{

		int a = 0;
		int b = 0;
		printf("请输入a b\n");
		scanf_s("%d %d", &a, &b);
		menu();
		int chose = 0;
		printf("请选择= ");
		scanf_s("%d", &chose);
		
		switch (chose)
		{

			case 1:
			{
				int max = Get_max(a, b);
				printf_s("max= %d\n", max);
				break;

			}
			case 0:
			{
				printf("交换前a= %d	b= %d\n",a,b);
				Change_int01(a, b);
				//a,b是实参
				//x,y是形参
				//形参是实参的临时拷贝
				//形参占用独立的内存
				//对形参的修改,不会影响实参
				printf("Chang_int01 交换后a= %d	b= %d\n",a,b);
				
				Change_int02(&a, &b);
				//指针传递地址,间接修改a,b的值
				//通过传递地址,跨函数改变a,b
				printf("Chang_int02 交换后a= %d	b= %d\n",a,b);
				break;
			}
			default:
			{
				printf("重新输");
				break;
			}
	


		}

	} while (1);


	
	return 0;
}