#include <stdio.h>
#include <math.h>
int  get_maxdigitnum(unsigned int num)//求数位
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
}//从高位向低位

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
}//从低位向高位

int main()
{
	unsigned int print_num = 0;
	printf("输入一个数");
	scanf_s("%u", &print_num);
	
	int maxdigit = get_maxdigitnum(print_num);
	//计算共有几位
	int return_num =  test01(print_num, maxdigit);
	printf("\n");
	return_num =  test02(print_num);
	//按位数打印
	return 0;
}
		


	
	


	
	
	
	

