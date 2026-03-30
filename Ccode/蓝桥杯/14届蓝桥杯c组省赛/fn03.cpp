#include <iostream>
#include <vector>
#include <algorithm>
//小蓝想知道游戏结束时如果有其中一个国家获胜，最多发生了多少个事件
//
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<vector<int>>arr(3,vector<int>(n+1,0));
	int mid = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			cin >> mid;
			arr[i][j + 1] += (arr[i][j] + mid);
		}
	}
	//存放
	//并统计前缀和
	long long sum = 0;
	long long Nmax = 0;
	for (int i = n; i >= 1 ;i--) {
		sum = arr[0][i] + arr[1][i] + arr[2][i];
		Nmax = max(max(arr[0][i], arr[1][i]), arr[2][i] ) ; 
		if (Nmax > sum - Nmax) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
	//

	
	return 0;
}
//统计前缀和, 从后向前遍历
//如果存在一个大于两个, 返回下标
//否则返回-1