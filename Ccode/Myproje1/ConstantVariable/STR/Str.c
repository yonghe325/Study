#include <stdio.h>
#include <string.h>
int main() {
	//char �ַ�����
	//c�������ַ�������
	//"abcdef"
	////��""������ַ����ͳ�Ϊ�ַ�������ֵ
	//char ch = 'w';
	char arr1[] = "abcdef";//������־\0ռ��һ��Ԫ��
	//0~6
	char arr2[] = { 'a','b','c','d','e','f','\0' };//��\0
	char arr3[] = { 'a','b','c','d','e','f'};//��\0
	//0~5
	//�ַ�����,�����ռ����Զ�ƥ��ռ�
	
	int size = sizeof("abc");
	//sizeof�󳤶Ȱ���\0
	int len = strlen("abc");
	//strlenΪ�⺯��,��Ҫͷ�ļ�strlen.h
	//strlen��������int
	//strlen�󳤶Ȳ�����\0
	printf("%d\n", len);//3
	printf("%d\n", size);//4
	
	
	printf("arr1= %s\n", arr1);
	printf("arr2= %s\n", arr2);
	printf("arr1lenth= %zd\n", strlen(arr1));
	printf("arr2lenth= %zd\n", strlen(arr2));
	printf("arr3lenth= %zd\n", strlen(arr3));
	//arr3��\0��ֹ��,��������㳤��,ֱ�����ڴ����ҵ�\0
	//sizeofͬ����\0Ϊ��ֹ��

	return 0;
}