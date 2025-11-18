#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main0() {
	//打开文件
	FILE* pf = fopen("D:\\c语言，java学习\\Study\\Ccode\\测试文件存放处\\test.txt", "r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("fopen");
		return 1;
	}

	//读文件

	//fgetc 读取一个字符\
	//while连续读取
	//int ch = 0;
	//while ((ch = fgetc(pf))!=EOF) {
	//	printf("%c", ch);
	//}

	//fgets 读取一行字符
	char arr[20];
	printf("%s\n", fgets(arr, 20, pf));
	//读取20个字符,最后一个字符为换行符

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}