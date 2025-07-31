#include <stdio.h>
enum imformtion
{
	first,
	second,
	third
};
enum SEX
{
	male,//枚举常量,0
	formale,//1
	secret//2
	//若打印枚举常量,则输出其位置
};


//枚举类型

int main() {
	int num = 10;
	enum imformtion c = first;
	enum SEX ZY = male;
	printf("maleadd = %d\n", male);//0
	printf("male = %s\n", male);//null
	return 0;
}