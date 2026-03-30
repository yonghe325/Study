#include"head.h"

//统计所有数6出现的次数
//放入map中
//从次数<6的数开始向次数为0的数开始遍历
//当次数不为6时, 每次优先找次数高的
// 5->1
// 4->2,4->1->1
// 3->3,3->2->1
// 2->2->2
// 1x
map<int, int>arr;
vector<int>found;
//只用found记录选取的数
int count6(long long x) {
	int ret = 0;
	while (x) {
		ret += ((x % 10) ^ 6) ? 0 : 1;
		x /= 10;
	}
	return ret;
}
//统计6的次数
int mul(int x) {
	for (int i = 1; i <=5; i++)
	{
		if (arr.count(i) && i>=x ) {
			if (!(--arr[i]))
			{
				arr.erase(i);
			}
			found.push_back(i);
			return i;
		}
		//如果反向找到
		//直接返回i
		//i即为arr[i]中6的个数
	}
	return 0;
}
//先找<=x的
//找不到再找>x
int fn05() {
	int n;
	cin >> n;
	long long x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[count6(x)]++;
	}
	//统计所有数中6出现的次数
	int mid = 0, ret = 0;
	while (arr.size()) {
		mid = arr.rbegin()->first;
		if (mid>=6)
		{
			ret+= arr.rbegin()->second;
			arr.erase(mid);
			continue;
		}
		//大于6的键直接加入ret
		//while (mid<6) {
		//	mid += mul(6-mid);
		//}
		int original_num = mid;
		if (!(--arr[original_num]))
		{
			arr.erase(original_num);
		}
		//先取出
		//防止重复计算
		for (int i = 0; i < 2; i++)
		{
			//第一次凑, 优先凑一
			mid += mul(1);
			if (mid >=6)
			{
				ret++;
				break;
			}
			//第二次凑, 凑等于+=6的
			mid += mul(6 - mid); 
			if (mid >= 6)
			{
				ret++;
				break;
			}
			//没凑上, 说明已经没有能凑的了
			return ret;
		}
	}
	return ret;
} 