#include "02game.h"

int main()
{
	int intput = 0;
	srand((unsigned)time(NULL));
	//生成随机刻
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("开始扫雷\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误重新输入\n");
			break;
		}
	} while (intput);
	return 0;
}









