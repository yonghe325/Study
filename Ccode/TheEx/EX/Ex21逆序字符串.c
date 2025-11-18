#include<stdio.h>
#include<string.h>
void str_re(char* ptr, int left ,int right)
{


}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int left = 0;
	int right = strlen(arr);
	printf("%u\n", strlen(arr));

	/*for (int i = 0; i < strlen(arr)/2; i++)
	{
		
		arr[left] = arr[left] ^ arr[right];
		arr[right] = arr[left] ^ arr[right];
		arr[left] = arr[left] ^ arr[right];
	}*/


	//int se = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", se);
	//str_re(arr, se);

	//printf("%s\n", arr);   


	return 0; 
}