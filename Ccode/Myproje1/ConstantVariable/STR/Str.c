#include <stdio.h>
int main3() {
	//char �ַ�����
	//c�������ַ�������
	//"abcdef"
	////��""������ַ����ͳ�Ϊ�ַ�������ֵ
	//char ch = 'w';
	char arr1[] = "abcdef";//������־\0ռ��һ��Ԫ��
	//0~6
	char arr2[] = { 'a','b','c','d','e','f','\0' };//��\0
	//0~5
	//�ַ�����,�����ռ����Զ�ƥ��ռ�
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	int len = strlen("abc");
	printf("%d", len);

	return 0;
}