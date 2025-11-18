#include<stdio.h>
int GCD(int n, int m) {
	int t = 0;
	if (n > m) {
		while (m) {
			t = n % m;
			n = m;
			m = t;
		}
		t = n;
	}
	else if(n < m)
	{
		while (n) {
			t = m % n;
			m = n;
			n = t;
		}
		t = m;
	}
	else
	{
		return 1;
	}
	return t;
}
int main() {
	int a,b;
	printf("输入两个数 : ");
	scanf_s("%d %d", &a, &b);
	//先求最小公约数
	//辗转相除法
	int GCD_num = GCD(a, b);
	printf("%d\n", GCD_num);

	//最小公倍数
	//最小公倍数 = 两数之积 / 最大公约数
	int LCM_num = a / GCD_num * b;
	printf("%d\n",LCM_num);
	int sum = GCD_num + LCM_num;
	printf("%d\n",sum);

	//printf("%d", t);
	//t为最大公约数
	//最小公倍数为
	//x =  max * min % t

	return 0;
}