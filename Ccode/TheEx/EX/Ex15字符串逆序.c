#include <stdio.h>
#include <math.h>

void reverse_string(char *string,int varnum,int static_size)//"abcdeffg",6,6
{
	if ( varnum == static_size/2)
	{
		return;
	}
	string[varnum] = string[varnum] ^ string[static_size - varnum];
	string[static_size - varnum] = string[varnum] ^ string[static_size - varnum];
	string[varnum] = string[static_size - varnum] ^ string[varnum];
	if ( (varnum == (static_size/2 + 1)) && (static_size%2 != 0))
	{
		return;
	}
	reverse_string(string, varnum - 1, static_size);

}





int main()
{
	char arr[] = "1234567890";
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse_string(arr,sz-2,sz-2);
	printf("%s\n", arr);


	return 0;
}