//�۰����,���ֲ���
//��������

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int found_number = 2;//��������
	int sz = sizeof(arr) / sizeof(arr[0]);//���ҳ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		//����������ƽ��ֵ
		//������Ԫ�ظ�������ʱ,(left+right)�������

		int mid = (right - left) / 2 + left;
		//����������ƽ��ֵ
		//�������������,���ᳬ��int���͵ķ�Χ
		if (arr[mid] < found_number)
		{
			left = mid + 1;
		}
		else if (arr[mid] >found_number)
		{
			right = mid - 1;
		}
		else 
		{
			printf("�ҵ���");
			printf_s("%d %d\n", mid, arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf_s("�Ҳ���");
	}
	return 0;
}


	
		


			

		


		

	

	

