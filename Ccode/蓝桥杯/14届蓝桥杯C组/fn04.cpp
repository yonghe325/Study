#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char>arr;
	char mid;
	while (cin.get(mid)) {
		arr.push_back(mid);
	}
	//逐字符读取
	vector<int>ret(5,0);
	//只记录次数
	int index = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == '*') {
			switch (index) {
			case 0:
			case 1:
				ret[index] = 60;
				break;
			case 2:
				ret[index] = 24;
				break;
			case 3:
				ret[index] = 31;
				break;			
			case 4:
				ret[index] = 12;
				break;
			}
		}
		if (arr[i] == '-')
		{

		}
	}
	return 0;
}
//421,3,151-31 *