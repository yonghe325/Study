#include<stdio.h>
//��дһ�����������������ֵ�ĺ���
int Get_max(int x,int y)
{
	return (x > y ? x : y);

}
//дһ�������������α����ĺ���

void Change_int01(int x,int y)
{
	
	int z = 0;
	z = x;
	x = y;
	y = x;
}
//Change_int01ֻ���˲�,û�д�ֵ,Ӧ�øĳ�ȡ��ַ
//x,y��a,b�ǲ�ͬ�ı���

void Change_int02(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	//��򽻻�����
}
//Change_int02�ĳ���ȡ��ַ,�ı������ڵ�ַ��ֵ
	

void menu()
{
	printf_s("***** 0.����      *****\n");
	printf_s("***** 1.ȡ���ֵ  *****\n");

}

int main()
{
	do
	{

		int a = 0;
		int b = 0;
		printf("������a b\n");
		scanf_s("%d %d", &a, &b);
		menu();
		int chose = 0;
		printf("��ѡ��= ");
		scanf_s("%d", &chose);
		
		switch (chose)
		{

			case 1:
			{
				int max = Get_max(a, b);
				printf_s("max= %d\n", max);
				break;

			}
			case 0:
			{
				printf("����ǰa= %d	b= %d\n",a,b);
				Change_int01(a, b);
				//a,b��ʵ��
				//x,y���β�
				//�β���ʵ�ε���ʱ����
				//�β�ռ�ö������ڴ�
				//���βε��޸�,����Ӱ��ʵ��
				printf("Chang_int01 ������a= %d	b= %d\n",a,b);
				
				Change_int02(&a, &b);
				//ָ�봫�ݵ�ַ,����޸�a,b��ֵ
				//ͨ�����ݵ�ַ,�纯���ı�a,b
				printf("Chang_int02 ������a= %d	b= %d\n",a,b);
				break;
			}
			default:
			{
				printf("������");
				break;
			}
	


		}

	} while (1);


	
	return 0;
}