#include<stdio.h>
#include<math.h>
//求素数的几种方式
void menu()
{
	printf_s("0.查找范围\n");
	printf_s("1.判断一个数是否为素数\n");
	printf_s("2.判断是否为闰年\n");
	printf_s("3.退出\n");

}

void Prime_number_test01 (int M ,int N )
//M为起始值,N为结束值
//test01:从2~M遍历,如果当遍历到M-1时取模不为为0,则M为素数
{
	for (; M <= N ; M++)
	{
		for (int i = 2; i < M; i++)
		{
			if (M % i == 0)//==0则不是素数
				//判断M是否为素数
			{
				break;
			}
			else if (i == M - 1)
			{
				printf("%d  ", M);

				//printf("M%i=%d\n", M % i);
				//printf("M/i=%d\n", M / i);
			}
		}
	}
}
void Prime_number_test02(int M, int N)
//对M开平方,若有一个数小于M的开平方,求整除M,则M不是素数
//相对于test01,test02缩小了遍历范围
{
	for (; M <= N; M++)
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(M); i++)
		{
			//printf("sqrt(M)= %lf\n", sqrt(M));
			if (M % i == 0)//==0则不是素数
			//判断M是否为素数
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d  ", M);
		}
			
	}
}
void Prime_number_test03(int M, int N)
//对test02的优化
//偶数不可能是素数
//所以若M为偶数,从M+1开始查找,每次+2
//所以若M为奇数,从M开始查找,每次+2
{
	if ( M % 2 == 0)
	{
		M++;
	}
	for (; M <= N; M+=2)
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(M); i++)
		{
			//printf("sqrt(M)= %lf\n", sqrt(M));
			if (M % i == 0)//==0则不是素数
				//判断M是否为素数
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d  ", M);
		}

	}
	printf("\n");
}
void Leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
	{
		printf("%d年是润年\n",year);
	}
	else
	{
		printf("%d年不是润年\n",year);
	}

}
void Prime_number_test00(int M)
{
	for (int i = 2; i <= sqrt(M); i++)
	{
	//printf("sqrt(M)= %lf\n", sqrt(M));
		if (M % i == 0)//==0则不是素数
			//判断M是否为素数
		{
			printf("M不是素数\n");
			break;
		}
	}
	printf("M是素数\n");
}
//尽量把打印和判断分开

	
	
		

	



int main()
{
	int chose ;
	do
	{
		menu();
		printf("请选择:> ");
		scanf_s("%d", &chose);

		switch (chose)
		{
			case 0:
			{
				int M = 0;
				int N = 0;
				printf("输入起始值M= ");
				scanf_s("%d", &M);
				printf("输入结束值N(M能取到N)= ");
				scanf_s("%d", &N);

				//Prime_number_test01(M,N);
				//printf("\n");
				//Prime_number_test02(M,N);
				//printf("\n");
				Prime_number_test03(M,N);
			break;
			}
			case 1:
			{
				int M = 0;
				printf("输入判断数= ");
				scanf_s("%d", &M);
			break;
			}
			case 2:
			{
				int year = 0;
				printf("输入年份:> ");
				scanf_s("%d", &year);
				Leap_year(year);
			break;
			}
			case 3: { break; }
			default:
					printf("重新选择\n");
		}
	} while (chose != 3);
	printf("再见");
	return 0;
}

				
				

				



				
				






	
