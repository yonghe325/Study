//求N以内的斐波那契数列
#include <stdio.h>



int Fb(int num01,int num02,int num03,int N)
{
	//每个循环有01,02,03
	//01总是最小,03总是最大

	printf("01 %d\n", num01);
	printf("02 %d\n", num02);
	//打印01,02

	num03 = num02 + num01; //8 //34
	if ( num03 >= N)
	{
		printf("03 NUM= %d\n", num02);
		return num03;
	}
	printf("03 %d\n", num03);
	//判断03
	
	num01 = num02 + num03; //3 //13
	num02 = num03 + num01; //5 //21
	printf("\n");
	//计算01,02
		

	if (num01 >= N)
	{
		printf("01 NUM= %d\n", num03);
		return num03;
	}
	else if(num02 >= N)
	{
		printf("02 NUM= %d\n", num01);
		return num03;
	}
	else
	{
		return Fb(num01,num02,num03,N);
	}
	//判断01,02,是否继续
	

		
		

}

int main()
{
	int N = 0;
	printf("N=");
	scanf_s("%d", &N);
	Fb(1, 1, 0 , N);
	return 0;
}
