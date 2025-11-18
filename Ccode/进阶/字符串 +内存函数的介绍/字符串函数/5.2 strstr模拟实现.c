#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str, const char* substr) {
	//有   返回子串地址
	//没有 返回NULL
	assert(str && substr);
	char* ret = &*substr;
	while (*str && *str++ != *substr);
	char* p = &*--str;
	while (*substr && *str++ == *substr++);
	if (!(*substr)) 
		return ret;
	else if (!(*str)) 
		return my_strstr(++p, ret);
	return NULL;
}

int main() {
	//char arr1[] = "abcdefg";
	char arr1[] = "aabbccbbdasdbbacdb";
	char arr2[] = "bmm";
	//char arr2[] = "def";

	//情况1 : 
	//abcdefg
	//def

	//情况2:
	//aabbcbba
	//bba
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("子串不存在");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;

	return 0;
}