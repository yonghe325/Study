
#include "game.h"
//ͷ�ļ�����Ƕ�װ���




void game()
{
	char game_map[the_y][the_x] = {0};
	//�ö�ά����洢����
	Initialize_map(game_map, 3,3 );
	//��ʼ������
	printf_map(game_map,3 ,3 );
	//��ӡ��������
	
	int retnum1 = 3;
	int retnum2 = 3;

	while (1)
	{
		printf("----------------------------------------\n");
		playermove(game_map,3,3);
		printf_map(game_map, the_y, the_x);
		//�������
		
		retnum1 = Judge(game_map, 3, 3);
		printf("retunm1 = %d\n", retnum1);
		if (retnum1 == 2)
		{
			printf("ƽ��\n");
			break;
		}
		else if (retnum1 == 1)
		{
			printf("���ʤ\n");
			break;

		}

		
		printf("----------------------------------------\n");
		
		

		
		printf("��������\n");
		computermove(game_map,3,3);
		printf_map(game_map, the_y, the_x);
		//��������
		

		retnum2 = Judge(game_map, 3, 3);
		printf("retunm2 = %d\n", retnum2);
		if ( retnum2 == 0 )
		{
			printf("ƽ��\n");
			break;

		}
		else if (retnum2 == 1)
		{
			printf("���ʤ\n");
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
		printf("��ѡ��");
		scanf_s("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("������\n");
			game();

			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("����ѡ��\n");
			break;
		}
	} while (intput);










	return 0;
}
