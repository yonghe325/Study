#include <stdio.h>
#include <math.h>
#include <string.h>
//寻找全部a位数的水仙花数
//int main( a )
//{
//	int arr[];
//	//const int len = (int)log10(num) + 1;//四位数
//	for (int i = 0; i < a; i++)
//	{
//		arr[i];
//	}
//}
int main()
{
	int a = 2;
	//a为位数减一	
	int pri = pow(10,a);
	printf("%d\n", pri);

	while ( pri < pow(10,(a+1)) ) {
		//printf("%d\n", pri);
		
		int w100 = pri / 100;
		int w10 = (pri%100) / 10;
		int w1 = pri%10;
		//求位数位上的数
		//共有a个
		
		if ( pri == ( pow(w100,( a + 1)) + pow(w10, (a + 1)) + pow(w1, (a + 1)) ))
		{
			printf("%d\n", pri);
		}
		//判断是否为水仙数
		pri++;

	}
	return 0;
}
	






