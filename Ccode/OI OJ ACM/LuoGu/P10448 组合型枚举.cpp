#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> path;
void dfs(int pos) {
	if (path.size() == n)
	{
		for (int i = 0; i < n; i++) cout << path[i] << " ";
		cout << endl;
		path.pop_back();
		return;
	}
	while (pos <= m) {
		path.push_back(pos);
		if (path[0] > (m - n) + 1) return;
		dfs(pos + 1);
		pos++;
	}
	//if ( path.size() ) path.pop_back();
	//第一版 : 给最后当第一位为m的时候,不用 pop ,直接跳出
	//path.pop_back();
	//第二版 : 由于在while加入了范围if判断,这里不用再加if
	if ( path.size() ) path.pop_back();
	//第三版 : 当n=1时,不会进行while里的if判断
	//		   此时自然出while时 , path为空,此时进行pop会导致越界
	//所以还是要加size判断
	return;
}
int main() {
	cin >> m >> n;
	dfs(1);

	return 0;
}