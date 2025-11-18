#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main2() {
	//打开文件
	FILE* pf = fopen("D:\\c语言，java学习\\Study\\Ccode\\测试文件存放处\\test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	
	//fputc写入一个字符
	//for (char i = 'a'; i <= 'z'; i++)
	//{
	//	fputc(i, pf);
	//}

	//fputs写入一行字符
	//fputs("abc\n", pf);
	//fputs("abc\n", pf);
	
	
	
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}