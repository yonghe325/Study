#include<iostream>
#include<vector>
using namespace std;
//在归并排序的同时,计算逆序对
int merge(vector<int> &arr, int L,int mid,int R) {
	vector<int> help;
	int l = L, r = mid+1,count = 0;
	while (l<=mid&&r<=R) {
		//count += arr[l] > arr[r] ? (mid - l + 1) : 0;
		//在归并中计算逆序对
		//当arr[l]>arr[r]时,arr[l]与arr[r]一定是逆序对
		//由于arr[l]到arr[mid]此时已经有序
		//说明从arr[l]到arr[mid]都比arr[r]要大
		//因此count直接加上从arr[l]到arr[mid]之间元素的个数
		help.push_back(arr[l] < arr[r] ? arr[l++] : (count+= (mid - l + 1), arr[r++]));
	}
	while (l<=mid) help.push_back(arr[l++]);
	while (r <= R) help.push_back(arr[r++]);
	for (int i = 0; i <= R-L; i++) arr[L+i] = help[i];
	return count;
}
//完成归并
int ProcessMerge(vector<int> &arr,int L,int R) {
	if (L == R) return 0;
	int mid = L + ((R - L) >> 1);
	return ProcessMerge(arr, L, mid) + ProcessMerge(arr, mid + 1, R) + merge(arr, L, mid, R);
	//int ret1 = ProcessMerge(arr, L, mid);
	//int ret2 = ProcessMerge(arr, mid+1, R);
	//int ret3 = merge(arr,L,mid,R);
	//return ret1 + ret2 + ret3;
}
int main() {
	vector<int> arr;
	int num;
	cin >> num;
	for (size_t i = 0; i < num; i++)
	{
		int mid = 0;
		cin >> mid;
		arr.push_back(mid);
	}
	//输入
	int ret = ProcessMerge(arr, 0, arr.size() - 1);
	cout << "共有" << ret << "个逆序对" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
