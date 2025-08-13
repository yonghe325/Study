
#include "game.h"
//头文件可以嵌套包含




void game()
{
	char game_map[the_y][the_x] = {0};
	//用二维数组存储数据
	Initialize_map(game_map, 3,3 );
	//初始化棋盘
	printf_map(game_map,3 ,3 );
	//打印棋盘数据
	
	int retnum1 = 3;
	int retnum2 = 3;

	while (1)
	{
		printf("----------------------------------------\n");
		playermove(game_map,3,3);
		printf_map(game_map, the_y, the_x);
		//玩家下棋
		
		retnum1 = Judge(game_map, 3, 3);
		printf("retunm1 = %d\n", retnum1);
		if (retnum1 == 2)
		{
			printf("平局\n");
			break;
		}
		else if (retnum1 == 1)
		{
			printf("玩家胜\n");
			break;

		}

		
		printf("----------------------------------------\n");
		
		

		
		printf("电脑下棋\n");
		computermove(game_map,3,3);
		printf_map(game_map, the_y, the_x);
		//电脑下棋
		

		retnum2 = Judge(game_map, 3, 3);
		printf("retunm2 = %d\n", retnum2);
		if ( retnum2 == 0 )
		{
			printf("平局\n");
			break;

		}
		else if (retnum2 == 1)
		{
			printf("玩家胜\n");
			break;

		}
	}
}
		

		

		

		
		






	










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
			printf("三子棋\n");
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
