#include<stdio.h>
int main()
{
	int N = 0;
	printf("���������鳤��");
	scanf_s("%d", &N);
	int arr[50] = { 0 };
	printf("����������Ԫ��,ÿ��Ԫ�ؼ��ÿո����\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int delete_num = 0;
	printf("������ɾ������:>");
	scanf_s("%d", &delete_num);
	int j = 0;
	for (int i = 0; i < N;i++)
	{
		if (arr[i] != delete_num )
		{
			arr[j++] = arr[i];
		}
	}
			
		
	for (int i = 0; i < j; i++)
	{
		printf("%d", arr[i]);

	}




	return 0;
}