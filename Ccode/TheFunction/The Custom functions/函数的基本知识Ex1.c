#include<stdio.h>
#include<math.h>
//�������ļ��ַ�ʽ
void menu()
{
	printf_s("0.���ҷ�Χ\n");
	printf_s("1.�ж�һ�����Ƿ�Ϊ����\n");
	printf_s("2.�ж��Ƿ�Ϊ����\n");
	printf_s("3.�˳�\n");

}

void Prime_number_test01 (int M ,int N )
//MΪ��ʼֵ,NΪ����ֵ
//test01:��2~M����,�����������M-1ʱȡģ��ΪΪ0,��MΪ����
{
	for (; M <= N ; M++)
	{
		for (int i = 2; i < M; i++)
		{
			if (M % i == 0)//==0��������
				//�ж�M�Ƿ�Ϊ����
			{
				break;
			}
			else if (i == M - 1)
			{
				printf("%d  ", M);

				//printf("M%i=%d\n", M % i);
				//printf("M/i=%d\n", M / i);
			}
		}
	}
}
void Prime_number_test02(int M, int N)
//��M��ƽ��,����һ����С��M�Ŀ�ƽ��,������M,��M��������
//�����test01,test02��С�˱�����Χ
{
	for (; M <= N; M++)
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(M); i++)
		{
			//printf("sqrt(M)= %lf\n", sqrt(M));
			if (M % i == 0)//==0��������
			//�ж�M�Ƿ�Ϊ����
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d  ", M);
		}
			
	}
}
void Prime_number_test03(int M, int N)
//��test02���Ż�
//ż��������������
//������MΪż��,��M+1��ʼ����,ÿ��+2
//������MΪ����,��M��ʼ����,ÿ��+2
{
	if ( M % 2 == 0)
	{
		M++;
	}
	for (; M <= N; M+=2)
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(M); i++)
		{
			//printf("sqrt(M)= %lf\n", sqrt(M));
			if (M % i == 0)//==0��������
				//�ж�M�Ƿ�Ϊ����
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d  ", M);
		}

	}
	printf("\n");
}
void Leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
	{
		printf("%d��������\n",year);
	}
	else
	{
		printf("%d�겻������\n",year);
	}

}
void Prime_number_test00(int M)
{
	for (int i = 2; i <= sqrt(M); i++)
	{
	//printf("sqrt(M)= %lf\n", sqrt(M));
		if (M % i == 0)//==0��������
			//�ж�M�Ƿ�Ϊ����
		{
			printf("M��������\n");
			break;
		}
	}
	printf("M������\n");
}
//�����Ѵ�ӡ���жϷֿ�

	
	
		

	



int main()
{
	int chose ;
	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf_s("%d", &chose);

		switch (chose)
		{
			case 0:
			{
				int M = 0;
				int N = 0;
				printf("������ʼֵM= ");
				scanf_s("%d", &M);
				printf("�������ֵN(M��ȡ��N)= ");
				scanf_s("%d", &N);

				//Prime_number_test01(M,N);
				//printf("\n");
				//Prime_number_test02(M,N);
				//printf("\n");
				Prime_number_test03(M,N);
			break;
			}
			case 1:
			{
				int M = 0;
				printf("�����ж���= ");
				scanf_s("%d", &M);
			break;
			}
			case 2:
			{
				int year = 0;
				printf("�������:> ");
				scanf_s("%d", &year);
				Leap_year(year);
			break;
			}
			case 3: { break; }
			default:
					printf("����ѡ��\n");
		}
	} while (chose != 3);
	printf("�ټ�");
	return 0;
}

				
				

				



				
				






	
