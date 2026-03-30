#include<stdio.h>
int main402()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[0] - &arr[9]);
	
	return 0; 
}