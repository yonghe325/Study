//��ʾ����ַ��������ƶ�,���м���
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit !!!!";
	char arr2[] = "0000000000000000000";

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//sz����\0
	int left = 0;//0
	int right = sz - 2;//19
	
	//int right = strlen(arr2)-1 ;//19
	//strlen������\0	
	
	while (left <= right)
	{

	
		arr2[left++] = arr1[left];//��++,��ִ��,������
		arr2[right--] = arr1[right];
		
		system("cls");//�����Ļ
		
		printf("%s\n", arr2);
		Sleep(1000);//ֹͣ500ms
		//printf("\r");//����ƶ�������
		
		//left++ ;
		//right-- ;
		//�ŵ�[]��
	} 




	return 0;
}