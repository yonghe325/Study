//�ݹ���ϰEx02��д��������������ʱ�������ַ�������
#include <stdio.h>
//int test01(char* str)ָ�봫��
int test01(char str[])//��ʱ������,���鴫��
{
	int count = 0;
	//������
	while (*str != '\0')
	{
		count++;
		str++;
		//str+1
		//������һ���ֽ�(��ַ)
	}
	return count;
}

int test02(char* str)//�ݹ�����ʱ������
{
	if (*str != '\0')
	{
		return 1 + test02(++str);
		//��Ϊ�ռ�����һ,�����ݹ�,֪�����ҵ�\0
		//return 1 + test02(str++);
		//��Ӽ���ִ�к�����,����test02�����յ���str��ַʼ�ղ���	
		//���ջ���
	}
	return 0;
	//��Ϊ���ַ���,ֱ�ӷ���0
}
int test03(char* str)
{
	if (*str != '\0')
	{
		return 1 + test03(str+=2);
		//ÿ�����������ֽ�
		//ÿ�μ��һ���ֽڲ���
	}
	return 0;
}

		
	


int main()
{
	char arr[] = "123456";
	char arr2[] = "һ������";
	printf("����ʱ������:> %d\n", test01(arr));
	printf("����ʱ������:> %d\n", test02(arr));
	//������ĸһ���ֽ�
	printf("�Ǻ��ְ�:> %d\n", test02(arr2));
	printf("���ְ�:> %d\n", test03(arr2));
	//ÿ�����������ֽ�
	return 0;
}