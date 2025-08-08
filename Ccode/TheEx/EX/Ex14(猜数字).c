//电脑生成一个随机数(1~100),猜数字
// 判断猜大猜小
//猜数字
#include <stdio.h>
#include <time.h>//time
#include <stdlib.h>//srand

void menu()
{
	printf("*****************************************\n");
	printf("************     1.paly       ***********\n");
	printf("************     0.exit       ***********\n");
	printf("*****************************************\n");
}
void game()
{
	//1.生成随机数
	//生成固定顺序随机数
	//rand(0~32767)
	//用srand设置随机数参数
	int range_number = rand() % 100 + 1;
	//%100得到0~99
	//+1得到1~100
	//printf("range_number= %d\n", range_number);

	//2.猜数字
	int guess_number = 0;
	int num = 0;
	do
	{
		printf_s("猜猜数= \n");
		scanf_s("%d", &guess_number);

		if (guess_number < range_number)
		{
			printf_s("猜小了\n");
		}
		else if (guess_number > range_number)
		{
			printf_s("猜大了\n");
		}
		else
		{
			printf_s("猜对了\n");
		}
		num++;
	} while (guess_number != range_number);
	printf_s("共猜了%d次\n", num);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand设置随机数参数,
	//参数不变,rand生成的随机数顺序不变
	//运用时间戳给予srand以不断变化的随机值
	//time函数返回当前时间戳
	//time需接受一个指针变量,这里给予一个空指针变量NULL
	//srand需接收一个unsigned int类型,进行强制转换
	//!一个程序只需设置一次,保障每次运行参数不相等即可

	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}