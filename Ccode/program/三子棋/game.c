
#include "game.h"

void menu()
{
	printf("*****	1.������	******\n");
	printf("*****	0.�˳�		******\n");
}
//�˵�

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
//��ʼ������


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
//��ӡ��������

int playermove(char arr[the_y][the_x], int y, int x)
{
	do 
	{
		printf("1 <= ������ <= %d\n",x);
		printf("1 <= ������ <= %d\n",y);
		int move_x = 0;
		int move_y = 0;
		printf("�������,����������");
		scanf_s("%d,%d", &move_x, &move_y);

		if (  (move_x <= x ) && ( move_x >= 1 ) && (move_y <= y) && (move_y >= 1))
		{
			if ((arr[move_y - 1][move_x - 1] != '#') && (arr[move_y-1][move_x-1] != '*'))
			{
				arr[move_y-1][move_x-1] = '#';
				break;

			}
			printf("�����Ѿ��¹���,����ѡ��\n");
			continue;
		}
		printf("��Χ����,��������\n");
		//�ж��ܷ�����

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
	//�ж��Ƿ�ƽ��
	//�ܼ�������3
	
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
	//�ж�����

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
	//�ж�����

	for (int i = 0; i < play_num; i++)
	{
		sum_xy += arr[i][i];
	}
	if ((sum_xy == win_sum_player) || (sum_xy == win_sum_computer))
	{
		return 1;
	}
	//�ж�б��

	return 2;
	//ƽ�ַ���2

	
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
	//�ж���

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
	//�ж���

	for (size_t i = 0; i < play_num; i++)
	{
		sum_xy += arr[i][i];
	}
	if ((sum_xy == win_sum_player) || (sum_xy == win_sum_computer))
	{
		return 1;
	}
		
		



}














		





	
	
	
 


