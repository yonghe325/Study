#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int>arr;
	int mid = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> mid;
		arr.push_back(mid);
	}
	// 放入数组
	// 对称差分
	// 1  2  3  4
	// 3  1 
	vector<int>arrL;
	//vector<int>arrR;
	//1 2 3 4 5
	for (int i = 0; i < arr.size()/2; i++)
	{
		arrL.push_back(arr[arr.size() - 1 - i] - arr[i]);
	}
	//for (int i = arr.size() / 2; i < arr.size(); i++)
	//{
	//	arrR.push_back(arr[i] - arr[arr.size()-1-i]);
	//}
	//以题目的方式去计算L和R数组的操作次数
	//先每次操作两个数
	//然后在操作一个数
	int sumL = 0,sumR = 0;
	for (int i = 0; i < arrL.size()-1; i++)
	{
		while(arrL[i]>0 && arrL[i+1]>0) {
			sumL++;
			arrL[i]--;
			arrL[i+1]--;
		}
		while(arrL[i] < 0 && arrL[i + 1] < 0) {
			sumL++;
			arrL[i]++;
			arrL[i + 1]++;
		}
	}
	//for (int i = 0; i < arrR.size() - 1; i++)
	//{
	//	if (arrR[i] > 0 && arrR[i + 1] > 0) {
	//		sumR++;
	//		arrR[i]--;
	//		arrR[i + 1]--;
	//	}
	//	else if (arrL[i] < 0 && arrL[i + 1] < 0) {
	//		sumR++;
	//		arrR[i]--;
	//		arrR[i + 1]--;
	//	}
	//}
	//统计一次操作两个数的
	for (int i = 0; i < arrL.size(); i++)
	{
		while(arrL[i]) {
			sumL++;
			arrL[i] += arrL[i] > 0 ? -1 : 1;
		}
	}
	//for (int i = 0; i < arrR.size(); i++)
	//{
	//	while(arrR[i]) {
	//		sumR++;
	//		arrR[i] += (-arrR[i]) / (arrR[i]);
	//	}
	//}
	//统计只操作一个数的情况
	//cout << ((sumL < sumR) ? (sumL) : (sumR)) << endl;
	cout << sumL;

	return 0;
}
//前缀和
