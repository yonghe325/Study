#include<stdio.h>
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
void muen() {
	printf("*************************************\n");
	printf("***********1.Add    2.Sub     *******\n");
	printf("***********3.Mul    4.Div     *******\n");
	printf("***********0.end              *******\n");
	printf("*************************************\n");
}
void calc(int(*pf)(int, int)) {
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数 : \n");
	scanf_s("%d %d", &x, &y);
	ret =pf(x, y);
	printf("%d\n", ret);
}


int main() {
	int input = 0;

	do {
		muen();
		printf("请选择运算 : \n");
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);

			break;
		case 3:
			calc(Mul);

			break;
		case 4:
			calc(Div);

			break;
		case 0:
			printf("退出运算\n");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	} while (input);


	return 0;
}