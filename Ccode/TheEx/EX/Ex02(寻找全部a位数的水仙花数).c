#include <stdio.h>
#include <math.h>
#include <string.h>
//Ѱ��ȫ��aλ����ˮ�ɻ���
//int main( a )
//{
//	int arr[];
//	//const int len = (int)log10(num) + 1;//��λ��
//	for (int i = 0; i < a; i++)
//	{
//		arr[i];
//	}
//}
int main()
{
	int a = 2;
	//aΪλ����һ	
	int pri = pow(10,a);
	printf("%d\n", pri);

	while ( pri < pow(10,(a+1)) ) {
		//printf("%d\n", pri);
		
		int w100 = pri / 100;
		int w10 = (pri%100) / 10;
		int w1 = pri%10;
		//��λ��λ�ϵ���
		//����a��
		
		if ( pri == ( pow(w100,( a + 1)) + pow(w10, (a + 1)) + pow(w1, (a + 1)) ))
		{
			printf("%d\n", pri);
		}
		//�ж��Ƿ�Ϊˮ����
		pri++;

	}
	return 0;
}
	






