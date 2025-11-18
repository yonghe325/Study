#include<stdio.h>
int ADD(int a, int b) {
	return a + b;
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
void muen() {
	printf("*************************************\n");
	printf("***********1.Add    2.Sub     *******\n");
	printf("***********3.Mul    4.Div     *******\n");
	printf("***********0.end              *******\n");
	printf("*************************************\n");
}

//////////////////////////////////
//基础代码
int main() {
	int input;
	
	int x,y,ret;
	do{
		muen();
		printf("请选择运算 : \n");
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			printf("请输入两个操作数 : \n");
			scanf_s("%d %d", &x, &y);
			ret = ADD(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数 : \n");
			scanf_s("%d %d", &x, &y);
			ret = Sub(x, y); 
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数 : \n");
			scanf_s("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数 : \n");
			scanf_s("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出运算\n");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	}while(input);
	

	return 0;
}