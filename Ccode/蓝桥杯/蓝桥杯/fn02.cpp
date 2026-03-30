#include "head.h"
int fn02() {
	int n = 0;
	cin >> n;
	set<int> arr01;
	set<int> arr02;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr01.insert(x);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr02.insert(x);
	}
	int sum = 0;
	for (int i = 0; i < n;i++) {
		sum += abs(*arr02.begin() - *arr01.begin());
		arr01.erase(arr01.begin());
		arr02.erase(arr02.begin());
	}
	return sum;

}
