//输入n, 1 <= n <= 30
//有 n 阶台阶,每次只能走 1 阶或 2 阶
//共有几种走法
#include<stdio.h>
void found_number_method(int n)
{
	//第一种解决方法
	//每两层为一个单元
	//每个单元有2种走法
	//第一种: 1+1
	//第二种: 2

	//第二种解决方法
	//n可以差分为
	//x个1,y个2
	//x+2y = n
	//运用插空法确定xy固定时的走法
	//最后每个走法相加
	int maxnum_2 = n / 2;//二的最大个数
	int method_num = 0;

	if ( n % 2 == 0)//n为偶数
	{
		for (int i = 1; i <= maxnum_2 ; i++)
		{
			int num_2 = maxnum_2 - i;//每次2的个数
			int num_1 = n - 2 * num_2;//每次1的个数
			if (num_2 >= num_1)//2为插空法的位置确定项
			{
				int difference = num_2 - num_1;
				int up_num = 1;
				for (int i = difference; i > 0; i--)
				{
					up_num *= (num_2 - i);
				}
				method_num += (up_num) / (!num_1);
			}
			else
			{
				int up_num = num_2;
				while (up_num >= num_1)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
		}
		return method_num;
	}
	else if (n % 2 != 0)//n为奇数
	{
		for (int i = 1; i <= maxnum_2; i++)
		{
			int num_2 = maxnum_2 - i;//每次2的个数
			int num_1 = n - (2 * num_2 + 1);//每次1的个数
			if (num_2 >= num_1)//2为插空法的位置确定项
			{
				int up_num = num_1;
				while (up_num >= num_2)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
			else
			{
				int up_num = num_2;
				while (up_num >= num_1)
				{
					up_num *= (up_num - 1);
					--up_num;
				}
				method_num += (up_num) / (!num_1);
			}
		}
		return method_num;


	}


				
				

	

}






int main()
{
	int n = 50;
	//printf("输入共有几节台阶");
	//scanf_s("%d", &n);
	found_number_method(n);
	return 0;
}