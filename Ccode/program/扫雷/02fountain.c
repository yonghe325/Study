#include "02game.h"

void menu()
{
	printf("*****	1.ɨ��	******\n");
	printf("*****	0.�˳�	******\n");
}
//�˵�

void menu_chose()
{
	printf("*****	0,������		******\n");
	printf("*****	1,����			******\n");
	printf("*****	2,�˳�������	******\n");
}
//chaqi�˵�

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
//��ʼ������

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
//����boom

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
//��������				

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
	//���ɵ�һ������
	for (int i = 0; i < row_y; i++)
	{
		for (int i = 0; i < row_x; i++)
		{
			printf(" ---");
		}
		printf("\n");
		//����---
		if (i >= 9)
		{
			printf("%d ", i + 1);
		}
		else
		{
			printf("%d  ",i+1);
		}
		//���ɵ�һ������
		printf("|");
		//���� |
		for (int j = 0; j < row_x; j++)
		{
			printf(" %c ", arr[i][j]);
			printf("|");
		}
		printf("\n   ");
		//��������,���ֺ� |
	}
	for (int i = 0; i < row_x; i++)
	{
		printf(" ---");
	}
	printf("\n");
	//�������һ��---
}
//��ӡ����

void open_whirt(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var03;
	whirtArr[y][x] = boomArr[y][x];
	//�ֽ�(x,y)��������
	for (int i = y - 1; i <= y + 1; i++)
	{
		for (int j = x - 1; j <= x + 1; j++)//�����Ź���
		{
			if (i >= 0 && j >= 0)//�ų��߽����ɵĸ�������,���ҾŹ�������һ������
			{
				if (boomArr[i][j] == var02)//���� ����
				{
					continue;
				}
				if (boomArr[i][j] == Initvar)//������ǳ�ʼ���ַ�,����ݹ�
				{
					open_whirt(boomArr, whirtArr, i, j);
				}
				else if ((boomArr[i][j] != var01) && (boomArr[i][j] != Initvar) && (boomArr[i][j] != var03))//�ų���,�����,��ʼ���ַ�,
				{
					whirtArr[i][j] = boomArr[i][j];
					//��󽫳�ʼ���ַ���������ֱ߽�ת����whirt
					continue;
				}
				else//������,�����,����,����,������һ���Ź����ڸ���
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
//��������,�հ�

int flags(char boomArr[row_y][row_x], char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("�����������:> ");
	scanf_s("%d,%d", &x, &y);
	if ((y - 1 >= 0) && (x - 1 >= 0) && (boomArr[y - 1][x - 1] == var01))
	{
		static int count = 0;
		count++;
		//����һ����̬�ֲ���������׵�����
		print_flag(boomArr, whirtArr, y-1, x-1);
		printf_boom_map(whirtArr);
		printf("%d",count);
		return TheMaxNumber_boom - count;
		//��������������
	}
	return -1;
}
//�ж��Ƿ�����

void print_flag(char boomArr[row_y][row_x], char whirtArr[row_y][row_x],int y,int x)
{
	boomArr[y][x] = var02;//���ײ���
	whirtArr[y][x] = boomArr[y][x];//ͬ������
	return;
}
//����

int open_move(char boomArr[row_y][row_x],char whirtArr[row_y][row_x])
{
	int x = 0;
	int y = 0;
	printf("��������:> ");
	scanf_s("%d,%d",&x,&y);
	if ( x <= 0 || y <= 0 )//������0,����
	{
		printf("�������,��������\n");
		return 2;
	}
	else if (boomArr[y - 1][x - 1] == Initvar)//������ʼ���ַ�,���뺯��
	{
		//boomArr[y - 1][x - 1] = var03;
		open_whirt(boomArr, whirtArr, y - 1, x - 1);
		return 1;
	}
	else if (boomArr[y-1][x-1] != var01)//��������,ֱ��ͬ������
	{
		whirtArr[y-1][x-1] = boomArr[y-1][x-1];
		return 1;
	}
	else//������
	{
		printf("��!!!\n");
		whirtArr[y - 1][x - 1] = boomArr[y - 1][x - 1];//ͬ�� ��
		printf_boom_map(whirtArr);
		return 0;
	}
}
//�򿪸���

void game()
{
	char game_map[row_y][row_x] = { 0 };
	char game_whirt_map[row_y][row_y] = { 0 };
	Initialize_map(game_map);
	Initialize_map(game_whirt_map);
	//��ʼ����������
	//boom���������,����
	//whirt����ͬ��boom����,ʵ�ַ����ӵĲ���
	make_boom(game_map);
	make_number(game_map);
	//��boom��������������,��
	
	printf_boom_map(game_whirt_map);
	printf_boom_map(game_map);
	//��ӡ��ʼ��whirt����

	int retnum = 1;
	while(retnum)
	{
		int chose = -1;
		menu_chose();
		printf("ѡ�����");
		scanf_s("%d",&chose);
		switch (chose) 
		{
		case 0:
		{
			retnum = open_move(game_map, game_whirt_map);
			//printf_boom_map(game_map);
			//�Ƿ��ӡboom
			printf_boom_map(game_whirt_map);
			printf("--------------------------\n");
			break;
		}
		case 1 :
		{
			printf("����");
			int retnum02 = flags(game_map, game_whirt_map);
			if (retnum02 == -1)
			{
				printf("�����,ֱ��ը\n");	
				return;
			}
			else if (retnum02 == 0) 
			{ 
				printf("���!!!\n");
			}
			else{printf("�����,����%d��\n", retnum02);		break;}
		}
		default: { return; }
		}
		printf_boom_map(game_map);
	}
}
//����!!!









	







