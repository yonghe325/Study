//����n, 1 <= n <= 30
//�� n ��̨��,ÿ��ֻ���� 1 �׻� 2 ��
//���м����߷�
#include<stdio.h>
void found_number_method(int n)
{
	//��һ�ֽ������
	//ÿ����Ϊһ����Ԫ
	//ÿ����Ԫ��2���߷�
	//��һ��: 1+1
	//�ڶ���: 2

	//�ڶ��ֽ������
	//n���Բ��Ϊ
	//x��1,y��2
	//x+2y = n
	//���ò�շ�ȷ��xy�̶�ʱ���߷�
	//���ÿ���߷����
	int maxnum_2 = n / 2;//����������
	int method_num = 0;

	if ( n % 2 == 0)//nΪż��
	{
		for (int i = 1; i <= maxnum_2 ; i++)
		{
			int num_2 = maxnum_2 - i;//ÿ��2�ĸ���
			int num_1 = n - 2 * num_2;//ÿ��1�ĸ���
			if (num_2 >= num_1)//2Ϊ��շ���λ��ȷ����
			{
				int difference = num_2 - num_1;
				int up_num = 1;
				for (int i = difference; i > 0; i--)
				{
					up_num *= (num_2 - i);
				}
				method_num += (up_num) / (!num_1);
			}
			else
			{
				int up_num = num_2;
				while (up_num >= num_1)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
		}
		return method_num;
	}
	else if (n % 2 != 0)//nΪ����
	{
		for (int i = 1; i <= maxnum_2; i++)
		{
			int num_2 = maxnum_2 - i;//ÿ��2�ĸ���
			int num_1 = n - (2 * num_2 + 1);//ÿ��1�ĸ���
			if (num_2 >= num_1)//2Ϊ��շ���λ��ȷ����
			{
				int up_num = num_1;
				while (up_num >= num_2)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
			else
			{
				int up_num = num_2;
				while (up_num >= num_1)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
		}
		return method_num;


	}


				
				

	

}






int main()
{
	int n = 50;
	//printf("���빲�м���̨��");
	//scanf_s("%d", &n);
	found_number_method(n);
	return 0;
}