#include <iostream>
using namespace std;
//奇数都可以
int main03()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    long long x = 0;
    for (int i = 0; i < n; i++) {
        //
        cin >> x;
        //奇数一定可以
        if (!(x % 2) || x == 1) {
            sum++;
            //如果这个数可以被拆分为奇数个相等的数
            //则满足要求
            //即可以被一个奇数整除
            for (int j = 3; j*2  <= x; j += 2) {
                if (x % j == 0) {
                    sum++;
                    break;
                }
            }
        }
    }
    // 请在此输入您的代码
    cout << sum << endl;
    return 0;
}