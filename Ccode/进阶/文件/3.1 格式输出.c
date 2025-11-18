#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

struct S
{
	char arr[30];
	int age;
	float score;
};

int main() {
	//打开文件
	FILE* pf = fopen("D:\\c语言，java学习\\Study\\Ccode\\测试文件存放处\\test1.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	struct S s = { 0 };
	///演示格式输出
	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	//printf("%s %d %f", s.arr, s.age, s.score);
	fprintf(stdout,"%s %d %f", s.arr, s.age, s.score);


	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}