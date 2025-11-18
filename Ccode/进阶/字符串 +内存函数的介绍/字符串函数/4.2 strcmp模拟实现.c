#define _CRT_SECURE_NO_WARNINGS
//忽略安全警告
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* lhs, const char* rhs) {
	assert(lhs && rhs);
	//递归简练版
	if (!(*lhs - *rhs) && *lhs != '\0')
	{
		return my_strcmp(++lhs, ++rhs);
	}
	else
	{
		return *lhs - *rhs;
	}
	//if(*lhs == '\0' && *rhs == '\0'){
	//	return 0;
	//}
	//else if (*lhs == *rhs)
	//{
	//	return my_strcmp(++lhs,++rhs);
	//}
	///*else if (*lhs > *rhs)
	//{
	//	return 1;
	//}*/
	//else
	//{
	//	return *lhs - *rhs;
	//}
}

int main() {
	char arr1[20] = "zhangsan";
	char arr2[] = "zhangsan";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}