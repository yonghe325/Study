#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main() {
	int n; cin >> n;
	vector<int> arr;
	int mid = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> mid;
		arr.push_back(mid);
	}
	sort(arr.begin(), arr.end());
	mid = n / 2;
	long long sum = 0;
	for (int i = 0; i < mid; i++) sum += arr[n - 1 - i] - arr[i];
	cout << sum << endl;;
	return 0;
}