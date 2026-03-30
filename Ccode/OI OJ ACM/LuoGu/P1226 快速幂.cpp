#include<iostream>
using namespace std;
typedef long long LL;
LL a, b, p;
LL qpow(LL a,LL b ,LL p) {
	LL ret = 1;
	while (b) {
		if (b & 1) ret = ret * a % p;
		//判断当前b最右侧的二进制位是否为1
		//为1则使ret乘上当前的a(a此时已经倍增)
		//为0则ret不变
		a = a * a % p;
		//无论当前b的二进制位是否为1
		//都使 a的阶数 倍增为 当前a的阶数的两倍
		b >>= 1;
		//将b右移一位
	}
	return ret;
}
int main() {
	cin >> a >> b >> p;
	printf("%lld^%lld mod %lld = %lld", a, b, p, qpow(a, b, p));
	return 0;
}