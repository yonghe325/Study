#include <stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a= %d\t", a);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//		//����test����
//		//����aֻ��test�����ڴ��
//	}
//	return 0;
//}
void test()
{
	static int b = 1;
	//��b���뾲̬��
	b++;
	printf("b= %d\t", b);
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		test();
		//����test2����
		//ÿ��ʹ��test����,���������ݴ���������ֵ
		//����һ��ʹ��,��������������
		//������Static���ξֲ�������ʱ��,�ı��������ڴ��еĴ洢λ��(��ַ)
		
	}
	return 0;
}