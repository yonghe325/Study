//��С������
//��������������,�����������������С������LCM
//��������������
// һ�����ڼ������Լ��GCD
// һ�����ڼ�����С������LCM
#include <stdio.h>
int GCD = 0;
int LCM = 0;
int t = 0;
int GCDtest(int a,int b)
{
	if (b == 0)
	{
		return a;
	}
		
		//a=50
		//b=20
		//t = a % b ;//10
		//a = b;
		//b = t;
	/*printf_s("a= %d\n", a);
	printf_s("b= %d\n", b);*/
	//printf_s("t= %d\n",t);

	return GCDtest(b, a % b);
}
//�����Լ��

int LCMtest(int a, int b)
{
	int sum = a * b;
	LCM = sum / GCD;
}
//��С������LCM�����Լ��GCD�ĳ˻��������������ĳ˻�

int main()
{
	int num01 = 0;
	printf_s("��һ����");
	scanf_s("%d", &num01);
	int num02 = 0;
	printf_s("�ڶ�����");
	scanf_s("%d", &num02);
	
	if (num01 > num02)
	{
		GCD = GCDtest(num01, num02);
		LCM = LCMtest(num01, num02);
	}
	else
	{
		GCD = GCDtest(num02, num01);
		LCM = LCMtest(num01, num02);
	}
	printf_s("GCD= %d\n", GCD);
	printf_s("LCM= %d\n", LCM);
	//�ж�˭����,���������
	
	return 0;
}