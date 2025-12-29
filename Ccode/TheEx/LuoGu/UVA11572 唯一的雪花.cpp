#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n; int mid;
		vector<int> arr;
		for (int i = 0; i < n; i++)	cin >> mid , arr.push_back(mid);
		unordered_map <int, int> m;
		int len = 0, L = 0, R = 0;
		while (R<n) {
			if (  m.find(arr[R]) == m.end() || m.find(arr[R])->second < L)
			{
				if (m.find(arr[R]) != m.end())
					m[arr[R]] = R++;//更新最新的重复数
				else
					m.insert({ arr[R],R++ });
			}
			else
			{
				len = (R - L) > len ? (R - L) : len;
				L = m.find(arr[R])->second + 1;
			}
		}
		len = (R - L) > len ? (R - L) : len;
		cout << len << endl;
	}
	return 0;
}