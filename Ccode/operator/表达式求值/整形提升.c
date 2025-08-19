#include<stdio.h>
int main()
{
	short a = 0xb6;
	//a = 10110110
	//整型提升后11111111 11111111 11111111 10110110
	//	 0xb6 = 00000000 00000000 00000000 10110110
	char b = 0xb60;
	// b =  00001011 01100000
	//整型提升后00000000 00000000 00001011 01100000
	//  0xb60 = 00000000 00000000 00001011 01100000
	int c = 0xb600;
	if (a == 0xb6) { printf("a\n"); }
	if (b == 0xb60) { printf("b\n"); }
	if (c == 0xb600) { printf("c\n"); }
	

	char d = 1;
	printf("d = %u\n",sizeof(d));
	//直接输出字节
	printf("+d = %u\n",sizeof(+d));
	printf("-d = %u\n",sizeof(-d));
	//参与运算导致整形提升,提升至4字节





	return 0;
}