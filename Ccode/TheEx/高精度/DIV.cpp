#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
#include<utility>
//高精度/低精度
using namespace std;
void DIV(){
	string DIV1;
	int DIV2;
	cin >> DIV1;
	cin >> DIV2;
	int A[1000] = { 0 };
	for (size_t i = 0; i < DIV1.size(); i++) {
		A[i] = (DIV1[DIV1.size() - 1 - i] - '0');
	}
	//逆序被除数
	int tmp = 0;
	int ret[1000] = { 0 };
	//临时数t,代替DIV1做进位除法
	for (int i = DIV1.size()-1; i >=0 ; i--)
	{
		tmp = tmp * 10 + A[i];
		ret[i] += tmp / DIV2;
		tmp %= DIV2;
	}
	//此时tmp为余数
	//除完消除前导0
	int len = DIV1.size();
	while (len > 1 && ret[len - 1] == 0) len--;
	//打印
	for (int i = 0; i < len; i++)
	{
		cout << ret[len - 1 - i];
	}
	cout << "......" << tmp << endl;
}