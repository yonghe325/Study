#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	
	for ( i = 0; i < 10; i++)
	{
		arr[i] = 0;
		printf("%d\n", i);
	}

	return 0;
}