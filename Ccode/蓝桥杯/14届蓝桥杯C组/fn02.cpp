#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string total[10] = { "1111110" ,"0110000","1101101","1111001",
		"0110011","1011011","1011111","1110000","1111111","1111011" };
	//存放所有数字对应的七段码
	vector<string>arr;
	string mid;
	for (int i = 0; i < 18;i++) {
		cin >> mid;
		arr.push_back(mid);
	}
	//存储所有七段码
	//vector<vector<int>>ret(18);
	int sum = 1;
	//最后可能的数字
	vector<int>first;
	vector<int>second;
	for (int i = 0; i < 18; i++)
	{
		int cur_digit = 0;
		first = { 0,1,2,3,4,5,6,7,8,9 };
		while (cur_digit<7) {
			if (arr[i][cur_digit] == '0')
			{
				cur_digit++;
				continue;
			}
			for (int j = 0; j < first.size(); j++)
			{

				if (total[first[j]][cur_digit] == arr[i][cur_digit])
				{
					second.push_back(first[j]);
				}
				//=='0'不判断, 直接存入second
			}
			first.swap(second);
			second.clear(); 
			cur_digit++;
		}
		//筛选七遍
		//ret[i].swap(first);
		sum *= first.size();
	}
	cout << sum << endl;
	//对18个码列举可能性
	return 0;
}