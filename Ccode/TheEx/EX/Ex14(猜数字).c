//��������һ�������(1~100),������
// �жϲ´��С
//������
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
	//1.���������
	//���ɹ̶�˳�������
	//rand(0~32767)
	//��srand�������������
	int range_number = rand() % 100 + 1;
	//%100�õ�0~99
	//+1�õ�1~100
	//printf("range_number= %d\n", range_number);

	//2.������
	int guess_number = 0;
	int num = 0;
	do
	{
		printf_s("�²���= \n");
		scanf_s("%d", &guess_number);

		if (guess_number < range_number)
		{
			printf_s("��С��\n");
		}
		else if (guess_number > range_number)
		{
			printf_s("�´���\n");
		}
		else
		{
			printf_s("�¶���\n");
		}
		num++;
	} while (guess_number != range_number);
	printf_s("������%d��\n", num);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand�������������,
	//��������,rand���ɵ������˳�򲻱�
	//����ʱ�������srand�Բ��ϱ仯�����ֵ
	//time�������ص�ǰʱ���
	//time�����һ��ָ�����,�������һ����ָ�����NULL
	//srand�����һ��unsigned int����,����ǿ��ת��
	//!һ������ֻ������һ��,����ÿ�����в�������ȼ���

	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}