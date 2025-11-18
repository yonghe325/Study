#include<stdio.h>
int main()
{
	int N = 0;
	printf("请输入数组长度");
	scanf_s("%d", &N);
	int arr[50] = { 0 };
	printf("请输入数组元素,每个元素间用空格隔开\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int delete_num = 0;
	printf("请输入删除的数:>");
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