#include<stdio.h>
//函数指针也是指针
//把函数指针在数组中
//就是函数指针数组
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}
//以上四个函数
//返回类型,形参类型.形参个数相同
//称为同一种函数类型

//int main() {
//	int (*pf)(int, int) = Add;
//	//pf是一个函数指针
//
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	//使用一个相同的函数指针数组 存放 相同类型函数的地址
//	//arr就是函数的数组
//
//	//通过
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", arr[i](8, 4));
//		 //通过访问函数指针数组的下标
//		//访问对应函数
//		//这种实现的方式叫做转移表
//	}
//	return 0;
//}


int main() {
	int input;
	int x, y, ret;
	int(*pfArr[5])(int,int) = {0,Add,Sub,Mul,Div};
	//创建函数指针数组
	//存放使用函数
	// 使用 0 占位
	//通过函数指针数组
	//方便以后增加,维护函数
	printf("请选择运算 : \n");
	scanf_s("%d", &input);
	if (input)
	{
		printf("提出运算器 \n");
	}
	else if (input>0 &&input<=4)
	{
		pfArr[input];
		//访问对应下标的函数
		printf("请输入两个操作数 : \n");
		scanf_s("%d %d", &x, &y);
		ret = pfArr[input](x, y);
		printf("%d\n",ret);
	}
	else
	{
		printf("选择错误 >>");
	}
	return 0;
}