#include "02game.h"

int main()
{
	int intput = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("扫雷\n");
			game();

			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("重新选择\n");
			break;
		}
	} while (intput);
	return 0;
}









