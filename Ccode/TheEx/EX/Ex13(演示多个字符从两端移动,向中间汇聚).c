//演示多个字符从两端移动,向中间汇聚
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit !!!!";
	char arr2[] = "0000000000000000000";

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//sz包含\0
	int left = 0;//0
	int right = sz - 2;//19
	
	//int right = strlen(arr2)-1 ;//19
	//strlen不包含\0	
	
	while (left <= right)
	{

	
		arr2[left++] = arr1[left];//后++,先执行,后运算
		arr2[right--] = arr1[right];
		
		system("cls");//清空屏幕
		
		printf("%s\n", arr2);
		Sleep(1000);//停止500ms
		//printf("\r");//光标移动到行首
		
		//left++ ;
		//right-- ;
		//放到[]里
	} 




	return 0;
}