#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strpy01(char* dest, const char* sou) {
	assert(dest);
	assert(sou);
	char* dest0 = dest;
	//返回dest的拷贝
	while (*sou !='\0') {
		*dest = *sou;
		sou++;
		dest++;
	}
	return dest0 ;
}

//跟精简写法
char* my_strpy02(char* dest, const char* sou) {
	assert(dest && sou);
	char* dest0 = dest;
	while (*dest++ = *sou++);
		//复制,同时判断
		//当*sou == \0时
		//*dest 先被赋值为 \0
		//然后while判断真假
		//因为此时*dest ==\0,*sou == \0
		//while判断为假,结束循环
	return dest0;
}

int main() {
	char arr[] = "abcdefg";
	char drr[20] = { 0 };
	char* drr2 = my_strpy02(drr, arr);
	printf("%s\n", drr);
	printf("%s\n", drr2);
	return 0;
}