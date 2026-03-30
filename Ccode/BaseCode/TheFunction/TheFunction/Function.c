#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a,int b)
{
	int sum = a + b;
	//return (a + b);,直接返回a+b的值
	return sum;
	//sum为int类型,返回值也为int类型
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d",&n1,&n2);
	int sums = add(n1, n2);
	printf("sums= %d\n ",sums);

}