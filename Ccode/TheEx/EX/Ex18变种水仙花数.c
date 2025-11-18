//变种水仙花数 ：把任意的数字，从中间分成两个数字，
//比如1461可以柝分成（1和461）,〔14和61〕,（146和1），如果所有拆分后的乘积之和等于自身，
//则是一个 Lily number

#include<stdio.h>
#include<math.h>

int found_Lily(int num,int digit,int sum)
{
	sum += (  (   num / (int)pow(10,(digit - 1))  ) * (  num % (int)pow(10,(digit - 1))  )  );
	if (digit == 2)
		return sum;
	found_Lily(num , digit - 1,sum);
}
	
	






int main()
{
	int digit = 5;
	for (int i = (int)pow(10,digit-1); i < (int)pow(10,digit); i++)
	{
		int retnum = found_Lily(i, digit ,0 );
		if ( retnum == i )
		{
			printf("%d是变种水仙花数\n", i);
			continue;
		}
	}
	return 0;
}