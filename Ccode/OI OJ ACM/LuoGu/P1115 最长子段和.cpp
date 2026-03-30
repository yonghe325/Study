#include<iostream>
using namespace std;
const int N = 2 * 10e5 + 10;
long long arr[N] = { 0 };
int main() {
	int n; cin >> n;
	
	for (int i = 1; i <= n; i++) cin >> arr[i];
	//填入数据
	for (int i = 1; i <= n; i++) arr[i] += arr[i - 1];
	//计算前缀和
	long long ret = -1e20;
	//记录最大子段和
	long long prve = 0;
	//记录ret前的最小前缀和
	for (int i = 1; i <= n; i++)
	{
		ret = max(ret, arr[i] - prve);
		//以arr[i]为结尾的最大子段和
		//应是arr[i]和中去掉arr[i]前的的最小子段和
		prve = min(prve, arr[i]);
		//更新arr[i]前的最小子段和
	}
	cout << ret << endl;
	return 0;
}