#include <stdio.h>


int main()
{
	int arr[3][4] = {0,2,3,4,5,6,7,8,9,10,11};
	int byte_sizeall = sizeof(arr);
	//��Ԫ�ص��ֽ�
	printf("byte_sizeall = %d\n", byte_sizeall);
	
	int size_One_number = sizeof(arr) / sizeof(arr[0]);
	//һά�����Ԫ�ظ���
	// ��Ԫ�ص��ֽ� / ��ά��������ֽ� = һά�����Ԫ�ظ���
	printf("size_One_number = %d\n", size_One_number);
	
	int size_Two_number = sizeof(arr[0]) / sizeof(arr[0][0]);
	//��ά�����Ԫ�ظ���
	//��ά��������ֽ� / ��ά����ÿ��Ԫ�ص��ֽ� = ��ά�����Ԫ�ظ���
	printf("size_Two_number = %d\n", size_Two_number);
	
	
	printf("arr ==  %p\n", arr);
	printf("arr+1 ==  %p\n", arr+1);
	//arr[0] = {0,1,2,3};
	//arr����"0"���Ԫ�صĵ�ַ
	//arr[1] = {4,5,6,7}
	// arr+1����"4"���Ԫ�صĵ�ַ
	//arr[2] = {8,9,10,11};
	//arr+2����"8"���Ԫ�صĵ�ַ

	//printf("&arr[0] == %p\n", &arr[0]);
	////��(0)Ԫ�صĵ�ַ
	//printf("&arr[0]+1 == %p\n", &arr[0] + 1);
	
	
	
	
	printf("%d\n", sizeof(arr));
	
	
	
	
	
	
	
	
	//printf("arr ==  %p\n", arr);
	////arr������(0)Ԫ�صĵ�ַ
	//printf("arr+1 == %p\n", arr + 1);
	////�ڶ���Ԫ�صĵ�ַ
	//printf("---------------\n");
	//printf("&arr[0] == %p\n", &arr[0]);
	////��(0)Ԫ�صĵ�ַ
	//printf("&arr[0]+1 == %p\n", &arr[0] + 1);
	////�ڶ���Ԫ�صĵ�ַ
	//printf("---------------\n");
	//printf("&arr == %p\n", &arr);
	////����ĵ�ַ
	//printf("&arr+1 == %p\n", &arr + 1);
	////���������ĵ�ַ
	//printf("---------------\n");
	//printf("%d\n", sizeof(arr));




	return 0;
}