#include <stdio.h>
//Êä³öÊı×Ö

int main()
{
	char ch = '0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	return 0;
}

		
	