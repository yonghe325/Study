#include <stdio.h>
#include <math.h>
int main()
{
	int digit = 0;
	printf("输入数位:> ");
	scanf_s("%d",&digit);
	int num01 = pow(10, digit -1);
	int num02 = pow(10, digit);
	double retnum = 0;
	for (int i = num01; i < num02; i++)
	{
		retnum =  found(i, digit,0.0,digit);
		//printf("%d => retnum = %lf\n", i,retnum);
		if (retnum == i)
		{
			printf("%d是水仙数\n",i);
		}
	
	}
	return 0;
}
int found(int number,int digit,double sum,int the_static_digit)
{
	if ( digit != 1 )
	{
		int count =  number / pow(10, digit - 1);
			//printf("count = %d\n", count);
		
		sum = sum + (int)pow(count, the_static_digit);
			//printf("pow(count, count) = %lf\n",pow(count, count));
			//printf("sum = %d\n", (int)sum);
		
		found(	number % (int)(pow(10, digit - 1)),digit-1,sum, the_static_digit);

	}
	else
	{

		int count =  number % 10;
			//printf("count = %d\n", count);
		sum = sum + (int)pow(count, the_static_digit);
			//printf("pow(count, count) = %lf\n",pow(count, count));
			//printf("sum = %d\n\n", (int)sum);
		return sum;
	}

	


}
