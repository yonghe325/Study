#include <iostream>
using namespace std;
int main()
{
	// 请在此输入您的代码
	int ret = 0;
	int day = 0;
	int week = 6;
	int max = 0;
	for (int i = 1; i <= 12;i++) {
		day = 1;
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			max = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			max = 30;
			break;
		case 2:
			max = 28;
		}
		while (day <= max) {
			if (i == 1 || i == 10 || i == 11 || i == 12) {
				ret += 5;
			}
			else {
				if (day == 1 || (day >= 10 && day <= 19) || day == 21 || day == 31)
				{
					ret += 5;
				}
				else {
					if (week == 0)
					{
						ret += 5;
					}
					else {
						ret++;
					}
				}
			}
			cout << i << " " << day << " " << week << " " << ret << endl;
			day++;
			week = (week + 1) % 7;
		}
		

	}
	return 0;
}