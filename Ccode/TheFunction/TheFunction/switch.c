#include <stdio.h>
//����һ����,�ж����ܼ�
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("week");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	default:
		printf("�����");
	}
	return 0;






}