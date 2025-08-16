#include "02game.h"

void menu()
{
	printf("*****	1.扫雷	******\n");
	printf("*****	0.退出	******\n");
}
//菜单

void menu_chose()
{
	printf("*****	0,翻格子		******\n");
	printf("*****	1,插旗			******\n");
	printf("*****	2,退出不玩了	******\n");
}
//chaqi菜单

void Initialize_map(char arr[row_y][row_x])
{
	for (int i = 0; i < row_y; i++)
	{
		for (int j = 0; j < row_x; j++)
		{
			arr[i][j] = Initvar;
		}
	}
}
//初始化棋盘

void make_boom(char arr[row_y][row_x])
{
	for (int i = 0; i < TheMaxNumber_boom; i++)
	{
		int makeboom_row_x = rand() % 100;
		int makeboom_row_y = rand() % 100;
		if (makeboom_row_x >= row_x || makeboom_row_y >= row_y)
		{
			i--;
		}
		else
		{
			arr[makeboom_row_y][makeboom_row_x] = var01;
		}
	}
}
//生成boom

void make_number(char arr[row_y][row_x])
{
	for (int i = 0; i < row_y; i++)
	{
		for (int j = 0; j < row_x; j++)
		{
			if (arr[i][j] != var01)
			{
				char count = '0';
				for (int I = i - 1; I <= i + 1; I++)
				{
					for (int J = j - 1; J <= j + 1; J++)
					{
						if (I == -1 || J == -1 || arr[I][J] != var01)
						{
							continue;
						}
						else if (arr[I][J] == var01)
						{
							count++;
						}
					}
				}
				if ( count != '0')
				{
					arr[i][j] = count;

				}
				//printf("arr[%d][%d] = %c\n\n",i,j,arr[i][j]);
				count = '0';
			}
			else
			{
				continue;
			}
		}
	}
}
//生成数字				

void printf_boom_map(char arr[row_y][row_x])
{
	printf("     ");
		for (int i = 0; i < row_x; i++)
		{
			if (i <= 8)
			{
				printf("%d   ", i + 1);
			}
			else
			{
				printf("%d  ", i + 1);
			}
		}
	printf("\n   ");
	//生成第一排数字
	for (int i = 0; i < row_y; i++)
	{
		for (int i = 0; i < row_x; i++)
		{
			printf(" ---");
		}
		printf("\n");
		//生成---
		if (i >= 9)
		{
			printf("%d ", i + 1);
		}
		else
		{
			printf("%d  ",i+1);
		}
		//生成第一列数字
		printf("|");
		//生成 |
		for (int j = 0; j < row_x; j++)
		{
			printf(" %c ", arr[i][j]);
			printf("|");
		}
		printf("\n   ");
		//生成数字,数字后 |
	}
	for (int i = 0; i < row_x; i++)
	{
		printf(" ---");
	}
	printf("\n");
	//生成最后一行---
}
//打印棋盘

void open_whirt(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var03;
	whirtArr[y][x] = boomArr[y][x];
	//现将(x,y)变成已填充
	for (int i = y - 1; i <= y + 1; i++)
	{
		for (int j = x - 1; j <= x + 1; j++)//遍历九宫格
		{
			if (i >= 0 && j >= 0)//排除边界生成的负数坐标,查找九宫格内下一个格子
			{
				if (boomArr[i][j] == var02)//跳过 插旗
				{
					continue;
				}
				if (boomArr[i][j] == Initvar)//如果仍是初始化字符,进入递归
				{
					open_whirt(boomArr, whirtArr, i, j);
				}
				else if ((boomArr[i][j] != var01) && (boomArr[i][j] != Initvar) && (boomArr[i][j] != var03))//排除雷,已填充,初始化字符,
				{
					whirtArr[i][j] = boomArr[i][j];
					//随后将初始化字符填充后的数字边界转移至whirt
					continue;
				}
				else//不是雷,已填充,数字,插旗,查找下一个九宫格内格子
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
	}
	return;
}
//翻开数字,空白

int flags(char boomArr[row_y][row_x], char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("输入插旗坐标:> ");
	scanf_s("%d,%d", &x, &y);
	if ((y - 1 >= 0) && (x - 1 >= 0) && (boomArr[y - 1][x - 1] == var01))
	{
		static int count = 0;
		count++;
		//定义一个静态局部变量存放雷的数量
		print_flag(boomArr, whirtArr, y-1, x-1);
		printf_boom_map(whirtArr);
		printf("%d",count);
		return TheMaxNumber_boom - count;
		//返回现有雷数量
	}
	return -1;
}
//判断是否是雷

void print_flag(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var02;//有雷插旗
	whirtArr[y][x] = boomArr[y][x];//同步插旗
	return;
}
//插旗

int open_move(char boomArr[row_y][row_x],char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("输入坐标:> ");
	scanf_s("%d,%d",&x,&y);
	if ( x <= 0 || y <= 0 )//坐标有0,负数
	{
		printf("坐标错误,重新输入\n");
		return 2;
	}
	else if (boomArr[y - 1][x - 1] == Initvar)//翻到初始化字符,进入函数
	{
		//boomArr[y - 1][x - 1] = var03;
		open_whirt(boomArr, whirtArr, y - 1, x - 1);
		return 1;
	}
	else if (boomArr[y-1][x-1] != var01)//翻到数字,直接同步数字
	{
		whirtArr[y-1][x-1] = boomArr[y-1][x-1];
		return 1;
	}
	else//翻到雷
	{
		printf("雷!!!\n");
		whirtArr[y - 1][x - 1] = boomArr[y - 1][x - 1];//同步 雷
		printf_boom_map(whirtArr);
		return 0;
	}
}
//打开格子

void game()
{
	char game_map[row_y][row_x] = { 0 };
	char game_whirt_map[row_y][row_y] = { 0 };
	Initialize_map(game_map);
	Initialize_map(game_whirt_map);
	//初始化两个棋盘
	//boom用来存放雷,数字
	//whirt用来同步boom数据,实现翻格子的操作
	make_boom(game_map);
	make_number(game_map);
	//在boom棋盘上生成数字,雷
	
	printf_boom_map(game_whirt_map);
	printf_boom_map(game_map);
	//打印初始的whirt棋盘

	int retnum = 1;
	while(retnum)
	{
		int chose = -1;
		menu_chose();
		printf("选择操作");
		scanf_s("%d",&chose);
		switch (chose) 
		{
		case 0:
		{
			retnum = open_move(game_map, game_whirt_map);
			//printf_boom_map(game_map);
			//是否打印boom
			printf_boom_map(game_whirt_map);
			printf("--------------------------\n");
			break;
		}
		case 1 :
		{
			printf("插旗");
			int retnum02 = flags(game_map, game_whirt_map);
			if (retnum02 == -1)
			{
				printf("插错了,直接炸\n");	
				return;
			}
			else if (retnum02 == 0) 
			{ 
				printf("完成!!!\n");
			}
			else{printf("插对了,还有%d雷\n", retnum02);		break;}
		}
		default: { return; }
		}
		printf_boom_map(game_map);
	}
}
//启动!!!









	







