#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
//	cin >> s;
//	cout << "这是s : " << s << endl;dd
	getline(cin, s);
	//getline(cin, s, 'e');
	//cout << "这是s : " << s << endl;
 	//cout << s.size() << endl;
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << ' ' << endl;
	}
	//逐个打印

}