#include "02game.h"

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
			printf("ɨ��\n");
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









