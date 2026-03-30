#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main02()
{
	char a1, a2;
	long long a3;
	int len = 0;
	cin >> a1 >> a2 >> a3;
	long long mid;
	int ret = 0;
	while (cin >> a1 >> a2 >> mid ) {
		
		if (a1 == a2)
		{
			if (mid - a3<= 1000)
			{
				len++;
			}
			else {
				len = 0;
			}
		}
		else {
			len = 0;
		}
		a3 = mid;
		ret = max(ret, len);
	}
	cout << ret;
	// 请在此输入您的代码
	return 0;
}