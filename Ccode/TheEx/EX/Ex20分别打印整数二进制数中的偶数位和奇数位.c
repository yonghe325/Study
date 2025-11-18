#include<stdio.h>
#include<math.h>
void Printf_ou(int a)
{
	printf("ou = ");

	for (int i = 0; i < 32; i += 2)
	{
		printf("%d  ", ((a >> i) & 1));
	}
}

void Printf_ji(int a)
{
	printf("ji = ");

	for (int i = 1; i < 32; i += 2)
	{
		printf("%d  ", ((a >> i) & 1));
	}
	}

int main()
{
	int a = 150;
	Printf_ji(a);
	printf("\n");
	Printf_ou(a);
	return 0;
}