#include <stdio.h>
#define MAX 101
#define STR "abc"
//define����,�޷��޸�
int main() {
	const int num = 15;
	printf("%d\n", num);

	const int n = 15;
	//n�������Ǳ���,�����г�����
	//�޷��޸�
	int arr[10] = { 0 };//����
	//����һ��Ԫ�ظ���Ϊn��һά����
	//nֻ��Ϊ����
	printf("STR=%s\n", STR);
	return 0;
}