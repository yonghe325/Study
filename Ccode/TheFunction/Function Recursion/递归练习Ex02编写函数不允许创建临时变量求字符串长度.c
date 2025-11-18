//递归练习Ex02编写函数不允许创建临时变量求字符串长度
#include <stdio.h>
//int test01(char* str)指针传参
int test01(char str[])//临时变量版,数组传参
{
	int count = 0;
	//计数器
	while (*str != '\0')
	{
		count++;
		str++;
		//str+1
		//查找下一个字节(地址)
	}
	return count;
}

int test02(char* str)//递归无临时变量版
{
	if (*str != '\0')
	{
		return 1 + test02(++str);
		//不为空计数加一,继续递归,知道查找到\0
		//return 1 + test02(str++);
		//后加加先执行后运算,导致test02函数收到的str地址始终不变	
		//造成栈溢出
	}
	return 0;
	//若为空字符串,直接返回0
}
int test03(char* str)
{
	if (*str != '\0')
	{
		return 1 + test03(str+=2);
		//每个汉字两个字节
		//每次间隔一个字节查找
	}
	return 0;
}

		
	


int main()
{
	char arr[] = "123456";
	char arr2[] = "一二三四";
	printf("有临时变量版:> %d\n", test01(arr));
	printf("无临时变量版:> %d\n", test02(arr));
	//数字字母一个字节
	printf("非汉字版:> %d\n", test02(arr2));
	printf("汉字版:> %d\n", test03(arr2));
	//每个汉字两个字节
	return 0;
}