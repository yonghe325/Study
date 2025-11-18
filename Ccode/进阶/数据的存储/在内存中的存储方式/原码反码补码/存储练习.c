#include<stdio.h>
#include<Windows.h>
#include<string.h>

//int main() {
//	char a = -1;
//	signed char  b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", (i + j));
//	return 0;
//}

//int main() {
//	unsigned int i;
//	for(i = 9;i >=0;i--)
//	{
//		printf("%u\n",i);
//		Sleep(1000);
//	}
//	return 0;
//}

//int main() {
//	char a[1000];
//	int i;
//	for ( i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a) );
//	return 0;
//}

//unsigned char i = 0;
//int main() {
//	for ( i = 0; i <= 255; i++)
//	{
//		printf("%d hello world\n",i);
//		Sleep(150);
//	}
//	return 0; 
//}

int main(){
	//if (strlen("abc")-strlen("abcdef") > 0 )
	//if ((int)strlen("abc")-(int)strlen("abcdef") > 0 )
	if (strlen("abc") > strlen("abcdef"))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}