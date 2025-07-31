#include <stdio.h>
#include <string.h>
int main(){
	printf("%d\n", strlen( "c:\test\628\test.c"));
	//输出14
	// c
	// :
	// \t
	// e
	// s
	// t
	// \62(八进制字符) ==> 8**2*6+8**1*2=
	// 8
	// \t
	// e
	// s
	// t
	// .
	// c
	//转义字符占一个位置
	//共14个元素,不包括\0
	return 0;

}