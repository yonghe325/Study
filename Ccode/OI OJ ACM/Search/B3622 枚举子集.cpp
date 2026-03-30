#include<iostream>
using namespace std;
int num;
string path = "";
void dfs(int pos) {
	if (pos > num) {
		cout << path << endl;
		return;
	} 
	path += "N";
	dfs(pos + 1);
	//for (int i = num-pos; i >= 0; i--) path.pop_back();
	//回溯
	//回溯到pos的上一层
	path.pop_back();

	path += "Y";
	dfs(pos + 1);
	path.pop_back();
}

int main() {
	cin >> num;
	dfs(1);
	return 0;
}