#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//定义一个10个空间的整形数组
	// []内不能为变量
	//定义是[]内代表申请空间个数
	//使用时[]内代表下标
	
	for (size_t i = 0 ; i <10 ; i++)
	{ 
		printf("%d\n", arr[i]);
	}
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//通过遍历打印arr数组
	char arrchar1[] = { 'aaa','bbb','ccc' };
	printf("%d\n", strlen(arrchar1));//随机值
	
	char arrchar2[4] = { 'aaa','bbb','ccc'};
	printf("%d\n", strlen(arrchar2));//默认最后一位为\0,输出3
	
	char arrchar3[5] = { 'aaa','bbb','ccc'};//定义五个位置
	printf("%d\n", strlen(arrchar3));//默认计算最后有元素的下标,输出3



	return 0;
}

