#include <stdio.h>
#include <string.h>
int main(){
	printf("%d\n", strlen( "c:\test\628\test.c"));
	//���14
	// c
	// :
	// \t
	// e
	// s
	// t
	// \62(�˽����ַ�) ==> 8**2*6+8**1*2=
	// 8
	// \t
	// e
	// s
	// t
	// .
	// c
	//ת���ַ�ռһ��λ��
	//��14��Ԫ��,������\0
	return 0;

}