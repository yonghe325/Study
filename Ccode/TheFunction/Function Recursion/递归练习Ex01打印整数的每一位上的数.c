#include <stdio.h>
#include <math.h>
int  get_maxdigitnum(unsigned int num)//����λ
{
	for (int i = 20; i >= 0; i--)
	{
		int mid = num / pow(10, i);
		if (mid > 0)
		{
			return (i + 1);
			//break;
		}
	}
}
int test01(unsigned int num,int digit)
{
	int everdigitnum = num / pow(10, digit - 1);//1
	printf("%d  ", everdigitnum);
	everdigitnum = num % (int)pow(10, digit - 1);//234
	if (everdigitnum == 0)
	{
		return 0;
	}
	test01(everdigitnum,digit-1);
}//�Ӹ�λ���λ

int test02(unsigned int num)
{
	//1234
	printf("%d  ",num%10);
	if (num < 9)
	{
		return 0;
	}

	test02(num / 10);
	return 0;
}//�ӵ�λ���λ

int main()
{
	unsigned int print_num = 0;
	printf("����һ����");
	scanf_s("%u", &print_num);
	
	int maxdigit = get_maxdigitnum(print_num);
	//���㹲�м�λ
	int return_num =  test01(print_num, maxdigit);
	printf("\n");
	return_num =  test02(print_num);
	//��λ����ӡ
	return 0;
}
		


	
	


	
	
	
	

