#include <stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		if (5 == i)
		{
			i++;
			continue;
		}
		printf_s("%d\n", i);
	}
	return 0;
}