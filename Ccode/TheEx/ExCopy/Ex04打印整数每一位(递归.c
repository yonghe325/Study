#include <stdio.h>
#include <math.h>
 
int found_the_max_digit(int num)
{
	for (int i = 0; i < 12; i++)
	{
		if ( (num / (int)pow(10, i)) == 0)
		{
			return i-1;
		}
	}
}




void printdigit(int num,int digit,int static_digit)
{
	printf("%d\n",num/(int)pow(10, digit));
	if (digit == 1)
	{
		printf("%d\n",num % (int)pow(10, digit));
		return 0;
	}
	printdigit( num % (int)pow(10, digit ) , digit - 1 , static_digit);
}






int main()
{
	int number = 12345678;
	//printf("the_max_digit = %d\n", found_the_max_digit(number));
	printdigit(number, found_the_max_digit(number), found_the_max_digit(number));
	return 0;
}


