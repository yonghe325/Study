
#include "game.h"

void menu()
{
	printf("*****	1.三子棋	******\n");
	printf("*****	0.退出		******\n");
}
//菜单

void Initialize_map(char arr[the_y][the_x], int y, int x)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//初始化棋盘


void printf_map(char arr[the_y][the_x] , int y, int x)
{
	for (int i = 0;i < the_y; i++)
	{
		for (int i = 0;i < the_x; i++)
		{
			printf(" ---");
		}
		printf("\n");
		
		printf("|");
		
		for (int j = 0;j < the_x; j++)
		{
			printf(" %c ",arr[i][j]);
			printf("|");

		}
		printf("\n");
		
		//printf("\n");
	
	}
	for (int i = 0;i < the_x; i++)
	{
		printf(" ---");
	}
	printf("\n");
}
//打印棋盘数据

int playermove(char arr[the_y][the_x], int y, int x)
{
	do 
	{
		printf("1 <= 横坐标 <= %d\n",x);
		printf("1 <= 纵坐标 <= %d\n",y);
		int move_x = 0;
		int move_y = 0;
		printf("玩家下棋,请输入坐标");
		scanf_s("%d,%d", &move_x, &move_y);

		if (  (move_x <= x ) && ( move_x >= 1 ) && (move_y <= y) && (move_y >= 1))
		{
			if ((arr[move_y - 1][move_x - 1] != '#') && (arr[move_y-1][move_x-1] != '*'))
			{
				arr[move_y-1][move_x-1] = '#';
				break;

			}
			printf("这里已经下过了,重新选择\n");
			continue;
		}
		printf("范围错误,重新输入\n");
		//判断能否落子

	} while (1);
	
}


int computermove(char arr[the_y][the_x], int y, int x)
{
	do
	{
		int move_x = rand() % x;
		int move_y = rand() % y;
		if ((arr[move_y][move_x] != '#') && (arr[move_y][move_x] != '*'))
		{
			arr[move_y][move_x] = '*';
			break;
		}
	} while (1);
	return 0;
}


int Judge(char arr[the_y][the_x], int y, int x)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if ((arr[i][j] == ' '))
			{
				return 3;

			}
		}
	}
	//判断是否平局
	//能继续返回3
	
	int win_sum_player = ((int)'#') * play_num;
	int win_sum_computer = ((int)'*') * play_num;
	//int win_sum_x01 = ((int)'#')* play_num;
	//int win_sum_x02 = ((int)'*')* play_num;
	int sum_y = 0;
	int sum_x = 0;
	int sum_xy = 0;
	for (int i = 0; i < the_y; i++)
	{
		for (int j = 0; j < the_x; j++)
		{
			sum_y += arr[i][j];
		}
		if ((sum_y == win_sum_player) || (sum_y == win_sum_computer))
		{
			return 1;
		}
		sum_y = 0;
	}
	//判断行向

	for (int i = 0; i < the_y; i++)
	{
		for (int j = 0; j < the_x; j++)
		{
			sum_x += arr[j][i];
		}
		if ((sum_x == win_sum_player) || (sum_x == win_sum_computer))
		{
			return 1;
		}
		sum_x = 0;
	}
	//判断竖向

	for (int i = 0; i < play_num; i++)
	{
		sum_xy += arr[i][i];
	}
	if ((sum_xy == win_sum_player) || (sum_xy == win_sum_computer))
	{
		return 1;
	}
	//判断斜向

	return 2;
	//平局返回2

	
}

int win(char arr[the_y][the_x], int y, int x)
{
	int win_sum_player = ((int)'#')*play_num;
	int win_sum_computer = ((int)'*')* play_num;
	//int win_sum_x01 = ((int)'#')* play_num;
	//int win_sum_x02 = ((int)'*')* play_num;
	int sum_y = 0;
	int sum_x = 0;
	int sum_xy = 0;
	for (int i = 0; i < the_y; i++)
	{
		for (int j = 0; j < the_x; j++)
		{
			sum_y += arr[i][j];
		}
		if ((sum_y == win_sum_player )||(sum_y == win_sum_computer))
		{
			return 1;
		}
	}
	//判断行

	for (int i = 0; i < the_y; i++)
	{
		for (int j = 0; j < the_x; j++)
		{
			sum_x += arr[j][i];
		}
		if ((sum_x == win_sum_player) || (sum_x == win_sum_computer))
		{
			return 1;
		}
	}
	//判断列

	for (size_t i = 0; i < play_num; i++)
	{
		sum_xy += arr[i][i];
	}
	if ((sum_xy == win_sum_player) || (sum_xy == win_sum_computer))
	{
		return 1;
	}
		
		



}














		





	
	
	
 


