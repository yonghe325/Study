#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);
	//��str��ǰ6��ֵ����Ϊ-
	puts(str);
	//��ӡstr

	char arr1[] = "12345678901234567890";
	memset(arr1+9, '#', 5);
	printf("arr1= %s\n",arr1);
	
	char arr2[] = "��������������������";
	//һ�������ַ������ֽ�
	memset(arr2, '1', 2);
	//��ǰ2���ֽڻ�Ϊ1
	printf("arr2= %s\n",arr2);
	//��һ��������Ϊ2��1
	
	
	return 0;
}