#include <stdio.h>


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("arr ==  %p\n", arr);
	//arr������(0)Ԫ�صĵ�ַ
	printf("arr+1 == %p\n", arr+1);
	//�ڶ���Ԫ�صĵ�ַ
	
	printf("---------------\n");
	printf("&arr[0] == %p\n", &arr[0]);
	//��(0)Ԫ�صĵ�ַ
	printf("&arr[0]+1 == %p\n", &arr[0]+1);
	//�ڶ���Ԫ�صĵ�ַ
	
	printf("---------------\n");
	printf("&arr == %p\n", &arr);
	//����ĵ�ַ
	printf("&arr+1 == %p\n", &arr+1);
	//���������ĵ�ַ

	printf("---------------\n");
	printf("%d\n", sizeof(arr));


	return 0;
}