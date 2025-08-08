//1!+2!+3!+4!+...+10!
#include <stdio.h>
int main() 
{
	int sum = 0;
	for (int j = 1; j <= 10; j++)
	{
		int num = 1;
		for (int  i = 1; i <= j; i++)
		{
			num *= i;
		}
		sum += num;
		

		printf_s("num= %d\n",num);
		printf_s("sum= %d\n",sum);
		printf_s("\n");
	}





	return 0;
}