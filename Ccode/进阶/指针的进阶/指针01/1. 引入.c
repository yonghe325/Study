#include<stdio.h>
int main() {
	/*char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);*/

	/*char* p = "abcdef ";
	printf("%s\n", p); */


	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
	{
		printf("p1 == p2\n");
	}
	else
	{
		printf("p1 != p2\n");
	}
	if (arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");
	}
	return 0;
}