#include <stdio.h>

static int binary_search(int arr[], int found_number, int sz, int left, int right)
{
	if (left <= right)
	{
		int mid = (right - left) / 2 + left;
		if (arr[mid] < found_number)
		{
			//left = mid + 1;
			//left��һ
			right = sz - 1;//���±겻��

			binary_search(arr, found_number, sz, mid + 1, right);
		}
		else if (arr[mid] > found_number)
		{
			//right = mid - 1;
			//right��һ
			binary_search(arr, found_number, sz, left, mid - 1);
		}
		else
		{
			return mid;
			//�ҵ������±�
		}
	}
	else if (left > right)
	{
		return -1;
		//�Ҳ���
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	int found_number = 0;//��������
	printf("��������:> ");
	scanf_s("%d", &found_number);
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��

	//int ret = binary_search(arr,found_number,sz,0,0);
	if (binary_search(arr, found_number, sz, 0, 0) == -1)
	{
		printf_s("�Ҳ���\n");
	}
	else {
		printf_s("�ҵ���\n");
		printf_s("�±�Ϊ%d\n", binary_search(arr, found_number, sz, 0, 0));
	}

	return 0;
}





