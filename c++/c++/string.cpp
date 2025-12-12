#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() {
	//string s;
//	cin >> s;
//	cout << "这是s : " << s << endl;dd
	//getline(cin, s);
	//getline(cin, s, 'e');
	//cout << "这是s : " << s << endl;
 	//cout << s.size() << endl;
	//for (int i = 0; i < s.size(); i++) {
	//	cout << s[i] << ' ' << endl;
	//}
	////逐个打印

	//////////////////////////////
	//迭代器
	//string s = "abcdef";
	//string::iterator it1 = s.begin();
	//string::iterator it2 = s.end();
	//cout << *it1 << endl;
	//it1++;
	//cout <<"it1++ = " << *it1 << endl;

	//if (it1 < it2) {
	//	cout << "<" << endl;
	//}
	//else {
	//	cout << ">" << endl;
	//}
	////运算
	//
	////遍历
	//for (string::iterator its = s.begin(); its < s.end(); its++) {
	//	cout << *its << " ";
	//}
	////正序遍历
	//cout << endl;
	////或
	//for (string::iterator ite = s.end()-1; ite != s.begin(); ite--) {
	//	cout << *ite << " ";
	//}
	////倒序遍历]
	//cout << endl;
	//for (auto it = s.end() - 1; it != s.begin(); it--) {
	//	cout << *it << " ";
	//}
	//auto自动识别遍历
	//////////////////////////////////////
	////push_back
	//string s;
	//s.push_back('h');
	//s.push_back('e');
	//s.push_back('l');
	//s.push_back('l');
	//s.push_back('o');
	//cout << s << endl;
	//s.push_back(' ');
	//s.push_back('w');
	//s.push_back('o');
	//s.push_back('r');
	//s.push_back('l');
	//s.push_back('d');
	//cout << s << endl;
	//s.push_back(' ');
	//s.push_back('love');
	//cout << s << endl;
	//string s1;
	//char c;
	//for (c = 'a'; c <= 'z'; c++) {
	//	s1.push_back(c);
	//}
	//cout << s1 << endl;
	/////////////////////////////////
	////+和+=
	//	//尾部拼接
	//string s1 = "hello";
	//cout << s1+" world" << endl;
	//s1 += " world";
	//cout << s1 << endl;
	//	//头部拼接
	//string s2 = " world";
	//cout << "hello" + s2 << endl;
	/////////////////////////////////////
	//pop_back
	//string s = "hello world";
	//cout <<"删除前" << s << endl;
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//s.pop_back();
	//cout <<"删除后" << s << endl;
		//当删除空字符串时,行为未定义
	// //循环删除
	//while (s.size()) {
	//	cout << s << endl;
	//	s.pop_back();
	//}
	//////////////////////////////////////
	//find
	//	// find(const string& str, size_t pos = 0)
	//string s = "helllo world hello everyone";
	//string str = "llo";
	//size_t n = s.find(str,0);
	////查找第一个子串
	//cout << n << endl;
	//n = s.find(str, n+1);
	////查找第二个子串
	//cout << n << endl;
	//	//find(const char* s,size_t pos, size_t n)
	//string s = "helllo world hello everyone";
	//size_t n = s.find("word", 0, 3);
	////在字符串的pos这个位置 开始查找 c风格字符串s 中的 前n个字符
	//cout << n << endl;
	//n = s.find("everyday", n+1, 3);
	//cout << n << endl;
	//	//npos
	//string s = "aaaaaaa";
	//size_t n = s.find('b');
	//if (n == string::npos) {
	//	cout << "没找到 'b' " << endl;
	//}
	//	//重复查找
	//cout << "npos = " << string::npos << endl;
	//string s = "helllo world hello everyone";
	//size_t n = s.find('o');
	//while (n !=string::npos) {
	//	cout << n << ' ';
	//	n = s.find('o', n + 1);
	//}
	//////////////////////////////////////////////
	////substr
	//string s = "hello woeld everyone";
	//string sub1 =  s.substr();
	//cout << sub1 << endl;
	//string sub2 = s.substr(5,3);
	//cout << sub2 << endl;
	//string sub3 = s.substr(s.size()-3, 50);
	//cout << sub3 << endl;
	///////////////////////////////////
	//stoi and stol
	string s1 = "123qw";
	string s2 = "qw123";
	size_t tag1;
	size_t tag2;
	int ret1 = stoi(s1, &tag1, 10);
	//int ret2 = stoi(s2, &tag2, 10);
	cout << "ret1 = " << ret1 << endl << "tag1 = " << tag1 << endl;
	//cout << "ret2 = " << ret2 << endl << "tag2 = " << tag2 << endl;

}