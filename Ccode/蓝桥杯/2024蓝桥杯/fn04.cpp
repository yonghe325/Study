#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int count(int x) {
	int sum = 0;
	int mid = 0;
	while (x) {
		mid = x % 10;
		if (mid == 8)
		{
			sum += 2;
		}
		else if (mid == 0|| mid == 4 || mid == 6 || mid == 9 ) {
			sum++;
		}
		x /= 10 ;
	}
	return sum;
}
//返回该数的封闭图形个数
int main04()
{
	// 请在此输入您的代码
	//先按照封闭图行的个数升序排序
	//然后按照数字大小顺序升序排序
	//类似桶排序
	map<int, vector<int>>arr;
	int n = 0;
	cin >> n;
	int mid = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> mid;
		arr[count(mid)].push_back(mid);
		//放入map
	}
	for (auto& i : arr) {
		sort(i.second.begin(), i.second.end());
		//对每个桶进行排序
		for (int j = 0; j < i.second.size(); j++)
		{
			cout << i.second[j] << " ";
		}
		//直接输出
	}

	return 0;
}