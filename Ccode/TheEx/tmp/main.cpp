#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int T = 0; cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        int ret[100] = { 0 };
        for (int i = 0; i < a.size(); i++) {
            ret[i] += a[i] - 48;
        }
        for (int i = 0; i < b.size(); i++) {
            ret[i] += b[i] - 48;
            ret[i + 1] += ret[i] / 10;
            ret[i] %= 10;
        }
        //相加
        int len = a.size() + b.size();
        for (int i = 0; i < len; i++) {
            cout << ret[i] << " ";
        }
        cout << endl;
    }
    return 0;
}