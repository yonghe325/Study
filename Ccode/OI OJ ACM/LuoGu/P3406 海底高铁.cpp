#include<iostream>
using namespace std;
const int N = 1e5 + 1;
long long cnum[N] = { 0 };
//每段铁路经过了几次
//使用差分数组进行统计
//cnum[1]表示1~2段铁路经过的次数
long long mon[N][3] = {0};
//每段铁路的费用
//mon[0]:买票价
//mon[1]:买卡之后的票价
//mon[2]:卖卡的价钱
long long city[N] = { 0 };
int main() {
	int n, m; cin >> n >> m;
	//输入n:共有车站,m:价钱
	for (int i = 1; i <= m; i++) cin >> city[i];
	//记录经过的城市
	//int L, R;
	//在经过的城市中两个一组遍历
	//小的放右边,大的放左边,在count数组中进行操作
	for (int i = 1; i < m; i++)//第m个城市之后,没有下一个城市,不需要等于m
	{
		//if (city[i]>city[i+1])//此时city[i]在右边
		//{
		//	cnum[city[i + 1]]++;
		//	cnum[city[i]]--;
		//}
		//else
		//{
		//	cnum[city[i]]++;
		//	cnum[city[i + 1]]--;
		//}
		cnum[(city[i] < city[i + 1] ? (city[i]) : (city[i + 1]))]++;
		cnum[(city[i] > city[i + 1] ? (city[i]) : (city[i + 1]))]--;


	}
	for (int i = 1; i < n; i++)
	{
		cnum[i] += cnum[i - 1];
	}
	//统计前缀和
	//完成计算每段铁路经过的次数
	long long sum = 0;
	for (int i = 1; i < n; i++)//统计i到i+1段铁路的费用
	{
		//i 代表 i到i+1段
		cin >> mon[i][0] >> mon[i][1] >> mon[i][2];
		//输入票价,买卡后票价,买卡价钱
		sum += mon[i][0] * cnum[i] < mon[i][2] + mon[i][1] * cnum[i] ? 
		(mon[i][0] * cnum[i]) : (mon[i][2] + mon[i][1] * cnum[i]);
	}
	cout << sum << endl;
	return 0;
}
