#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//����һ��10���ռ����������
	// []�ڲ���Ϊ����
	//������[]�ڴ�������ռ����
	//ʹ��ʱ[]�ڴ����±�
	
	for (size_t i = 0 ; i <10 ; i++)
	{ 
		printf("%d\n", arr[i]);
	}
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//ͨ��������ӡarr����
	char arrchar1[] = { 'aaa','bbb','ccc' };
	printf("%d\n", strlen(arrchar1));//���ֵ
	
	char arrchar2[4] = { 'aaa','bbb','ccc'};
	printf("%d\n", strlen(arrchar2));//Ĭ�����һλΪ\0,���3
	
	char arrchar3[5] = { 'aaa','bbb','ccc'};//�������λ��
	printf("%d\n", strlen(arrchar3));//Ĭ�ϼ��������Ԫ�ص��±�,���3



	return 0;
}

