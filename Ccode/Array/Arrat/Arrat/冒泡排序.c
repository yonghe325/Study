//����һ����������,ͨ��ð������,�������������
#include <stdio.h>
void printarr(int arr[],int size)//����Ԫ�صĵ�ַ
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//��ӡ���麯��

int bubble_sort(int* arr,int size)//����Ԫ�صĵ�ַ
{
	
	if (size == 1)  return 0 ;
	
	for (int i = 0; i < size-1; i++)
	{
		if ( arr[i]>arr[i+1])//+1������һ��Ԫ��
		{
			arr[i] = arr[i] ^ arr[i + 1];
			arr[i + 1] = arr[i] ^ arr[i + 1];
			arr[i] = arr[i] ^ arr[i + 1];
		}
	}
	bubble_sort(arr, --size);
	//�ź�һ��Ԫ��
	//������һ��		
}
//




		
int main() 
{
	int arr[] = {11,10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	printarr(arr, sz);

	return 0;
}
	


	

