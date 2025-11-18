//输入一个数
// 如果这个数的某个数位为奇数,则将这个数位变为1
// 偶数则变为0
#include<stdio.h>
#include<math.h>
int change(int num) {
	static int mid = 0;
	static int count = 0;
	if (num / 10 != 0 || num > 0)
	{
		if ((num % 10) % 2 != 0)
		{
			mid += pow(10, count);
		}
		count++;
		return change(num / 10);
	}
	return mid;
}

int main() {
	//123456789
	//int mid = 0;
	//int num = 123456;
	//int num = 222222;
	//int num = 11111111;
	 //int num =12121212;
	//for (int i = 0; i < 32; i++)
	//{
	//	if(num/10 !=0 ||num < 10 ) {
	//		//mid = num % 10;
	//		if ((num % 10) % 2 != 0)
	//		{
	//			mid += pow(10,i);
	//		}
	//	}
	//	num /= 10;
	//	if (num == 0)
	//		break;
	//}
	int num = 0;
	scanf_s("%d", &num);
	int ret = change(num);
	printf("%d\n", ret);

	return 0;
}