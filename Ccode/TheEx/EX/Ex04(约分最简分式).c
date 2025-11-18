//约分最简分式
#include <stdio.h>
int main()
{
	
	int theNumerator = 0;
	int theDenumerator = 0;
	int t;
	scanf_s("%d/%d", &theNumerator, &theDenumerator);
	int a = theNumerator;
	int b = theDenumerator;
	//for (int i = 2; i < 10; i++)
	//{
	//		if (theDenumerator % theNumerator == 0)
	//		{
	//			theDenumerator /= theNumerator;
	//			theNumerator = 1;
	//			/*break;*/
	//		}
	//		else if ((theDenumerator % i == 0) & (theNumerator % i == 0))
	//		{
	//			theDenumerator /= i;
	//			theNumerator /= i;
	//		}
	//		else 
	//		{
	//			i = 1;
	//		}
	while (b > 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	//寻找最大公因数
	printf("%d/%d", theNumerator/a, theDenumerator/a);


	
	return 0;

}
