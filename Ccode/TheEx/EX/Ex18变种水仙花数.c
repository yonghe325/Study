//����ˮ�ɻ��� ������������֣����м�ֳ��������֣�
//����1461�����طֳɣ�1��461��,��14��61��,��146��1����������в�ֺ�ĳ˻�֮�͵�������
//����һ�� Lily number

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
			printf("%d�Ǳ���ˮ�ɻ���\n", i);
			continue;
		}
	}
	return 0;
}