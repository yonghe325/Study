#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
#include<utility>
using namespace std;

//高精度减法
//始终保持大数减小数
void SUB() {
	string SUB1;
	string SUB2;
	cin >> SUB1;
	cin >> SUB2;
	if (SUB1.size() < SUB2.size())
	{
		swap(SUB1, SUB2);
		cout << "-";
	}
	else if (SUB1.size() ==  SUB2.size()) {
		for (int i = 0; i < SUB1.size(); i++)
		{
			if (SUB1[i] > SUB2[i]) break;
			else if(SUB1[i] < SUB2[i])
			{
				swap(SUB1, SUB2);
				cout << "-";
				break;
				//此时应是-1
			}
		}
	}
	//保持sub1绝对值最大
	int Al = SUB1.size();
	int Bl = SUB2.size();
	int len = max(Al, Bl);
	int A[1000] = { 0 };
	int B[1000] = { 0 };
	for (size_t i = 0; i < Al; i++) {
		A[i] = (SUB1[Al - 1 - i] - '0');
	}
	for (size_t i = 0; i < Bl; i++) {
		B[i] = (SUB2[Bl - 1 - i] - '0');
	}
	//逆序
	int ret[1000] = { 0 };
	for (int i = 0; i < len+1; i++)
	{
		ret[i] += (A[i] - B[i]);
		ret[i + 1] += ret[i] < 0 ? (ret[i] += 10, -1) : 0;
	}
	//求减
	while (len > 1 && ret[len - 1] == 0) len--;
	for (int i = 0; i < len; i++)
	{
		cout << ret[len - 1 - i];
	}
}