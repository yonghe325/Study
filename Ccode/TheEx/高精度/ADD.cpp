#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;
void ADD() {
	string ADD1;
	string ADD2;
	cin >> ADD1;
	cin >> ADD2;
	int A1 = ADD1.size();
	int A2 = ADD2.size();
	int len = max(A1, A2);
	int A[1000] = { 0 };
	int B[1000] = { 0 };

	for (size_t i = 0; i < A1; i++) {
		A[i] =(ADD1[A1 - 1 - i] - '0');
	}
	for (size_t i = 0; i < A2; i++) {
		B[i] = (ADD2[A2 - 1 - i] - '0');
	}
	//逆序
	int ret[1000] = { 0 };
	for (int i = 0; i < len; i++)
	{
		ret[i] += ( A[i] + B[i] );
		ret[i + 1] = ret[i] / 10;
		ret[i] %= 10;
	}
	//加和
	for (int i = 0; i < len + 1; i++)
	{
		cout << ret[len + 1 - 1 - i];
	}
	//打印
}