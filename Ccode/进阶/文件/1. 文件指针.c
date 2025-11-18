#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
int main() {
	//打开文件
	FILE* pf = fopen("D:\\c语言，java学习\\Study\\Ccode\\测试文件存放处\\test.txt","r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//写文件
	//for (char i = 'a'; i <= 'z'; i++)
	//{
	//	fputc(i, pf);
	//}
	//读文件
	int ch =0;
	while ( (ch = fgetc(pf))!=EOF) {
		printf("%c", ch);
	}
	
	//关闭文件
	fclose(pf);
	return 0;
}