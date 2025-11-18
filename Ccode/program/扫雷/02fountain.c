#include "02game.h"

void menu()
{
	printf("*****	1.开始扫雷	******\n");
	printf("*****	0.退出扫雷	******\n");
}
//???

void menu_chose()
{
	printf("*****	0,翻开格子		******\n");
	printf("*****	1,插旗			******\n");
	printf("*****	2,继续游戏 	    ******\n");
}
//chaqi???

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
//生成空白地图,填充初始化字符

void make_boom(char arr[row_y][row_x])
{
	for (int i = 0; i < TheMaxNumber_boom; i++)
	{
		int makeboom_row_x = rand() % 100;
		int makeboom_row_y = rand() % 100;
		//取随机数,生成雷
		//只有在地图范围内 生成雷
		if (makeboom_row_x >= row_x || makeboom_row_y >= row_y)
		{
			i--;
			//坐标超出地图,i-1,重新计算随机数
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
	for (int i = 0; i < row_y; i++)//横坐标
	{
		for (int j = 0; j < row_x; j++)//纵坐标
		{
			if (arr[i][j] != var01)//不是 雷
			{
				char count = '0';
				//设置计数器
				for (int I = i - 1; I <= i + 1; I++)
				{
					for (int J = j - 1; J <= j + 1; J++)
					{
						if (I == -1 || J == -1 || arr[I][J] != var01)
						{
							continue;
							//九个格子超出地图,跳出本次计算雷的个数
						}
						else if (arr[I][J] == var01)
						{
							count++;
						}
					}
				}
				//以 (i , j) 为坐标 计算周围 九个格子 雷 的个数
				if ( count != '0')
				{
					arr[i][j] = count;

				}
				//将 计算出的 雷的个数 赋值给(i , j)
				//printf("arr[%d][%d] = %c\n\n",i,j,arr[i][j]);
				count = '0';
				//重置计数器
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
	//打印第一行的数字
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
	//打印 地图格子
	for (int i = 0; i < row_y; i++)
	{
		//打印 上 ---
		for (int j = 0; j < row_x; j++)
		{
			printf(" ---");
		}
		printf("\n");
		//调整对齐
		if (i >= 9)
		{
			printf("%d ", i + 1);
		}
		else
		{
			printf("%d  ",i+1);
		}
		//打印最左边 |
		printf("|");
		//打印数字,雷
		for (int j = 0; j < row_x; j++)
		{
			printf(" %c ", arr[i][j]);
			//打印里面 |
			printf("|");
		}
		printf("\n   ");
	}
	//打印 下 ---
	for (int i = 0; i < row_x; i++)
	{
		printf(" ---");
	}
	printf("\n");
}
//打印地图

void open_whirt(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var03;
	whirtArr[y][x] = boomArr[y][x];
//在雷图上,先将翻到的 初始化字符 改为 空白 var03
//	如此,当递归翻开格子的时候,就不会进入递归
//然后同步到 空白图
// 
	for (int i = y - 1; i <= y + 1; i++)
//检查周围格子
	{
		for (int j = x - 1; j <= x + 1; j++)
	//遍历该空白格子九宫格
		{
			if (i >= 0 && j >= 0)
		//九宫格不能超出地体边界
			{
				if (boomArr[i][j] == var02)
			//检测到 插旗
				{
					continue;
				}
				else if (boomArr[i][j] == Initvar)
			//检测到 初始化字符
				{
					open_whirt(boomArr, whirtArr, i, j);
				//递归 翻开空白格子
				}
				else if ((boomArr[i][j] != var01) && (boomArr[i][j] != Initvar) && (boomArr[i][j] != var03))
			//检测到 非雷,非插旗,非空白
			//即 检测到数字
				{
					whirtArr[i][j] = boomArr[i][j];
					//将boom图 上的数字 同步到 whirt图上
					continue;
				}
				else//检测到 非雷,非插旗,非空白,非数字
				{
					continue;
				}
			}
			else
			{
				continue;
			//超出地图,直接返回
			}
		}
	}
	return;
}
//遍历翻开 空白格子

int flags(char boomArr[row_y][row_x], char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("请选择坐标:> ");
	scanf_s("%d,%d", &x, &y);
	if ((y - 1 >= 0) && (x - 1 >= 0) && (boomArr[y - 1][x - 1] == var01))
//检测是否超出边界
//检测 插旗 是否插到 雷
	{
		static int count = 0;
		count++;
		//插旗技术]]计数
		print_flag(boomArr, whirtArr, y-1, x-1);
		//插旗
		printf_boom_map(whirtArr);
		//打印空白图
		printf("%d",count);
		//检测计数
		return TheMaxNumber_boom - count;
		//??????????????
	}
//如果没插到雷,返回 -1
//游戏结束
	return -1;
}
//插旗

void print_flag(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var02;
	//将 雷图 上被插到的 雷
	//改为 插旗 字符
	whirtArr[y][x] = boomArr[y][x];
	//同步空白图
	return;
}
//插旗

int open_move(char boomArr[row_y][row_x],char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("请选择坐标:> ");
	scanf_s("%d,%d",&x,&y);
	if ( x <= 0 || y <= 0 )
	{
		//坐标不能超出地图边界
		printf("坐标超出地图边界,重新选择\n");
		return 2;
	}
	else if (boomArr[y - 1][x - 1] == Initvar)
	{
		//boomArr[y - 1][x - 1] = var03;

		//翻到初始化字符,遍历翻开周围空白格子
		open_whirt(boomArr, whirtArr, y - 1, x - 1);
		return 1;
		//返回 1 重新选择
	}
	else if (boomArr[y-1][x-1] != var01)
//翻到数字,插旗
	{
		whirtArr[y-1][x-1] = boomArr[y-1][x-1];
		return 1;
	}
	else
//翻到 雷
	{
		printf("踩雷!!!\n");
		whirtArr[y - 1][x - 1] = boomArr[y - 1][x - 1];
		//同步 雷
		printf_boom_map(whirtArr);
		return 0;
		//返回 0 结束游戏 
	}
}
//翻开棋盘

void game()
{
	char game_map[row_y][row_x] = { 0 };
	char game_whirt_map[row_y][row_y] = { 0 };
	Initialize_map(game_map);
	//生成雷图
	Initialize_map(game_whirt_map);
	//生成空白图
	make_boom(game_map);
	//在雷图上 生成雷
	make_number(game_map);
	//在雷图上 生成数字
	
	printf_boom_map(game_whirt_map);
	//打印空白图

	//printf_boom_map(game_map);
	//打印雷图

	int retnum = 1;
	while(retnum)
	{
		int chose = -1;
		//初始化选择
		menu_chose();
		//打印选择菜单
		printf("请选择 : ");
		scanf_s("%d",&chose);
		switch (chose) 
		{
		case 0:
	//翻开格子
		{
			retnum = open_move(game_map, game_whirt_map);
			//return 2 时
			//重新进行while循环
			//printf_boom_map(game_map);
			printf_boom_map(game_whirt_map);
			printf("--------------------------\n");
			break;
		}
		case 1 :
	//插旗
		{
			printf("????");
			int retnum02 = flags(game_map, game_whirt_map);
			if (retnum02 == -1)
			{
				printf("插到雷了,游戏结束\n");	
				printf_boom_map(game_map);
				return;
			}
			else if (retnum02 == 0) 
			{ 
				printf("恭喜完成!!!\n");
			}
			else{
				printf("还有 %d 个雷\n", retnum02);
				break;
			}
		}
		default: { return; }
		}
		//printf_boom_map(game_map);
	}
}
//????!!!









	







