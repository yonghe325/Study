#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	//%pΪȡ��ַ��ʽ��,���Ե�ַ�ĸ�ʽ���
	int* p = &a;
	//int* ����int���͵�ָ�����
	//char* ����char���͵�ָ�����
	//p����ָ�����,int*����������
	//*˵��p��ָ�����,int˵��ָ��Ķ�����int���� 

	*p = 20;
	//ͨ��p�д�ŵĵ�ַ,�ҵ�pָ��Ķ���
	//a�ͱ���ֵ20
	
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch );

	printf("sizeof(short*)= %zu\n", sizeof(short*));//8
	printf("sizeof(char*)= %zu\n", sizeof(char*));//8
	printf("sizeof(int*)= %zu\n", sizeof(int*));//8
	printf("sizeof(float*)= %zu\n", sizeof(float*));//8
	printf("sizeof(double*)= %zu\n", sizeof(double*));//8

	int* p1, p2, p3;//ֻ��p1��ָ�����,p2,p3��int���ͱ���
	int* p4, * p5, * p6;//��ʱp4,p5,p6��Ϊָ�����

	
	return 0;
}