#include <stdio.h>
#include <string.h>


int mian()
{
	//strcpy拷贝字符串,包含结尾的\0
	char str1[] = "copy the string";
	char str2[40];
	char str3[40];
	strcpy(str2,str1);
	//将str1拷贝给str2
	strcpy(str3, "copy successful");
	//直接拷贝
	printf("str1= %s\n str2= %s\n str3= %s\n",str1,str2,str3);

	return 0;
}