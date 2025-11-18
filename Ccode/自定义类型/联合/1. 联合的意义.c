#include<stdio.h>

struct St
{
	int a;
	char c;
};

union Un
{
	int a;
	char c;
};
int main() {
	union Un u;
	printf("%u\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.a));
	printf("%p\n", &(u.c));

	return 0;
}