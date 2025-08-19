#include <stdio.h>
#include<math.h>
//00001010
int found_one_num(int a)
{
	static int number = 0;
	for (int i = 0; i < 32 ; i++)
	{
		//printf("number = %d\n", number);
		if (  (  a & (int)pow(2, i)  ) == (int)pow(2, i) )
		{
			number++;
		}

	}
	return number;
	
}
int main()
{
	printf("~3 = %d",~3);
	int a = 0;
	printf("a = ");
	scanf_s("%d", &a);
	int retnum =  found_one_num(a);
	printf("retnum = %d", retnum);
	return 0;
}