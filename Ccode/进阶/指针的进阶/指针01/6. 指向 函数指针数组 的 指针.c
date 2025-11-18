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

int main() {
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//函数指针数组

	int(*(*pfArr)[5])(int, int) = &pfArr;
	return 0;
}